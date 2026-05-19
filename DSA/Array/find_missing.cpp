#include <bits/stdc++.h>
using namespace std;
//O(n)
int main()
{
    vector<int> arr = {1,2,4,5};

    int n = 5;

    int expected_sum = n * (n + 1) / 2;

    int actual_sum = 0;

    for(int num : arr)
    {
        actual_sum += num;
    }

    int missing = expected_sum - actual_sum;

    cout << "Missing Number: " << missing;

    return 0;
}
/*

sort(arr.begin(), arr.end()); //O(nlogn)

for(int i=0;i<arr.size()-1;i++)
{
    if(arr[i+1]-arr[i]!=1||arr[i+1]-arr[i]!=-1)
    {
        cout << "Missing: " << arr[i]+1;
        break;
    }
}
*/
