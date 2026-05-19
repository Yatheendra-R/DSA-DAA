#include <bits/stdc++.h>
using namespace std;
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
    int fg=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            fg=1;
            break;
        }
    }
    if(fg==1)
    {
        cout<<"Not sorted"<<endl;
    }
    else
    {
        cout<<"Yes sorted"<<endl;
    }
    return 0;
}
