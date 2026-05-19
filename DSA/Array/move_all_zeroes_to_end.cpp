#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element in the array: ";
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i=0;
    int j=i+1;

    while(j<n)
    {
        if(arr[i]==0 && arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
            j=i+1;
        }
        else if(arr[i]==0 && arr[j]==0)
        {
            j++;


        }
        else
        {
            i++;
            j=i+1;
        }


    }
    for(auto num:arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
