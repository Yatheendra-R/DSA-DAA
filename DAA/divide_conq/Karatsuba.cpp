#include <bits/stdc++.h>
using namespace std;
long length(long n)
{
    long cnt=0;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    return cnt;
}
long kar(long n1,long n2)
{
    if(n1<10 || n2<10)
    {
        return n1*n2;
    }
    long l1=length(n1);
    long l2=length(n2);
    if(l1%2!=0)
    {
        l1++;
    }
    if(l2%2!=0)
    {
        l2++;
    }
    long h1=(long)(pow(10,l1/2));
    long h2=(long)(pow(10,l2/2));
    long h=max(h1,h2);
    long l=max(l1,l2);

    long a=(long)(n1/h);
    long b=(long)(n1%h);
    long c=(long)(n2/h);
    long d=(long)(n2%h);
    long ac=kar(a,c);
    long bd=kar(b,d);
    long x=kar(a+b,c+d)-(ac+bd);
    long anns=ac*(long)pow(10,2*(l/2))+bd+x*(long)pow(10,l/2);
    return anns;
}
int main()
{
    long n1;
    long n2;
    cin>>n1;
    cin>>n2;
    long ans=kar(n1,n2);
    cout<<ans;
    return 0;
}
