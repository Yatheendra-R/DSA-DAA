#include <bits/stdc++.h>
using namespace std;

int Tsp(int mask,int pos,int number_city,vector<vector<int>> &dist,vector<vector<int>> &dp)
{
    if(mask==(1<<number_city)-1)
    {
        return dist[pos][0];
    }
    if(dp[mask][pos]!=-1)
    {
        return dp[mask][pos];
    }
    int ans=INT_MAX;
    for(int city=0;city<number_city;city++)
    {
        if((mask&(1<<city))==0)
        {
            int newanswer=dist[pos][city]+Tsp(mask|(1<<city),city,number_city,dist,dp);
            ans=min(ans,newanswer);

        }


    }
    return dp[mask][pos]=ans;
}

int main()
{

    int number_city;
    cout<<"Enter the number of cities: ";
    cin>>number_city;

    vector<vector<int>> dist(number_city,vector<int>(number_city));
    vector<vector<int>> dp(1<<number_city,vector<int>(number_city,-1));

    for(int i=0;i<number_city;i++)
    {
        for(int j=0;j<number_city;j++)
        {
            if(i==j)
            {
                dist[i][j]=0;

            }
            else
            {
                cout<<"Enter the distance from city "<<i+1<<" to city "<<j+1<<" : ";
                cin>>dist[i][j];
            }


        }
    }

    cout<<Tsp(1,0,number_city,dist,dp)<<endl;// mask(starting from city of index 1),pos(index),number_city,dist,dp;


    return 0;
}
