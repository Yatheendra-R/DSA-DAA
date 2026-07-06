#include <bits/stdc++.h>
using namespace std;
/*
      *
    * * *
  * * * * *
* * * * * * *

int main()
{
    int n;
    cout<<"Enter the number of lines(rows): ";
    cin>>n;
    int c=2*(n-1)+1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j<=c/2)
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
            else
            {
                if(j-i<=c/2)
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






/*
* * * * * * *
  * * * * *
    * * *
      *

int main()
{
    int n;
    cout<<"Enter the number of lines(rows): ";
    cin>>n;
    int c=2*(n-1)+1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j<=c/2)
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
            else
            {
                if(j+i<=c-1)
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
}*/


/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
int main(){

    int n;
    cout<<"Enter the number of lines(rows): ";
    cin>>n;
    int c=2*(n-1)+1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j<=c/2)
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
            else
            {
                if(j-i<=c/2)
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j<=c/2)
            {
                if(i<=j)
                {
                    cout<<"* ";

                }
                //(i+j>=)
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                if(j+i<=c-1)
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
/*
*
**
***
****
*****
****
***
**
*
int main()
{
    int n;
    cout<<"Enter the number max star in a the pattern line: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        string s=string(i,'*');
        cout<<s<<endl;
        i++;


    }
    i=n-1;
    while(i>0)
    {
        string s=string(i,'*');
        cout<<s<<endl;
        i--;

    }
    return 0;
}
*/
/*
          A
        A B A
      A B C B A
    A B C D C B A
  A B C D E D C B A
int main()
{
    int r;
    cout<<"Enter the number of lines(rows): ";
    cin>>r;
    int c=2*r+1;

    for(int i=0;i<r;i++)
    {
        char a='A';
        a--;
        for(int j=0;j<c;j++)
        {
            if(j<=(c/2))
            {
                if(i+j>=c/2)
                {
                    a++;
                   cout<<a<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                if((j-i)<=c/2)
                {
                    a--;
                    cout<<a<<" ";
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

