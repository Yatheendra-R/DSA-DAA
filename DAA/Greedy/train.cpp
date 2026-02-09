#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of train: ";
    cin>>n;
    vector<pair<int,int>> arr(n);

    for(int i=0;i<n;i++)
    {
        int a;
        int d;
        cin>>a;
        cin>>d;
        arr[i] = {a,d};   // assign directly

    }
    sort(arr.begin(),arr.end());


    //vist[0]=1;
    int cnt=1;
    int min_f=1;
    //int d=0;
    int fg=0;

    for(int i=1;i<n;i++)
    {
        auto[a,d]=arr[i];
        //cout<<"a: "<<a<<" d:"<<d<<endl;
        for(int j=0;j<i;j++)
        {
            auto[pa,pd]=arr[j];
//            cout<<"pa: "<<pa<<" pd:"<<pd<<endl;

            if(pd>0)
            {   if(pd<a)
                {
                    cnt--;
                    //cout<<"sub"<<endl;
                    arr[j].first = -1;
                    arr[j].second = -1;


                }
                else
                {
                    fg=1;

                }


            }


        }
        cnt++;
        if(cnt>min_f)
        {
            min_f=cnt;
        }
        //cout<<cnt<<endl;
    }
    cout<<min_f;

}
