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

    cout<<"Enter the value which has to inserted: ";
    int data;
    cin>>data;

    cout<<"Enter at which node should the value inserted: ";
    int place;
    cin>>place;
    while(place<=0 || place>n+1)
    {
        cout<<"Enter the correct node location: ";
        cin>>place;
    }

    run=head;
    Back=head;
    int pl=1;
    while(run!=nullptr)
    {
        if(place==1)
        {

            node *ins_node=new node(data);
            ins_node->next=head;
            head=ins_node;
            break;
        }
        else if(place==pl)
        {
            node *ins_node=new node(data);
            ins_node->next=Back->next;
            Back->next=ins_node;




        }
        Back=run;
        run=run->next;

        pl++;

    }
    if(place==n+1)
    {
        node *ins_node=new node(data);
        Back->next=ins_node;
        //ins_node->next=nullptr;



    }



    cout<<"Traversal after inserting "<<endl;
    run=head;
    while(run!=nullptr)
    {
        cout<<run->val<<" ";
        run=run->next;
    }
    cout<<endl;

    return 0;
}
