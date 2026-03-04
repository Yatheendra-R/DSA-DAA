#include <bits/stdc++.h>
using namespace std;
int main()
{

    string t;
    string p;
    cout<<"Enter the Text: ";
    cin>>t;
    cin.ignore();
    cout<<"Enter the pattern: ";
    cin>>p;
    int l_t=t.length();
    int l_p=p.length();

    vector<int> lps(l_p,0);
    int k=0;
    int m=1;
    while(m<l_p)
    {
        if(p[k]==p[m])
        {
            k++;
            lps[m]=k;
            m++;

        }
        else
        {
            if(k!=0)
            {
                k=lps[k-1];
            }
            else
            {
                lps[m]=0;
                m++;

            }
        }
    }
    int i=0;
    int j=0;
    while(i<l_t)
    {
        if(t[i]==p[j])
        {
            i++;
            j++;

        }
        if(j==l_p)
        {
            cout<<"index: "<<i-j<<endl;

            j=lps[j-1];
            cout<<p<<endl;
        }
        else if(i<l_t && t[i]!=p[j])
        {
            if (j!=0)
            {
                j=lps[j-1];
            }
            else if(j==0)
            {
                i++;
            }
        }
    }


    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    string p;
    int m;
    int n;
    cout<<"Enter the Text: ";
    cin>>t;
    cout<<"Enter the Pattern: ";
    cin>>p;

    m=t.length();
    n=p.length();



    vector<int> lcs(n,0);

    int i=1;
    int j=0;
    while(i<n)
    {
        if(p[i]==p[j])
        {
            j++;
            lcs[i]=j;
            i++;
        }
        else
        {
            if(j==0)
            {
                lcs[i]=j;
                i++;
            }
            else
            {
                j=lcs[j-1];
            }
        }
    }

    i=0;
    j=0;
    while(i<m)
    {
        if(t[i]==p[j])
        {
            i++;
            j++;
        }
        if(j==n)
        {
            cout<<i-j<<endl;
            j=lcs[j-1];
        }
        else if(i<m&&t[i]!=p[j])
        {
            if(j==0)
            {
                i++;
            }
            if(j!=0)
            {
                j=lcs[j-1];
            }
        }
    }


    return 0;

}*/
