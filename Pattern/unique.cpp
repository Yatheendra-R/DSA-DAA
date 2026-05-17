#include <bits/stdc++.h>
using namespace std;

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int fg=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            fg=1;

        }
        else
        {
            fg=0;
        }

        for(int j=1;j<=i;j++)
        {
            cout<<fg<<" ";
            fg=!fg;
            //ones complement ~
            //twos complement ~+1

        }
        cout<<endl;
    }
    return 0;
}
*/


/*
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1

int main()

{
    int r;
    cout<<"Enter the number of lines(row): ";
    cin>>r;
    int c=2*r;
    for(int i=0;i<r;i++)
    {
        int val=0;
        for(int j=0;j<c;j++)
        {
            if(i>=j)
            {
                val++;
                cout<<val<<" ";

            }
            else if(i<j&&i+j>=(c-1))
            {
                cout<<val<<" ";
                val--;
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
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
int main()
{
    int n;
    cout<<"Enter the number of the line: ";
    cin>>n;
    int c=n/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<c)
            {
                cout<<"* ";
            }
            else if(j-i>=c)
            {
                cout<<"* ";

            }
            else if(i-j>=c)
            {
                cout<<"* ";
            }
            else if(i+j>=(c+n-1))
            {
                cout<<"* ";
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
*                   *
* *               * *
* * *           * * *
* * * *       * * * *
* * * * *   * * * * *
* * * * * * * * * * *
* * * *       * * * *
* * *           * * *
* *               * *
*                   *

int main()
{
    int r;
    cout<<"Enter the number of the line: ";
    cin>>r; //9
    int c=r+1; // 10
    int hr=r/2; //4
    int hc=c/2; //5
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j<hc&&i>hr)
            {
                if(i+j<(c-1))
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else if(i<=hr&&j<hc)
            {
                if(i>=j)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else if(i>hr&&j>=hc)
            {
                if(j-i>0)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else if(i<=hr&&j>=hc)
            {
                if(i+j>=(c-1))
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }

            }



        }
        cout<<endl;
    }

    return 0;
}
*/
int main()
{
    //int r;
    //cout<<"Enter the number of the line: ";
    //cin>>r; //9

    //int c=r+1; // 10
    //int hr=r/2; //4
    //int hc=c/2; //5
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0||i==n-1||j==n-1)
            {
                cout<<"4 ";
            }
            else if(i==1 || j==1 || i==n-2 || j==n-2)
            {
                cout<<"3 ";
            }
            else if(i==2 || j==2 || i==n-3 || j==n-3)
            {
                cout<<"2 ";
            }
            else if(i==3 || j==3 || i==n-4 || j==n-4)
            {
                cout<<"1 ";
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


