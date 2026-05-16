#include <bits/stdc++.h>
using namespace std;
/*
****
****
****
****
int main()
{

    int r;
    int c;
    cout<<"Enter the row and column: "<<endl;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
*
**
***
****

int main()
{
    int n;
    cout<<"Enter the number of lines(row): ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
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
        cout<<endl;
    }
    return 0;

}


*/



/*

* * * * *
  * * * *
    * * *
      * *
        *

int main()
{
    int n;
    cout<<"Enter the number of lines(row): ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
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
        *
      * *
    * * *
  * * * *
* * * * *


int main()
{

    int n;
    cout<<"Enter the number of lines(row): ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=(n-1))
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
****
***
**
*


int main()
{

    int n;
    cout<<"Enter the number of lines(row): ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<=(n-1))
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
