#include <bits/stdc++.h>
using namespace std;
int main()
{
    string txt;
    string pat;
    cout<<"Enter the txt: ";
    cin>>txt;
    cin.ignore();
    cout<<"Enter the patter(with _ ) : ";
    cin>>pat;

    vector<string> each_pat;
    vector<int> size_pat;
    int length_eachpat=0;

    int length_txt=txt.length();
    int cnt=0;
    string s1="";
    for(auto char_:pat)
    {
        if(char_!='_')
        {
            s1+=char_;
            cnt++;
        }
        else
        {
            if(s1!="")
            {
                each_pat.push_back(s1);
                s1="";
                size_pat.push_back(cnt);
                length_eachpat++;
                cnt=0;
            }


        }

    }
    if(cnt>0)
    {
        each_pat.push_back(s1);
        s1="";
        size_pat.push_back(cnt);
        length_eachpat++;
        cnt=0;

    }

    int k=0;
    int fg=0;
    for(int i=0;i<length_txt;i++)
    {
        s1="";
        if((length_txt-i)>=size_pat[k])
        {
            for(int j=i;(j-i)<size_pat[k];j++)
            {
                s1+=txt[j];
            }
        }
        if(s1==each_pat[k])
        {
            k++;
        }
        if(k==length_eachpat&&i>length_txt-1)
        {

            cout<<i<<" Match found in the pattern";

            fg=1;
            break;
        }
    }
    if(fg==0)
    {
        cout<<"No Match found in the pattern";
    }
    return 0;
}
