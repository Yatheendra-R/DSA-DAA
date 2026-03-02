#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max_w;
    int number_itm;

    cout<<"Max weight of the sack: ";
    cin>>max_w;
    cout<<"Enter the number of the item: ";
    cin>>number_itm;
    vector<int> wt(number_itm);
    vector<int> p(number_itm);

    vector<pair<int,int>> wt_p(number_itm);  // pre-sized

    int pr, WT;

    for(int i=0;i<number_itm;i++)
    {
        cout<<"Enter the profit for item "<<i+1<<" : ";
        cin>>pr;

        wt_p[i].second = pr;
    }

    for(int i=0;i<number_itm;i++)
    {
        cout<<"Enter the weight for item "<<i+1<<" : ";
        cin>>WT;

        wt_p[i].first = WT;
    }

    /*int pr;
    int WT;
    vector<pair<int,int>> wt_p;  //w,p

    for(int i=0;i<number_itm;i++)
    {
        cout<<"Enter the profit for item: "<<i+1<<" : ";
        cin>>pr;
        wt_p.push_back({0,pr});

    }
    for(int i=0;i<number_itm;i++)
    {
        cout<<"Enter the weight for item: "<<i+1<<" : ";
        cin>>WT;
        pr=wt_p.at(i).second;
        wt_p.at(i)={WT,pr};

    }*/

    sort(wt_p.begin(),wt_p.end());
    for(int i=0;i<number_itm;i++)
    {
        wt[i]=wt_p.at(i).first;
        p[i]=wt_p.at(i).second;
    }



    vector<vector<int>> dp(number_itm+1,vector<int>(max_w+1,0));

    for(int i=0;i<=number_itm;i++)
    {
        for(int w=0;w<=max_w;w++)
        {
            if(i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if(w<wt[i-1])
            {
                dp[i][w]=dp[i-1][w];

            }
            else
            {
                dp[i][w]=max(dp[i-1][w],dp[i-1][w-wt[i-1]]+p[i-1]);
            }
        }
    }
    for(int i=0;i<=number_itm;i++)
    {
        for(int w=0;w<=max_w;w++)
        {
            cout<<dp[i][w]<<" ";
        }
        cout<<endl;
    }

    int i = number_itm;
    int w = max_w;

    while(i > 0 && w > 0)
    {
        if(dp[i][w] != dp[i-1][w])
        {
            cout<<"Item "<<i<<" (Weight="<<wt[i-1]
                <<", Profit="<<p[i-1]<<")"<<endl;

            w = w - wt[i-1];   // reduce capacity
        }

        i--;
    }
    return 0;
}
