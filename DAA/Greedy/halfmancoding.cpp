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
