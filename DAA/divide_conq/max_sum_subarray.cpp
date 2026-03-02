/*#include <bits/stdc++.h>
using namespace std;
int css(vector <int> &arr,int start ,int mid, int last)
{
    int max_l=INT_MIN;
    int max_r=INT_MIN;
    int sum=0;
    for(int i=mid;i>=start;i--)
    {
        sum+=arr[i];
        if(sum>max_l)
        {
            max_l=sum;
        }
    }
    sum=0;
    for(int i=mid+1;i<=last;i++)
    {
        sum+=arr[i];
        if(sum>max_r)
        {
            max_r=sum;
        }
    }
    return max_r+max_l;
}
int max_sum(vector <int> &arr,int start , int last)
{

    if(start==last)
    {

        return arr[start];
    }
    int mid=start+(last-start)/2;
    int ls=max_sum(arr,start,mid);
    int rs=max_sum(arr,mid+1,last);
    int cs=css(arr,start,mid,last);
    return max({ls,rs,cs});
}
int main()

{
    cout<<"Enter the Length of the array: ";
    int num;
    cin>>num;
    vector <int> arr(num,0);

    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int ans=max_sum(arr,0,num-1);
    cout<<ans;

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
int cross(vector<int>arr,int s,int m,int e)
{
    int m_suml=INT_MIN;
    int m_sumr=INT_MIN;
    int sum=0;
    for(int i=m;i>=s;i--)
    {
        sum+=arr[i];
        if(m_suml<sum)
        {
            m_suml=sum;

        }
    }
    sum=0;
    for(int i=m+1;i<=e;i++)
    {
        sum+=arr[i];
        if(m_sumr<sum)
        {
            m_sumr=sum;

        }

    }
    return m_suml+m_sumr;

}

int div(vector<int> arr,int s,int e)
{
    if(s==e)
    {
        return arr[s];
    }
    int m=s+((e-s)/2);
    int lm=div(arr,s,m);
    int rm=div(arr,m+1,e);
    int cm=cross(arr,s,m,e);
    return max({lm,rm,cm});
}
int main()
{
    int n;
    cout<<"Enter the number of element in the vector ";
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter the number: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr.at(i);

    }

    int max_sum=div(arr,0,n-1);
    cout<<"Max sum: "<<max_sum;
    return 0;
}
