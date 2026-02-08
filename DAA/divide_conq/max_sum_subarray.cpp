/*#include <bits/stdc++.h>

using namespace std;
int css(int arr[],int l,int h)
{
    int m=l+(h-l)/2;
    int mid_lm = arr[m];

    int sum = arr[m];
    int i = m - 1;
    while(i>=0)
    {
        sum+=arr[i];
        if(sum>=mid_lm)
        {
            mid_lm=sum;
        }
        else
        {
            break;
        }
        i--;
    }
    int mid_rm = arr[m + 1];
    sum = arr[m + 1];
    i = m + 2;

    while(i<=h)
    {
        sum+=arr[i];
        if(sum>=mid_rm)
        {
            mid_rm=sum;
        }
        else
        {
            break;
        }
        i++;
    }
    return mid_lm+mid_rm;
}
int find_max(int arr[],int l,int h)
{
    int m=l+(h-l)/2;
    if (l > h)
    {
        return INT_MIN;
    }
    if(l==h)
    {
        return arr[l];
    }
    int lm=find_max(arr,l,m);
    int rm=find_max(arr,m+1,h);
    int cm=css(arr,l,h);

    return max({lm, rm, cm});

}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];
    }


    int max_sum=find_max(arr,0,n-1);
    cout<<endl<<max_sum;
    return 0;
}
*/

#include <bits/stdc++.h>
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
using namespace std;
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
