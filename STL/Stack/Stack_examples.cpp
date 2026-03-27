#include <bits/stdc++.h>
//FILO
using namespace std;
int main()
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);

    cout<<"Top of stack after pushing 1 and 2 into stack: "<<stk.top()<<endl;

    stk.pop();
    cout<<"Top of stack after popping: "<<stk.top()<<endl;

    if (stk.empty())
        cout << "Stack is Empty"<<endl;
    else
        cout << "Stack is Not Empty"<<endl;

    cout<<"Size of stack: "<<stk.size()<<endl;

    stack<int> s1, s2;



    s1.push(10);
    s1.push(20);

    s2.push(100);
    s2.push(200);

    cout<<"Top of stack s1: "<<s1.top()<<endl;
    cout<<"Top of stack s2: "<<s2.top()<<endl;

    cout<<"After swapping s1 and s2: "<<endl;
    s1.swap(s2);

    cout<<"Top of stack s1: "<<s1.top()<<endl;
    cout<<"Top of stack s2: "<<s2.top()<<endl;

    cout<<"Checking equality of stack: "<<endl;

    stack<int> s3 = s1;

    if (s1 == s3) cout << "Equal"<<endl;
    if (s1 != s3) cout << "Not Equal"<<endl;

    //q1.swap(q2); swapping  works
    return 0;
}
