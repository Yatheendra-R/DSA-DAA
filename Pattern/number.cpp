#include <bits/stdc++.h>
using namespace std;
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
int main()
{
    int n;
    cout<<"Enter the number of lines(rows): ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
                cout<<j+1<<" ";

            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

int main()
{
    int n;
    cout<<"Enter the number of lines(rows): ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
                cout<<i+1<<" ";

            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

int main()
{
    int n;
    cout<<"Enter the number of lines(rows): ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<=(n-1))
            {
                cout<<j+1<<" ";

            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}

*/


/*
1
2 3
4 5 6
7 8 9 10
int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    int val=1;
    for(int i=0;i<n;i++)
    {

        for(int j=0;i>=j;j++)
        {
            cout<<val<<" ";
            val++;

        }
        cout<<endl;
    }
    return 0;
}
*/

