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
    int min_num1=arr[0];
    int max_num1=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max_num1)
        {
            max_num1=arr[i];

        }
        if(arr[i]<min_num1)
        {
            min_num1=arr[i];

        }

    }

    cout<<"Smallest number: "<<min_num1<<endl;
    cout<<"Largest number: "<<max_num1<<endl;

    int k=0;
    cout<<"Enter the Kth max and min element to be found: ";
    cin>>k;


    sort(arr.begin(),arr.end());

    cout<<k<<"th smallest element: "<<arr[k-1];
    cout<<k<<"th largest element: "<<arr[n-k];

    return 0;
}
