#include <bits/stdc++.h>
using namespace std;

string s1, s2;
vector<vector<int>> dp;
set<string> allLCS;   // to avoid duplicates

void backtrack(int i, int j, string current)
{
    if (i == 0 || j == 0)
    {
        reverse(current.begin(), current.end());
        allLCS.insert(current);
        return;
    }

=    if (s1[i - 1] == s2[j - 1])
    {
        backtrack(i - 1, j - 1, current + s1[i - 1]);
    }
    else
    {
        if (dp[i - 1][j] == dp[i][j])
            backtrack(i - 1, j, current);

        if (dp[i][j - 1] == dp[i][j])
            backtrack(i, j - 1, current);
    }
}

int main()
{
    cout << "Enter First String: ";
    cin >> s1;

    cout << "Enter Second String: ";
    cin >> s2;

    int n = s1.length();
    int m = s2.length();

    dp.assign(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << "\nLength of LCS: " << dp[n][m] << endl;

    backtrack(n, m, "");

    cout << "\nAll Possible LCS:\n";
    for (auto &str : allLCS)
        cout << str << endl;

    return 0;
}
