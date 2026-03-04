#include<bits/stdc++.h>
using namespace std;
long kas(long n1,long n2)
{
    if(n1<10 || n2<10)
    {
        return n1*n2;

    }

    long l1;
    if(n1 == 0)
        l1 = 1;
    else
        l1 = log10(abs(n1)) + 1;

    long l2;
    if(n2 == 0)
        l2 = 1;
    else
        l2 = log10(abs(n2)) + 1;
    /*
    log10(n)=x
    To what power must 10 be raised to get n
    10^x=n
    log10​(1000)=3
    10^3=1000
    len(1000)=3+1=4


    log10(123)≈2.0899
    10^2.0899≈123
    len(123)=2+1=3

    digits = (long)floor(log10(abs(n))) + 1;
    long digits = log10(n) + 1;
    That’s because when assigning double to long:
        C++ truncates decimal part
        Which behaves like floor for positive numbers
    */



    if(l1%2!=0)
    {
        l1++;
    }
    if(l2%2!=0)
    {
        l2++;
    }
    long l=max(l1,l2);

    long h1=(long)pow(10,l1/2);
    long h2=(long)pow(10,l2/2);
    long h=max(h1,h2);

    long a=(long)n1/h;
    long b=(long)n1%h;
    long c=(long)n2/h;
    long d=(long)n2%h;

    long ac=kas(a,c);
    long bd=kas(b,d);

    long ad_bc=kas(a+b, c+d)-ac-bd;  //(a+b)*(c+d)=ac+ad+bc+bd
    //ac+ad+bc+bd-ac-bd=ad+bc  // if i call separate two function call for ad and cb , the time complexity will increase

    return ac*(long)pow(10,l)+ad_bc*(long)pow(10,l/2)+bd;
}
int main()
{
    long n1;
    long n2;
    cout<<"Enter the number: ";
    cin>>n1;
    cout<<"Enter the number: ";
    cin>>n2;

    long ans=kas(n1,n2);
    cout<<ans;
    return 0;
}
