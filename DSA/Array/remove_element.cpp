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
    sort(arr.begin(), arr.end()); //Duplicates become adjacent.
    auto last = unique(arr.begin(), arr.end());
    /*
    unique() does NOT erase duplicates.

It only:

moves unique elements to the front
returns iterator to the new logical end
    */
    arr.erase(last, arr.end());//Erase extra elements

    //unique() removes only consecutive duplicates.


    unordered_set<int> seen;
    vector<int> unique_arr;

    for (int num : arr) {
        if (seen.insert(num).second) {
            unique_arr.push_back(num);
        }
    }
    /*
    Insert into set
seen.insert(num)

Returns:

pair<iterator, bool>

The .second part is:

true → inserted successfully
false → already exists
*/
/*
Time Complexity

Average insertion in unordered_set:

O(1)

Overall:

O(n)

Average case.

Advantages

✅ Fast
✅ Preserves order
✅ Easy to understand

Disadvantages

❌ Uses extra memory for set

    */

    vector<int> remove_dup;

for(int i=0;i<arr.size();i++)
{
    if(find(remove_dup.begin(), remove_dup.end(), arr[i]) == remove_dup.end())
    {
        remove_dup.push_back(arr[i]);
    }
}
/*Time Complexity

Each find() takes:

O(n)

And loop runs n times.

Overall:

O(n
2
)

| Function  | Meaning                   |
| --------- | ------------------------- |
| `begin()` | points to first element   |
| `end()`   | points AFTER last element |
| `it++`    | move forward              |
| `*it`     | access value              |
arr.back() used access last element

If element NOT found

find() returns:

remove_dup.end()

Meaning:

"I searched till the end and did not find it."
*/
    return 0;
}
