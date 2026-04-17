#include <bits/stdc++.h>
using namespace std;
/*
//fractional knapsack
int main()
{
    int n;
    cout<<"Enter the number of items: ";
    cin>>n;
    vector<tuple<int,int,double>> info(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Weight of "<<i+1<<" item: ";
        cin>>get<0>(info[i]);

    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the profit of "<<i+1<<" item: ";
        cin>>get<1>(info[i]);

    }
    for(int i=0;i<n;i++)
    {
        get<2>(info[i])=(1.0*get<1>(info[i]))/(get<0>(info[i]));


    }
    sort(info.begin(),info.end(),
         [](const auto &a,const auto &b)
         {
            return get<2>(a)>get<2>(b);
         });


    int W;
    cout<<"Enter the max weight: ";
    cin>>W;
    //int curr_W=0;
    int i=0;
    double max_profit=0.0;
    while(W>0&&i<n)
    {
        if(W>=get<0>(info[i]))
        {
            max_profit+=get<1>(info[i]);
            W=W-get<0>(info[i]);
        }
        else
        {
            //max_profit+=(get<1>(info[i])*W)/(get<0>(info[i]));
            max_profit+=W*get<2>(info[i]);
            W=0;
        }
        i++;
    }
    cout<<max_profit<<endl;


    return 0;
}*/

