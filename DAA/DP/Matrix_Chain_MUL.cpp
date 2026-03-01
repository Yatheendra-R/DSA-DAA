#include <bits/stdc++.h>
using namespace std;
void printOrder(vector<vector<int>> &K, int i, int j)
{
    if(i == j)
    {
        cout << "A" << i;
        return;
    }

    cout << "(";
    printOrder(K, i, K[i][j]);
    printOrder(K, K[i][j] + 1, j);
    cout << ")";
}
int main()
{
    int n;
    cout<<"Enter the number of Matrix: ";
    cin>>n;
    vector<int> p(n+1,0);
    cout<<"Enter the Values of the dimensions: ";
    for(int i=0;i<n+1;i++)
    {
        cin>>p[i];

    }

    vector<vector<int>> M(n+1,vector<int>(n+1,0));

    vector<vector<int>> K(n+1,vector<int>(n+1,0));

    //Setting up the matrix

    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(j>i)
            {
                M[i][j]=INT_MAX;
            }
        }
    }


   int run=2;
   for(;run<n+1;run++)
   {
       int i=1;
       int j=run;
       while(i<n+1&&j<n+1)
       {
           for(int k=i;k<j;k++)
           {
               if(M[i][j]>M[i][k]+M[k+1][j]+(p[i-1]*p[k]*p[j]))
               {
                    M[i][j]=M[i][k]+M[k+1][j]+(p[i-1]*p[k]*p[j]);
                    K[i][j]=k;
               }

           }
           i++;
           j++;

       }
   }
   /*
   Text book
   // Bottom-up DP
    for(int len = 2; len <= n; len++)   // chain length
    {
        for(int i = 1; i <= n-len+1; i++)
        {
            int j = i + len - 1;
            M[i][j] = INT_MAX;

            for(int k = i; k < j; k++)
            {
                int cost = M[i][k] + M[k+1][j] + p[i-1]*p[k]*p[j];

                if(cost < M[i][j])
                {
                    M[i][j] = cost;
                    K[i][j] = k;
                }
            }
        }
    }

   */

    //Printing Matrix
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nMinimum Multiplication Cost: "<<M[1][n]<<endl;

    cout<<"Optimal Parenthesization: ";
    printOrder(K, 1, n);
    cout<<endl;




    return 0;
}
