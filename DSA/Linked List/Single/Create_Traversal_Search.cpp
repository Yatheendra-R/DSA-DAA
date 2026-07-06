#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node * next;
    node(int v)
    {

        val=v;
        next=nullptr;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    node *head=nullptr;
    node *Back=nullptr;
    cout<<"Create"<<endl;
    cout<<"Enter the data: ";
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        if(i==0)
        {
            node *first_node=new node(data);
            head=first_node;
            Back=first_node;
        }
        else
        {
            node *new_node=new node(data);
            Back->next=new_node;
            Back=new_node;


        }

    }
    cout<<"Traversal: "<<endl;
    node *run=head;
    while(run!=nullptr)
    {
        cout<<run->val<<" ";
        run=run->next;
    }
    cout<<endl;

    int target;
    cout<<"Enter the target: ";
    cin>>target;

    int i=-1;
    int fg=-1;


    cout<<"Search"<<endl;
    run=head;
    while(run!=nullptr)
    {
        i++;
        if(run->val==target)
        {
            fg=1;
            break;
        }
        run=run->next;
    }
    if(fg==-1)
    {

        cout<<"Target is not found in linked list"<<endl;
    }
    else
    {
        cout<<"Target is found in linked list at "<<i<<" node"<<endl;

    }

    return 0;
}
