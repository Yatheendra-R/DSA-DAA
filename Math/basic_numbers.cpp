#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int n1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter  the number: ";
    cin>>n1;

    if(n%2==0)
    {
        cout<<n<<" is even number"<<endl;
    }
    else
    {
        cout<<n<<" is odd number"<<endl;
    }
    if(n==1)
    {
        cout<<"1 is neither prime nor composite"<<endl;
    }

    else if(n==2)
    {
        cout<<n<<" is prime number"<<endl;
    }
    else if(n>2)
    {
        int fg=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                fg=1;
                break;
            }
        }
        if(fg==0)
        {
            cout<<n<<" is the prime number "<<endl;
        }
        else
        {
            cout<<n<<" is not the prime number (is Composite number) "<<endl;
        }
    }


    int hcf=1
    if(n>n1)
    {
        int m=n;
        n=n1;
        n1=n;

    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(n1%i==0)
            {
                hcf=i
            }
        }

    }
    cout<<"HCF of "<<n<<" and "<<n1<<" is "<<hcf<<endl;
    if(hcf==1)
    {
        cout<<n<<" and "<<n1<<" is co-prime"<<endl;
    }
    int lcm=n1;
    while(true)
    {
        if(lcm%n1==0)
        {
            if(lcm%n==0)
            {
                cout<<"LCM of "<<n<<" and "<<n1<<" is "<<lcm<<endl;
                break;
            }
        }
        lcm++;


    }


    //perfect number
    int sum=0;
    for(int i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            sum+=i;
        }
    }
    if(n1==sum)
    {
        cout<<n1<<" is a perfect number"<<endl;
    }
    else
    {
        cout<<n1<<" is not a perfect number"<<endl;

    }
    //armstrong  number

    int l=(int)(log10(n1)+1);
    int dummyn1=n1;
    int sum_arm=0
    while(dummyn1>0)
    {
        int each=dummyn1%10;
        dummyn1=dummyn1/10;
        sum_arm+=pow(each,l);
    }
    if(sum_arm==n1)
    {
        cout<<n1<<" is a armstrong number"<<endl;
    }
    else
    {
        cout<<n1<<" is not a armstrong number"<<endl;
    }

    //automorphic number
    //number whose square ends in the same digits as the number itself.
    //25^2=625 and 76^2=5776 making 25 and 76 automorphic numbers

    int squared=n1*n1;
    dummyn1=n1;
    fg=1;
    while(dummyn1>0)
    {
        int lastn1=dummyn1%10;
        dummyn1=dummyn1/10;
        int lastsq=squared%10;
        squared=squared/10;
        if(lastsq!=lastn1)
        {
            fg=0;
            break;
        }

    }
    if(fg==1)
    {
        cout<<n1<<" is automorphic number"<<endl;

    }
    else
    {
        cout<<n1<<" is not automorphic number"<<endl;
    }


    //Niven number/Harshad
    //an integer that is completely divisible by the sum of its own digits.
    //18 is a Niven number because the sum of its digits is 1+8=9, 18 div 9=2(completely divisible)



    //Neon Number
    //duck number
    //strong number
    //Triangle number
    //Fibonacci number
    //square , cube number
    // factorial
    //reverse number
    //digit sum
    //factors
    //bit manipulation
    //sieve of Eratosthenes
    //palindrome number

    //Segmented sieve
    //Euler Totient
    //Fermat theorem
    //Chinese remainder
    //Miller Rabin
    //Number theoretic transform
    //Euclidean





}
