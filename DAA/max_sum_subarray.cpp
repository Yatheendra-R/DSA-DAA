#include <bits/stdc++.h>

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
