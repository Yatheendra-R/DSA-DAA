#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Deque = Double Ended Queue
    deque<int> dq;
    cout<<"Pushing into deque from push_back: "<<endl;
    dq.push_back(10);
    cout<<"Pushing into deque from push_front: "<<endl;
    dq.push_front(5);
    cout <<"View front of deque: "<<dq.front()<<endl;
    cout <<"View back of deque: " <<dq.back()<<endl;
    cout <<"Viewing using index 0: "<< dq[0]<<endl;
    cout <<"Viewing using index 1: "<<dq.at(1)<<endl;
    cout<<"Size of Deque: "<<dq.size()<<endl;
    if(dq.empty())
        cout<<"Deque is Empty"<<endl;
    else
        cout<<"Deque is not Empty"<<endl;


    dq.pop_back();
    cout <<"View front of deque after pop_back: "<<dq.front()<<endl;
    dq.pop_front();
    cout <<"View front of deque after pop_front: "<<dq.front()<<endl; //Because of Undefined Behavior (UB)
    /*
    It means:

        Program may work
        May crash
        May print garbage
        May behave differently every time

    Compiler does NOT guarantee anything
    */
    cout<<"Size of Deque: "<<dq.size()<<endl;

    dq.insert(dq.begin(), 100); //dq.insert(dq.begin()+1, 100);  insert into given index
    cout<<"Size of Deque: "<<dq.size()<<endl;
    cout <<"View front of deque after pop_front: "<<dq.front()<<endl; //Because of Undefined Behavior (UB)

    dq.erase(dq.begin());
    cout<<"Size of Deque: "<<dq.size()<<endl;

    dq.clear();
    //dq.resize(5);
    //dq1.swap(dq2);

    return 0;
}
