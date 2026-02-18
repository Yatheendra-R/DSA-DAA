/*#include <bits/stdc++.h>
using namespace std;
int main()
{

    string t;
    string p;
    cout<<"Enter the Text: ";
    cin>>t;
    cin.ignore();
    cout<<"Enter the pattern: ";
    cin>>p;
    int l_t=t.size();
    int l_p=p.size();
    unordered_set<char> char_t;
    unordered_set<char> char_p;
    for(auto each_char:t)
    {
        char_t.insert(each_char);
    }
    for(auto each_char:p)
    {
        char_p.insert(each_char);
    }

    unordered_map<char,int> code;
    int d=1;
    for(auto each_char:char_t)
    {
        code[each_char]=d;
        d++;
    }

    for(auto pr:code)
    {
        cout<<pr.first<<" : "<<pr.second<<endl;
    }

    vector<int> text_code(l_t,0);
    vector<int> p_code(l_p,0);

    for(int i=0;i<l_t;i++)
    {
        text_code[i]=code[t.at(i)];
    }

    for(int i=0;i<l_p;i++)
    {
        p_code[i]=code[p.at(i)];
    }

    for(auto t_val:text_code)
    {
        cout<<t_val<<" ";
    }
    cout<<endl;
    for(auto p_val:p_code)
    {
        cout<<p_val<<" ";

    }
    cout<<endl;

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text, pattern;
    cout << "Enter the Text: ";
    cin >> text;

    cout << "Enter the Pattern: ";
    cin >> pattern;

    int n = text.length();
    int m = pattern.length();

    if(m > n)
    {
        cout << "Pattern length is greater than text length.\n";
        return 0;
    }

    int d = 256;
    int q = 101;

    int h = 1;
    int p = 0;
    int t = 0;
    for(int i = 0; i < m - 1; i++)
        h = (h * d) % q;

    for(int i = 0; i < m; i++)
    {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }

    for(int i = 0; i <= n - m; i++)
    {
        if(p == t)
        {
            bool match = true;
            for(int j = 0; j < m; j++)
            {
                if(text[i + j] != pattern[j])
                {
                    match = false;
                    break;
                }
            }

            if(match)
                cout << "Pattern found at index: " << i << endl;
        }

        if(i < n - m)
        {
            t = (d * (t - text[i] * h) + text[i + m]) % q;

            if(t < 0)
                t += q;
        }
    }

    return 0;
}

