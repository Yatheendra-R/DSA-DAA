#include <bits/stdc++.h>
using namespace std;
struct pw
{
    int p;
    int w;
    int id;
    double r;
};
class knapsack
{
    public:
        int n;
        vector<tuple<double,int,int>> pwvec;
        int wb;

        pw *pwarr;


        knapsack(int n)
        {
            this->n=n;
            pwarr=new pw[n];
            //struct pw pwarr[n];
            pwvec.resize(n);

        }
        static bool cmp(const pw &a,const pw &b)
        {
                return a.r>b.r;

        }
        void input()

        {
            int wb;
            cout<<"Enter the weight of the bag: ";
            cin>>wb;
            this->wb=wb;
            for(int i=1;i<=n;i++)
            {
                int w,p;
                cout<<"Enter the weight and profit for item "<<i<<": ";
                cin>>w>>p;

                double r=(p*1.0)/w;
                pwarr[i-1].p=p;
                pwarr[i-1].w=w;
                pwarr[i-1].r=r;
                pwarr[i-1].id=i;
                pwvec[i-1]={r,p,w};



            }
            sort(pwvec.begin(),pwvec.end(),greater<tuple<int,int,int>>());
            /*
            sort(pwvec.begin(), pwvec.end(), [](int a, int b) {
                return a > b;
            });

            or
            sort(pwvec.begin(), pwvec.end());
            reverse(pwvec.begin(), pwvec.end());
            */

            sort(pwarr,pwarr+n,cmp);
            //disp
            /*

            for(int i=0;i<n;i++)
            {
                auto[r,p,w]=pwvec[i];
                cout<<r<<" "<<p<<" "<<w<<endl;
                cout<<pwarr[i].r<<" "<<pwarr[i].p<<" "<<pwarr[i].w<<" "<<endl;
            }*/

        }
        void solve()
        {
            int i=0;
            double max_p=0.0;
            // i can create a vector which can store the id, w , amount used
            while(wb>0&&i<n)
            {
                if(wb>=(pwarr[i].w))
                {
                    wb=wb-pwarr[i].w;
                    max_p+=pwarr[i].p;

                }
                else
                {
                    max_p+=(wb*1.0*pwarr[i].p)/pwarr[i].w;
                    wb=0;

                }
                i++;

            }
            cout<<"Max profit: "<<max_p<<endl;
        }



};
int main()
{
    int n;
    cout<<"Enter the number of item: ";
    cin>>n;
    knapsack KS(n);
    KS.input();
    KS.solve();
    return 0;
}

