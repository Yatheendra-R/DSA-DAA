
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
