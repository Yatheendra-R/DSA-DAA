#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;  //doubly linked list
    //can not be accessed with index
    l.push_back(10);
    l.push_front(5);
    cout<<"After-Pushed: push_back 10 "<<endl;
    cout<<"After-Pushed: push_front 5 "<<endl;

    cout << l.front()<<endl;
    cout << l.back()<<endl;

    //l.pop_back();
    //l.pop_front();

    auto it = l.begin();
    advance(it, 1); //(it+1)
    l.insert(it, 100);

    for (auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
}
cout<<endl;
l.sort();
   for (auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
}
cout<<endl;
    l.reverse();
       for (auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
}
cout<<endl;


    l.erase(l.begin());
           for (auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
}
cout<<endl;
    l.remove(10);  // removes all 10s
           for (auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
}
cout<<endl;


    list<int> l1 = {1,3,5};
    list<int> l2 = {3,4,6};


    l1.merge(l2);

               for (auto it = l1.begin(); it != l1.end(); it++) {
    cout << *it << " ";
}
cout<<endl;

    l1.unique();  // removes consecutive duplicates
    cout<<"unique "<<endl;
    for (auto it = l1.begin(); it != l1.end(); it++) {
    cout << *it << " ";
}
cout<<endl;
    l1.splice(l1.begin(), l2);

    l1.size();
    l1.empty();
    return 0;
}



