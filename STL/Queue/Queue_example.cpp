#include <iostream>
#include <queue>
//FIFO
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30

    q.pop();

    cout << "Front after pop: " << q.front() << endl; // 20

    cout << "Size: " << q.size() << endl;

    if (q.empty())
        cout << "Stack is Empty"<<endl;
    else
        cout<< "Stack is not Empty"<<endl;

    return 0;
}