/*
huffman
struct node
{
    char c;
    int f;
    struct node *left,*right;
    node(char c,int f)
    {
        this->c=c;
        this->f=f;
        left=right=nullptr;

    }

};
void ptcode(struct node *cur_node,string s)
{
    if(cur_node->left==nullptr&&cur_node->left==nullptr)
    {
        cout<<cur_node->c<<" : "<<s<<endl;
        return ;
    }
    ptcode(cur_node->left,s+"0");
    ptcode(cur_node->right,s+"1");

}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    map<char,int> cnt_c;
    for(int i=0;i<str.length();i++)
    {
        cnt_c[str[i]]++; //cnt_c[str[i]]=cnt_c[str[i]]+1;
    }

    auto cmp = [](node* a, node* b){
    return a->f > b->f;
};

    priority_queue<node*, vector<node*>, decltype(cmp)> pq(cmp);  //pq is an object of type priority_queue
    //priority_queue<int> pq; //You are actually calling a constructor of priority_queue.

    for(auto [chr,cnt]:cnt_c)
    {
        pq.push(new node(chr,cnt));
    }
    while(pq.size()>1)
    {
        struct node *l=pq.top();
        pq.pop();
        struct node *r=pq.top();
        pq.pop();
        struct node *newnode=new node('$',l->f+r->f);
        newnode->left=l;
        newnode->right=r;
        pq.push(newnode);
    }
    ptcode(pq.top(),"");

    return 0;
}*/
/*//maxsubarray
int cross(vector<int>&arr,int s,int e)
{
    int mid=(s+e)/2;
    int fg1=0;
    int fg2=0;

    int rim=arr[mid+1];
    int rir=arr[mid+1];
    if(rim==2)
    {
        fg1=1;

    }
    for(int i=mid+2;i<=e;i++)
    {
        rir+=arr[i];
        if(rir>rim){
            if(arr[i]==2)
            {
                fg1=1;
            }
            rim=rir;

        }

    }
    int lem=arr[mid];
    int ler=arr[mid];
    if(lem==2)
    {
        fg2=1;

    }
    for(int i=mid-1;i>=s;i--)
    {
        ler+=arr[i];
        if(ler>lem){
            if(arr[i]==2)
            {
                fg2=1;
            }
            lem=ler;

        }

    }
    if(fg1==1||fg2==1)
    {
        return lem+rim;
    }
    return 0;
}
int sub(vector<int>&arr,int s,int e)
{
    if(s==e)
    {
        if(arr[e]!=2)
        {
            return 0;
        }
        return arr[e];
    }
    int mid=(s+e)/2;
    int lm=sub(arr,s,mid);
    int rm=sub(arr,mid+1,e);
    int cm=cross(arr,s,e);
    return max({lm,rm,cm});


}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];
    }
    int ans=sub(arr,0,n-1);
    cout<<ans;
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

int cross(vector<int>&arr,int s,int e)
{
    int mid=(s+e)/2;

    int lem=INT_MIN, ler=0;
    int rim=INT_MIN, rir=0;

    int fg1=0, fg2=0;

    // left side
    for(int i=mid;i>=s;i--)
    {
        ler+=arr[i];

        if(arr[i]==2)
            fg1=1;

        lem=max(lem,ler);
    }

    // right side
    for(int i=mid+1;i<=e;i++)
    {
        rir+=arr[i];

        if(arr[i]==2)
            fg2=1;

        rim=max(rim,rir);
    }

    if(fg1 || fg2)
        return lem+rim;

    return INT_MIN;
}

int sub(vector<int>&arr,int s,int e)
{
    if(s==e)
    {
        if(arr[s]==2)
            return arr[s];
        return INT_MIN;
    }

    int mid=(s+e)/2;

    int lm=sub(arr,s,mid);
    int rm=sub(arr,mid+1,e);
    int cm=cross(arr,s,e);

    return max({lm,rm,cm});
}

int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int ans=sub(arr,0,n-1);

    if(ans==INT_MIN)
        cout<<0;
    else
        cout<<ans;
}
*/
//kara
/*
int length(int n)
{
    int l=0;
    while(n>0)
    {
        n=n/10;
        l++;
    }
    return l;
}
int kar(int n1,int n2)
{
    if(n1<10 ||n2<10)
    {
        return n1*n2;
    }

    int l1=length(n1);
    int l2=length(n2);
    int l=max({l1,l2});
    if(l%2!=0)
    {
        l++;
    }
    int p=pow(10,l/2);
    int a=(n1/p);
    int b=(n1%p);
    int c=(n2/p);
    int d=(n2%p);
    int ac=kar(a,c);
    int bd=kar(b,d);
    int x=kar(a+b,c+d)-ac-bd;
    return (ac*pow(10,l))+bd+(x*pow(10,l/2));



}
int main()
{

    int n1;
    int n2;
    cout<<"Enter the number: ";
    cin>>n1;
    cout<<"Enter the number: ";
    cin>>n2;
    cout<<kar(n1,n2);
}*/
/*int main()
{
    int n;
    cout<<"Enter the number of node: ";
    cin>>n;
    vector<int> l1(n);
    vector<int> l2(n);
    vector<int> t1(n);
    vector<int> t2(n);
    int e1;
    int e2;
    int s1;
    int s2;

    cout<<"Enter the start 1 and start 2: "<<endl;
    cin>>s1;
    cin>>s2;

    cout<<"Enter the end1 and end2: "<<endl;
    cin>>e1;
    cin>>e2;

    cout<<"Value of node of line1: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>l1[i];

    }

    cout<<"Value of node of line2: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>l2[i];
    }

    cout<<"Value of transfer of line1: "<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>t1[i];
    }
    cout<<"Value of transfer of line2: "<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>t2[i];
    }

    int sum1=s1+l1[0];
    int sum2=s2+l2[0];

    for(int i=1;i<n;i++)
    {
       int dummy_sum1= min({sum1+l1[i],sum2+l1[i]+t2[i]});
        sum2=min({sum2+l2[i],sum1+l2[i]+t1[i]});
        sum1=dummy_sum1;
    }
    int ans=min({sum1+e1,sum2+e2});
    cout<<ans<<endl;
}
*/

/*
//matrix
int main()
{
    int n;
    cout<<"Enter the number of matrix: ";
    cin>>n;
    n++;

    vector <int> p(n);
    cout<<"Enter the dimension: ";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    vector<vector<int>> dp(n,vector<int>(n,0));

    for(int i=1;i<n;i++)
    {
        int pi=1;
        for(int j=1+i;j<n;j++)
        {
            int v=INT_MAX;
            for(int k=pi;k<j;k++)
            {
                int q=dp[pi][k]+dp[k+1][j]+p[pi-1]*p[k]*p[j];
                if(q<v)
                {
                    v=q;
                }
            }
            dp[pi][j]=v;
            pi++;
        }
    }
    cout<<dp[1][n-1];


    return 0;
}*/

