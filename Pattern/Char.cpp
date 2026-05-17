#include <bits/stdc++.h>
using namespace std;
/*
A
A B
A B C
A B C D
A B C D E
int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char a='A';
        for(int j=0;i>=j;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;

    }
        return 0;
}

*/
/*
A
B C
D E F
G H I J
K L M N O
int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    char a='A';

    for(int i=0;i<n;i++)
    {
        for(int j=0;i>=j;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;

    }
        return 0;
}
*/
/*
A
B B
C C C
D D D D
E E E E E
int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    char a='A';

    for(int i=0;i<n;i++)
    {
        for(int j=0;i>=j;j++)
        {
            cout<<a<<" ";
        }
        a++;

        cout<<endl;

    }
        return 0;
}*/


/*
A B C D E
A B C D
A B C
A B
A
int main()
{

    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        char a='A';
        for(int j=0;j<n;j++)
        {
            if(i+j<=(n-1))
            {
                cout<<a<<" ";
                a++;
            }

        }
        cout<<endl;
    }
    return 0;
}
*/

/*
E
D E
C D E
B C D E
A B C D E

int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char s='A'+n-1-i;
        for(int j=0;i>=j;j++)
        {
            cout<<s<<" ";
            s++;
        }
        cout<<endl;
    }
    return 0;
}
*/


