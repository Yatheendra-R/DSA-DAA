#include <bits/stdc++.h>
using namespace std;
class backtrack
{
    public:
        vector<string> arr1;
        int backtrack(int i, int j , int p, int d)
        {
            if(i==0||j==0)
            {
                return p;
            }

            if(s1[i-1]==s2[j-1])
            {
                if(p==1)
                backtrack(i-1,j-1,0,1);
            }
            else
            {
                if(arr[i-1][j]==arr[i][j-1])
                {
                    backtrack(i-1,j,1,0);

                }
                else
                {
                    if(arr[i-1][j]>arr[i][j-1])
                    {
                        backtrack(i-1,j,0,0);


                    }
                    else
                    {
                        backtrack(i,j-1,0,0);
                    }
                }
            }
        }

};

int main()
{
    string s1;
    string s2;
    cout<<"Enter the First String: ";
    cin>>s1;
    cin.ignore();
    cout<<"Enter the Second String: ";
    cin>>s2;
    int length_s1=s1.length()+1;
    int length_s2=s2.length()+1;
    int arr[length_s1][length_s2];
    for(int i=0;i<length_s1;i++)
    {
        for(int j=0;j<length_s2;j++)
        {
            arr[i][j]=0;
        }
    }

    for(int i=1;i<length_s1;i++)
    {
        for(int j=1;j<length_s2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else
            {
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    for(int i=0;i<length_s1;i++)
    {
        for(int j=0;j<length_s2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    backtrack(length_s1-1,length_s2-1,0,0)
    return 0;
}
