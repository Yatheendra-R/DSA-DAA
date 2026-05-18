#include <bits/stdc++.h>
using namespace std;
void combine(vector <int> &arr,int n,int s,int m,int e)
{
    vector<int> dummyarr;
    int s1=s;
    int e1=m;

    int s2=m+1;
    int e2=e;

    while(s1<=e1 && s2<=e2)
    {
        if(arr[s1]<arr[s2])
        {
            dummyarr.push_back(arr[s1]);

            s1++;
        }
        else
        {
            dummyarr.push_back(arr[s2]);
            s2++;
        }
    }

    while(s1<=e1)
    {
        dummyarr.push_back(arr[s1]);
        s1++;
    }
    while(s2<=e2)
    {
        dummyarr.push_back(arr[s2]);
        s2++;
    }





    for(auto each:dummyarr)
    {
        arr[s]=each;
        s++;
    }
}
void split(vector <int> &arr,int n,int s,int e)
{
    if(s==e)
    {
        return ;

    }
    else
    {


        int m=(s+e)/2;
        split(arr,n,s,m);
        split(arr,n,m+1,e);
        combine(arr,n,s,m,e);
    }

}
int main()
{
    int n;
    cout<<"Enter the number of in the array: ";
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    split(arr,n,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;


}
