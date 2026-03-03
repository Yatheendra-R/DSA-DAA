#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int n;
vector<vector<int>> dist;
vector<vector<int>> dp;

// TSP using DP + Bitmask
int tsp(int mask, int pos)
{
    // If all cities are visited
    if(mask == (1 << n) - 1)
        return dist[pos][0];  // return to starting city

    // If already computed
    if(dp[mask][pos] != -1)
        return dp[mask][pos];

    int ans = INF;

    // Try all cities
    for(int city = 0; city < n; city++)
    {
        // If city not visited
        if((mask & (1 << city)) == 0)
        {
            int newAns = dist[pos][city] +
                         tsp(mask | (1 << city), city);

            ans = min(ans, newAns);
        }
    }

    return dp[mask][pos] = ans;
}

int main()
{
    cout << "Enter number of cities: ";
    cin >> n;

    dist.assign(n, vector<int>(n));
    dp.assign(1 << n, vector<int>(n, -1));

    cout << "Enter distance matrix:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> dist[i][j];

    int result = tsp(1, 0);  // Start from city 0

    cout << "\nMinimum travelling cost: " << result << endl;

    return 0;
}
