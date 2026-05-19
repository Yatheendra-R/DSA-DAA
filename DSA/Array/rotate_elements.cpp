#include <bits/stdc++.h>
using namespace std;
/*int main()
{
    int n;
    cout<<"Enter the number of element in array: ";
    cin>>n;

    vector<int> arr(n,0);
    cout<<"Enter the number: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the k item rotation: ";
    cin>>k;

    cout<<"Press R to rotate right or Press L to rotate right: ";
    char c;
    cin>>c;
    c=tolower(c);

    if(c=='r')
    {
        //1 2 3 4 5
        //k=2
        //c=R
        //4 5 1 2 3
        for(int i=0;i<k;i++)
        {
            int store_last=arr[n-1];

            for(int j=n-2;j>=0;j--)
            {
                arr[j+1]=arr[j];
            }
            arr[0]=store_last;

        }
        cout<<"Rotated Right by "<<k<<" : ";
    }
    else
    {
        //1 2 3 4 5
        //k=2
        //c=L
        //3 4 5 1 2
        for(int i=0;i<k;i++)
        {

            int store_first=arr[0];

            for(int j=1;j<n;j++)
            {
                arr[j-1]=arr[j];
            }
            arr[n-1]=store_first;
        }


        cout<<"Rotated Left by "<<k<<" : ";

    }

    for(auto each:arr)
    {
        cout<<each<<" ";

    }
    cout<<endl;

    for(auto each:arr)
    {
        cout<<each<<" ";

    }
    cout<<endl;








    return 0;

}*/


int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter k rotation: ";
    cin >> k;

    k = k % n;

    char c;
    cout << "Press R for right or L for left: ";
    cin >> c;

    c = tolower(c);
    //1 2 3 4 5
    //k=2

    if(c == 'r')
    {
        // 5 4 3 2 1
        reverse(arr.begin(), arr.end());

        //3 4 5 2 1
        reverse(arr.begin(), arr.begin() + k);

        //3 4 5 1 2
        reverse(arr.begin() + k, arr.end());

        cout << "Right Rotated: ";
    }
    else if(c == 'l')
    {
        //3 2 1 4 5
        reverse(arr.begin(), arr.begin() + k);

        //3 2 1 5 4
        reverse(arr.begin() + k, arr.end());

        //4 5 1 2 3
        reverse(arr.begin(), arr.end());

        cout << "Left Rotated: ";
    }
    else
    {
        cout << "Invalid Choice";
        return 0;
    }

    for(auto each : arr)
    {
        cout << each << " ";
    }

    cout << endl;

    return 0;
}