/*//lcs

void alllcs(vector<vector<int>> &dp,set<string> &uni,string cur,int i,int j,string &s1,string &s2)
{
    if(i==0||j==0)
    {
        reverse(cur.begin(),cur.end());
        uni.insert(cur);
        return;
    }
    if(s1[i-1]==s2[j-1])
    {
        cur+=s1[i-1];
        alllcs(dp,uni,cur,i-1,j-1,s1,s2);
        return;
    }
    else
    {
        if(dp[i][j]==dp[i-1][j])
        {
            alllcs(dp,uni,cur,i-1,j,s1,s2);


        }
        if(dp[i][j]==dp[i][j-1])
        {
            alllcs(dp,uni,cur,i,j-1,s1,s2);

        }
    }
}
int main()
{

    string s1;
    cout<<"Enter the string: ";
    cin>>s1;
    string s2;
    cout<<"Enter the string: ";
    cin>>s2;

    int l1=s1.length();
    int l2=s2.length();
    l1++;
    l2++;

    vector<vector<int>> dp(l1,vector<int>(l2,0));

    for(int i=1;i<l1;i++)
    {
        for(int j=1;j<l2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max({dp[i-1][j],dp[i][j-1]});
            }
        }
    }
    set<string> uni;
    alllcs(dp,uni,"",l1-1,l2-1,s1,s2);
    for(auto each:uni)
    {
        cout<<each<<endl;
    }
    cout<<uni.size()<<endl;

    return 0;
}*/
/*//0-1
int main()
{
    int n;
    cout<<"Enter the number of object: "<<endl;
    cin>>n;
    int W;
    cout<<"Enter the Max weight: "<<endl;
    cin>>W;
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    vector<int> p(n);
    vector<int> wt(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the profit for item: "<<i+1<<" : ";
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight for item: "<<i+1<<" : ";
        cin>>wt[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int w=1;w<=W;w++)
        {
            if(wt[i-1]<=w)
            {
                dp[i][w]=max({dp[i-1][w],dp[i][w-wt[i-1]]+p[i-1]});
            }
            else
            {
                dp[i][w]=dp[i-1][w];
            }
        }
    }
    cout<<"ans: "<<dp[n][W]<<endl;
    int i=n;
    int w=W;
    while(i>0&&w>0)
    {
        if(dp[i][w]!=dp[i-1][w])
        {
            cout<<wt[i-1]<<" "<<p[i-1]<<endl;
            w=w-wt[i-1];
        }
        else
        {
            i--;
        }
    }
    return 0;

}*/
/*void sub(vector<int> &arr,int target,int sum,vector<int> &cursol,set<vector<int>> &allsol,int i,int n)
{
    //works even for negative number
    if(target==sum)
    {
        allsol.insert(cursol);
    }
    if(i==n)
    {
        return;
    }

    //
    //for only positive
    //if(target==sum)
    //{
    //    allsol.insert(cursol);
    //    return
    //}
    //if(sum>target || i==n)
    //{
    //    return;
    //}
    //
    //

    cursol.push_back(arr[i]);
    sub(arr,target,sum+arr[i],cursol,allsol,i+1,n);
    cursol.pop_back();

    sub(arr,target,sum,cursol,allsol,i+1,n);


}
int main()
{
    int target;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;


    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    set<vector<int>> allsol;
    vector<int> cursol;
    sub(arr,target,0,cursol,allsol,0,n);
    cout<<"Target: "<<target<<endl;
    if(allsol.size()>0)
    {
        for(auto each_vec:allsol)
        {
            int sum=0;
            for(auto each:each_vec)
            {
                cout<<each<<" ";
                sum+=each;
            }
            cout<<": "<<sum<<endl;
        }
    }
    else{
        cout<<"No soln"<<endl;
    }

    return 0;
}*/
/*//N Q
int main()
{
    return
}
*/
/*
// edmard
bool bfs(vector<vector<int>> &resi,int s,int t,int V,vector<int> &parent)
{
    parent[s]=-1;
    queue<int> q;
    q.push(s);
    vector<int> vis(V,false);
    vis[s]=true;


    while(q.size()>0)
    {
        int u=q.front();
        q.pop();

        for(int i=0;i<V;i++)
        {
            if(!vis[i]&&resi[u][i]>0)
            {
                q.push(i);
                vis[i]=true;
                parent[i]=u;

            }
        }
    }
    return vis[t];

}
int edm(vector<vector<int>> &graph,int s,int t,int V)
{
    vector<int> parent(V,0);
    vector<vector<int>> resi=graph;
    int max_flow=0;
    while(bfs(resi,s,t,V,parent))
    {
        int min_flow=INT_MAX;
        for(int i=t;i!=s;i=parent[i])
        {
            int u=parent[i];
            min_flow=min(resi[u][i],min_flow);
        }
        max_flow+=min_flow;

        for(int i=t;i!=s;i=parent[i])
        {
            int u=parent[i];
            resi[u][i]-=min_flow;
            resi[i][u]+=min_flow;
        }



    }
    return max_flow;


}
int main()
{

    int V;
    cout<<"Enter the of vertex: ";
    cin>>V;
    vector<vector<int>> graph(V,vector<int>(V,0));
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cin>>graph[i][j];
        }
    }
    int s,t;
    cout<<"Source: ";
    cin>>s;
    cout<<"Terminal: ";
    cin>>t;

    cout<<edm(graph,s,t,V);
    return 0;
}*/
/*
//col
bool isSafe(int row,int col,vector<string> &board,int n)
{
    int drow=row;
    int dcol=col-1;
    while(dcol>=0)
    {
        if(board[drow][dcol]=='Q')
        {
            return false;
        }
        dcol--;

    }
    drow=row+1;
    dcol=col-1;
    while(dcol>=0&&drow<n)
    {
        if(board[drow][dcol]=='Q')
        {
            return false;
        }
        drow++;
        dcol--;
    }
    drow=row-1;
    dcol=col-1;
    while(dcol>=0&&drow>=0)
    {
        if(board[drow][dcol]=='Q')
        {
            return false;
        }
        drow--;
        dcol--;
    }
    return true;
}
void solve(int col,int n,vector<vector<string>> &ans, vector<string> &board)
{
    if(col==n)
    {
        ans.push_back(board);
    }
    else
    {
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1,n,ans,board);
                board[row][col]='.';
            }
        }

    }


}
int main()
{
    int n=4;
    vector<vector<string>> ans;
    string s(n,'.');
    vector<string> board(n);

    for(int i=0;i<n;i++)
    {
        board[i]=s;
    }
    solve(0,n,ans,board);
    for(auto sol :ans)
    {
        //sol =>vector<string>
        for(auto &row:sol)
        {
            //row => string
            cout<<row<<endl;
        }
        cout<<endl;
    }
    return 0;
}*/
/*
//row
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string> &board,int n)
{
    int drow,dcol;

    // check column upwards
    drow=row-1;
    dcol=col;
    while(drow>=0)
    {
        if(board[drow][dcol]=='Q')
            return false;
        drow--;
    }

    // upper-left diagonal
    drow=row-1;
    dcol=col-1;
    while(drow>=0 && dcol>=0)
    {
        if(board[drow][dcol]=='Q')
            return false;
        drow--;
        dcol--;
    }

    // upper-right diagonal
    drow=row-1;
    dcol=col+1;
    while(drow>=0 && dcol<n)
    {
        if(board[drow][dcol]=='Q')
            return false;
        drow--;
        dcol++;
    }

    return true;
}

void solve(int row,int n,vector<vector<string>> &ans,vector<string> &board)
{
    if(row==n)
    {
        ans.push_back(board);
        return;
    }

    for(int col=0;col<n;col++)
    {
        if(isSafe(row,col,board,n))
        {
            board[row][col]='Q';
            solve(row+1,n,ans,board);
            board[row][col]='.';
        }
    }
}

int main()
{
    int n=4;

    vector<vector<string>> ans;
    vector<string> board(n,string(n,'.'));

    solve(0,n,ans,board);

    for(auto &sol:ans)
    {
        for(auto &row:sol)
            cout<<row<<endl;
        cout<<endl;
    }

    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string> &board,int n)
{
    int drow,dcol;

    // column check (upwards)
    drow=row-1;
    dcol=col;
    while(drow>=0)
    {
        if(board[drow][dcol]=='Q')
            return false;
        drow--;
    }

    // upper-left diagonal
    drow=row-1;
    dcol=col-1;
    while(drow>=0 && dcol>=0)
    {
        if(board[drow][dcol]=='Q')
            return false;
        drow--;
        dcol--;
    }

    // upper-right diagonal
    drow=row-1;
    dcol=col+1;
    while(drow>=0 && dcol<n)
    {
        if(board[drow][dcol]=='Q')
            return false;
        drow--;
        dcol++;
    }

    return true;
}

void solve(int row,int n,vector<string> &board)
{
    // BASE CASE → print solution directly
    if(row==n)
    {
        for(auto &r:board)
            cout << r << endl;
        cout << endl;
        return;
    }

    for(int col=0;col<n;col++)
    {
        if(isSafe(row,col,board,n))
        {
            board[row][col]='Q';

            solve(row+1,n,board);

            board[row][col]='.'; // backtrack
        }
    }
}

int main()
{
    int n=4;

    vector<string> board(n,string(n,'.'));

    solve(0,n,board);

    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int Tsp(int mask,int pos,int number_city,vector<vector<int>> &dist,vector<vector<int>> &dp)
{
    if(mask==(1<<number_city)-1)
    {
        return dist[pos][0];
    }
    if(dp[mask][pos]!=-1)
    {
        return dp[mask][pos];
    }
    int ans=INT_MAX;
    for(int city=0;city<number_city;city++)
    {
        if((mask&(1<<city))==0)
        {
            int newanswer=dist[pos][city]+Tsp(mask|(1<<city),city,number_city,dist,dp);
            ans=min(ans,newanswer);

        }


    }
    return dp[mask][pos]=ans;
}

int main()
{

    int number_city;
    cout<<"Enter the number of cities: ";
    cin>>number_city;

    vector<vector<int>> dist(number_city,vector<int>(number_city));
    vector<vector<int>> dp(1<<number_city,vector<int>(number_city,-1));

    for(int i=0;i<number_city;i++)
    {
        for(int j=0;j<number_city;j++)
        {
            if(i==j)
            {
                dist[i][j]=0;

            }
            else
            {
                cout<<"Enter the distance from city "<<i+1<<" to city "<<j+1<<" : ";
                cin>>dist[i][j];
            }


        }
    }

    cout<<Tsp(1,0,number_city,dist,dp)<<endl;// mask(starting from city of index 1),pos(index),number_city,dist,dp;


    return 0;
}

*/
/*#include <bits/stdc++.h>
using namespace std;

int Tsp(int mask,int pos,int number_city,vector<vector<int>> &dist,vector<vector<int>> &dp)
{
    if(mask==(1<<number_city)-1)
    {
        return dist[pos][0];
    }
    if(dp[mask][pos]!=-1)
    {
        return dp[mask][pos];
    }
    int ans=INT_MAX;
    for(int city=0;city<number_city;city++)
    {
        if((mask&(1<<city))==0)
        {
            int newanswer=dist[pos][city]+Tsp(mask|(1<<city),city,number_city,dist,dp);
            ans=min(ans,newanswer);

        }


    }
    return dp[mask][pos]=ans;
}

int main()
{

    int number_city;
    cout<<"Enter the number of cities: ";
    cin>>number_city;

    vector<vector<int>> dist(number_city,vector<int>(number_city));
    vector<vector<int>> dp(1<<number_city,vector<int>(number_city,-1));

    for(int i=0;i<number_city;i++)
    {
        for(int j=0;j<number_city;j++)
        {
            if(i==j)
            {
                dist[i][j]=0;

            }
            else
            {
                cout<<"Enter the distance from city "<<i+1<<" to city "<<j+1<<" : ";
                cin>>dist[i][j];
            }


        }
    }

    cout<<Tsp(1,0,number_city,dist,dp)<<endl;// mask(starting from city of index 1),pos(index),number_city,dist,dp;


    return 0;
}
*/
/*int tsp(int mask,int pos,int n,vector<vector<int>> &dist,vector<vector<int>> &dp)
{
    if(mask==(1<<n)-1)
    {
        return dist[pos][0];
    }
    if(dp[mask][pos]!=-1)
    {
        return dp[mask][pos];

    }
    int ans=INT_MAX;
    for(int city=0;city<n;city++)
    {
        if(!(mask&(1<<city)))
        {
            int new_ans=dist[pos][city]+tsp(mask|(1<<city),city,n,dist,dp);
            ans=min(new_ans,ans);
        }
    }
    return dp[mask][pos]=ans;

}
int main()
{

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<vector<int>> dist(n,vector<int>(n,0));
    vector<vector<int>> dp(1<<n,vector<int>(n,-1));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {


            cout<<"Enter the distance from "<<i+1<<" to "<<j+1<<" : ";
            cin>>dist[i][j];

        }
    }

    cout<<tsp(1,0,n,dist,dp);
    return 0;
}
*/
















