#include <bits/stdc++.h>
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
    /*
    #include <bits/stdc++.h>
    using namespace std;

    struct Node {
        char ch;
        int freq;
        Node *left;
        Node *right;
    };

    struct cmp {
        bool operator()(Node* a, Node* b) {
            return a->freq > b->freq;   // min-heap
        }
    };

    void printCodes(Node* root, string s) {
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
        for (char c : sen)
            freq[c]++;

        priority_queue<Node*, vector<Node*>, cmp> pq;

        // create leaf nodes
        for (auto [c,f] : freq) {
            Node* node = new Node;
            node->ch = c;
            node->freq = f;
            node->left = nullptr;
            node->right = nullptr;

            pq.push(node);
        }

        // build Huffman tree
        while (pq.size() > 1) {
            Node* l = pq.top(); pq.pop();
            Node* r = pq.top(); pq.pop();

            Node* p = new Node;
            p->ch = '$';                     // dummy character
            p->freq = l->freq + r->freq;     // sum of children
            p->left = l;
            p->right = r;

            pq.push(p);
        }

        // generate codes
        printCodes(pq.top(), "");
    }

    */
    /*using namespace std;
    int main()

    {

        string sen;
        cout<<"Enter the sentance: ";
        cin>>sen;

        unordered_map<char,int> frq;
        for(auto c:sen )
        {
            frq[c]++;
        }

        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>> pq;

        for(auto[k,v]:frq)
        {
            string s_="";
            s_+=k;

            pq.push({v,s_});
        }

        unordered_map<char,string> code;
        while(pq.size()>1)
        {
            auto[sum,str]=pq.top();
            cout<<sum<<" "<<str<<endl;
            for(auto each_C:str)
            {
                code[each_C]="1"+code[each_C];


            }
            pq.pop();
            auto[sum_,str_]=pq.top();
            cout<<sum_<<" "<<str_<<endl;

            for(auto each_cc:str_)
            {
                code[each_cc]="0"+code[each_cc];

            }
            pq.pop();
            pq.push({sum+sum_,str+str_});
            cout<<endl<<"--------------------------"<<endl;
            for(auto[k,v]:code)
            {
                cout<<k<<" : "<<v<<endl;
            }

            cout<<endl<<"--------------------------"<<endl;



        }


        cout<<endl<<endl;
        cout<<"Final answer: "<<endl;
        for(auto[k,v]:code)
        {
            cout<<k<<" : "<<v<<endl;
        }





        return 0;
    }
    */
