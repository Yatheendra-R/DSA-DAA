#include <bits/stdc++.h>
using namespace std;
struct node
{
    int frq;
    char c;
    node *right,*left;
    node(char c,int frq)
    {
        this->c=c;
        this->frq=frq;
        right=left=nullptr;

    }


};

struct cmp
{
    bool operator()(node *a,node *b)
    {
        return a->frq>b->frq;
    }

};
/*
will not work
class cmp
{
    bool operator()(node *a,node *b)
    {
        return a->frq>b->frq;
    }

};

will work
struct cmp
{
public:
    bool operator()(node *a,node *b)
    {
        return a->frq>b->frq;
    }

};


| Keyword  | Default Access |
| -------- | -------------- |
| `class`  | private        |
| `struct` | public         |


*/
void printcode(struct node *n,string s)
{
    if(!n)
    {
       return;
    }
    if(!n->left&&!n->right)
    {
        if(s == "") s = "0";

        cout<<n->c<<" : "<<s<<endl;
        return ;
    }
    printcode(n->left,s+"0");
    printcode(n->right,s+"1");




}
int main()
{
    string str;
    cout<<"Enter the word: ";
    cin>>str;


    unordered_map<char,int> frq_cnt;
    for(char c1:str)
    {
        frq_cnt[c1]++;
    }


    priority_queue<node*,vector<node*>,cmp> pq;

    for(auto[c1,f]:frq_cnt)
    {
        pq.push(new node(c1,f));
    }

    while(pq.size()>1)
    {
        struct node* l=pq.top();
        pq.pop();
        struct node* r=pq.top();
        pq.pop();
        struct node *pp=new node('$',l->frq+r->frq);
        pp->left=l;
        pp->right=r;
        pq.push(pp);

    }
    printcode(pq.top(),"");


}
/*#include <bits/stdc++.h>
using namespace std;
struct Node {
    char ch;
    int freq;
    Node *left, *right;

    Node(char c, int f) {
        ch = c;
        freq = f;
        left = right = nullptr;
    }
};
struct cmp {
    bool operator()(Node* a, Node* b){
        return a->freq > b->freq;
    }
};
void printCodes(Node* root, string s){
    if (!root) return;

    if (!root->left && !root->right) {
        cout << root->ch << " : " << s << endl;
    }

    printCodes(root->left, s + "0");
    printCodes(root->right, s + "1");
}
int main() {
    string sen;
    getline(cin, sen);
    unordered_map<char,int> freq;
    for (char c : sen) freq[c]++;
    priority_queue<Node*, vector<Node*>, cmp> pq;
    for (auto [c,f] : freq) {
        pq.push(new Node(c,f));
    }
    while (pq.size() > 1) {
        Node* l = pq.top(); pq.pop();
        Node* r = pq.top(); pq.pop();
        Node* p = new Node('$', l->freq + r->freq);
        p->left = l;
        p->right = r;
        pq.push(p);
    }
    printCodes(pq.top(), "");
}
*/
/*
functor (operator())
struct with operator()
struct Add
{
    int operator()(int a, int b)
    {
        return a + b;
    }
};

Add obj;
cout << obj(3,4);   // works
*/

/*
An object is a variable that has a type and occupies memory.
Do Functions Have Objects?
    Functions themselves are not objects, but they can behave like objects.
    int add(int a,int b){
        return a+b;
    }
    add is a function, not an object.

    But you can create function pointers:
    int (*fptr)(int,int) = add;
    Here:
    fptr is an object storing a function address.

Lambdas Are Special

    A lambda creates an object.

    auto f = [](int a,int b){
        return a+b;
    };


    f is an object.

Internally the compiler creates something like:Lambda internally = class + operator() overloading

    class LambdaType{
    public:
        int operator()(int a,int b){
            return a+b;
        }
    };

    Then:  f = object of LambdaType


    LambdaType=> is type
    operator()=>makes objects callable


    Type → LambdaType
    Object → LambdaType obj;

    And in the lambda case:
      auto cmp = [](node* a,node* b){
    return a->f > b->f;
    };
    Type → hidden lambda class
    Object → cmp


What is a Type?
    A type describes:
        what kind of data something is
        what operations can be done on it
        how memory is structured

Type	Example Object
int	     int x = 5;
double	double y = 3.2;
string	string s = "hi";
class	Car c;
*/

/*wrong
    [](const auto &a,const auto &b)
    {
        return a->f>b->f;
    }
    It is a lambda function.
    Lambda function is function without name
    A callable object is anything that can be called like a function.
    A comparator is a function that compares two values.
    This lambda is a callable comparator object.


    priority_queue<node*,vector<node*>,[](const auto &a,const auto &b)
    {
        return a->f>b->f;
    }
    >;

    priority_queue<T, Container, CompareType>
    Some structures(like priority_queue) need a type, not an object.
    These must be types, not objects.*/


    /*
    cmp is a variable
Its value is a lambda object
That lambda has a compiler-generated type
    decltype(cmp) → gives lambda type.
    you are asking the compiler:

“What is the type of the variable cmp?”

So yes, decltype(cmp) gives the type of the lambda stored in cmp.
    cmp → object of hidden class
    decltype(cmp)Gets the type of that hidden class.

    */
