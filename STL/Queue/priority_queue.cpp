#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;  //By default → Max Heap top of stack is always max
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout <<"Top of priority_queue(Max Heap): "<<pq.top() << endl; // 30

    pq.pop();
    cout <<"Top of priority_queue(Max Heap) after popping: "<<pq.top() << endl; // 20


    cout<<"Size of priority_queue(Max Heap) : "<<pq.size()<<endl;

    if(pq.empty())
        cout<<"priority_queue(Max Heap) is Empty"<<endl;
    else
        cout<<"priority_queue(Max Heap) is not Empty"<<endl;


    cout<<endl<<endl;

    priority_queue<int, vector<int>, greater<int>> pq_min; // Min Heap

    /*
    struct cmp {
    bool operator()(int a, int b) {
        return a > b; // min heap

    }
    };

    priority_queue<int, vector<int>, cmp> pq;  // Min Heap
    */
    pq_min.push(10);
    pq_min.push(30);
    pq_min.push(20);

    cout <<"Top of priority_queue(Min Heap): "<<pq_min.top() << endl; // 30

    pq_min.pop();
    cout <<"Top of priority_queue(Min Heap) after popping: "<<pq_min.top() << endl; // 20


    cout<<"Size of priority_queue: "<<pq_min.size()<<endl;

    if(pq_min.empty())
        cout<<"priority_queue(Min Heap) is Empty"<<endl;
    else
        cout<<"priority_queue(Min Heap) is not Empty"<<endl;


    //pq1.swap(pq2); swap works
    return 0;

}
