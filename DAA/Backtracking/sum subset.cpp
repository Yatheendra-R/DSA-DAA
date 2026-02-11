/*#include <bits/stdc++.h>
using namespace std;
class sum_subset
{
    public:
        vector <string> pos;
        //vector <int> pos;
        int n;
        sum_subset(int n)
        {

            this->n=n;
        }

        void work(vector<int> arr, int i,int d,int sum, string s)//int ip )
        {
            if(sum==d)
            {


                pos.push_back(s);
                //pos.push_back(ip);
                return;

            }

            if(i==n)
            {
                return;
            }
            if(sum>d)
            {

                return;
            }

            work(arr,i+1,d,sum+arr[i],s+to_string(i));
            work(arr,i+1,d,sum,s);
            //work(arr,i+1,d,sum+arr[i],(ip*10)+i);
            //work(arr,i+1,d,sum,ip);


        }


};
int main()
{

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector <int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the values into the array: ";
        cin>>arr.at(i);

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr.at(i)<<endl;
    }
    cout<<"Enter the Target val: ";
    int d;
    cin>>d;
    sum_subset SS(n);
    SS.work(arr,0,d,0,"");
    cout<<"Indexs: ";
    for(auto each:SS.pos)
    {
        cout<<each<<endl;
    }
    //
    SS.work(arr,0,d,0,1);

    for(auto each:SS.pos)
    {
        cout<<"First digit is just for padding: "<<each<<endl;
    }
    This fails if:

        index > 9

        number of digits overlap

        hard to decode later
    //
    return 0;

}
| Version                              | Time Complexity | Efficiency |
| ------------------------------------ | --------------- | ---------- |
| Integer encoding                     | O(2^n)          | Fast   but fails index greater than 9    |
| String pass by value                 | O(n * 2^n)      | Slower     |
| String pass by reference (optimized) | O(n * 2^n)      | Better     |
| Vector<int> backtracking             | O(n * 2^n)      | Best       |

*/
#include <bits/stdc++.h>
using namespace std;

class SumSubset {
public:
    vector<vector<int>> pos;   // stores all valid subsets (indices)
    int n;

    SumSubset(int n) {
        this->n = n;
    }

    void work(vector<int>& arr, int i, int target, int sum, vector<int>& current) {

        // If sum matches target → store solution
        if (sum == target) {
            pos.push_back(current);
            return;
        }

        // If out of bounds or sum exceeded → stop
        if (i == n || sum > target)
            return;

        // 🔹 Include current index
        current.push_back(i);
        work(arr, i + 1, target, sum + arr[i], current);

        // 🔹 Backtrack (remove last index)
        current.pop_back();

        // 🔹 Exclude current index
        work(arr, i + 1, target, sum, current);
    }
};

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the values into the array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the Target value: ";
    int target;
    cin >> target;

    SumSubset SS(n);
    vector<int> current;

    SS.work(arr, 0, target, 0, current);

    cout << "\nSubsets (by index):\n";
    for (auto &subset : SS.pos) {
        for (int idx : subset)
            cout << idx << " ";
        cout << endl;
    }

    return 0;
}


