#include <bits/stdc++.h>
using namespace std;
int main()
{


    int b1=0;
    int b2=0;
    cout<<"Enter the staring value Assembly Line 1: ";
    cin>>b1;
    cout<<"Enter the staring value Assembly Line 2: ";
    cin>>b2;

    int e1=0;
    int e2=0;
    cout<<"Enter the end value Assembly Line 1: ";
    cin>>e1;
    cout<<"Enter the end value Assembly Line 2: ";
    cin>>e2;

    int n;
    cout<<"Enter the Number of nodes present in the Assembly Line: ";
    cin>>n;
    int sum1=0;
    int sum2=0;



    vector<int> a1(n,0);
    vector<int> a2(n,0);

    vector<int> t1(n,0);
    vector<int> t2(n,0);

    cout<<"Enter the Value for the node values for the Assembly Line 1"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a1.at(i);
    }

    cout<<"Enter the Value for the node values for the Assembly Line 2"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a2.at(i);
    }




    cout<<"Enter the Value for the Transmit/move time from Assembly Line 1 to Assembly Line 2"<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>t1.at(i);
    }

    cout<<"Enter the Value for the Transmit/move time from Assembly Line 2 to Assembly Line 1"<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>t2.at(i);
    }



    sum1=b1+a1[0];
    sum2=b2+a2[0];

    vector <vector<pair<int,int>>> path(2,vector<pair<int,int>>(n,{0,0}));
    path[0][0]={sum1,1};
    path[1][0]={sum2,2};

    int x1=0;
    int x2=0;
    for(int i=1;i<n;i++)
    {
        int prev1=sum1;
        int prev2=sum2;
        int stay1=prev1+a1[i];
        int switch1=prev2+a1[i]+t2[i];
        if(stay1<switch1)
        {
            sum1=stay1;
            path[0][i]={sum1,1};
        }
        else
        {
            sum1=switch1;
            path[0][i]={sum1,2};
        }

        int stay2=prev2+a2[i];
        int switch2=prev1+a2[i]+t1[i];
        if(stay2<switch2)
        {

            sum2=stay2;
            path[1][i]={sum2,2};
        }
        else
        {
            sum2=switch2;
            path[1][i]={sum2,1};
        }

    }



    sum1=sum1+e1;
    sum2=sum2+e2;

    int min_cost;
    int back_key;


     if(sum1 <= sum2)
    {
        min_cost = sum1;
        back_key = 1;
    }
    else
    {
        min_cost = sum2;
        back_key = 2;
    }

    cout<<"\nMinimum Cost: "<<min_cost<<endl;

    vector<int> result(n);
    int line = back_key;

    for(int i=n-1;i>=0;i--)
    {
        result[i] = line;
        line = path[line-1][i].second;
    }

    cout<<"Optimal Path: ";
    for(int i=0;i<n;i++)
        cout<<result[i]<<" ";

    cout<<endl;






    return 0;
}
