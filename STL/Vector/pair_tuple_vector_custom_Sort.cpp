#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>

using namespace std;


/*class student
{
public:
    vector<int> roll={1,2,3,4,5};
    vector<string>name(5,"");
    vector<double> mark;

};*/


int main()
{

    // 1D
    //pair

    pair <int ,int> p={10,20};
    //auto p2 = make_pair(10, 20); works


    cout<<"Single pair: "<<p.first<<" "<<p.second<<endl<<endl;

    pair<int,int> a = {1,2};
    pair<int,int> b = {1,3};

    cout << (a < b);   // true
    //Lexicographical comparison (same as vector)


    vector<pair<int,string>> roll_name;
    for(int i=0;i<3;i++)
    {
        /*
        // if size is knwon
        cin>>roll_name[i].first;
        cin.ignore();
        getline(cin, roll_name[i].second);*/

        int r;
        string name;

        cin>>r;
        cin.ignore();
        getline(cin,name);
        roll_name.emplace_back(r, name);
   }
   cout<<endl<<"Roll and name "<<endl;
   for(auto[r,n]:roll_name){cout<<r<<" "<<n<<" "<<endl;}
   sort(roll_name.begin(), roll_name.end());

   cout<<endl<<"Roll and name after sorting(default sort based on first) "<<endl;

   for(auto[r,n]:roll_name){cout<<r<<" "<<n<<" "<<endl;}


   //tuple
   tuple<int,int,int> t={3,2,1};
   //tuple<int,int,int> t(3,2,1);   //auto t = make_tuple(1, "Yathi", 9.5); // works
   /* used to unpack
    int a,b,c;
    tie(roll, name, mark) = t;
    // we can ignore
    tie(roll, name, ignore) = t;

    // this also works for pair
    */

   cout<<endl<<"Elements in 3 valued tuple "<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl<<endl;

   vector<tuple<int,string,double>> student;
   tuple<int,string,double> t1;

   cout<<"Enter roll name and mark"<<endl;
   for(int i=0;i<2;i++)
   {
       cin>>get<0>(t1);
       cin.ignore();
       getline(cin,get<1>(t1));
       cin>>get<2>(t1);

       student.push_back(t1);

       /*
       int roll;
        string name;
        double mark;

        cin >> roll;
        cin.ignore();
        getline(cin, name);
        cin >> mark;

        student.push_back({roll, name, mark}); //student.emplace_back(roll, name, mark); //faster
       */

       /*
       if size is given
       cin >> get<0>(student[i]);
       cin.ignore();
       getline(cin, get<1>(student[i]));
       cin >> get<2>(student[i]);
       */
   }
   cout<<endl<<"Roll name mark"<<endl;
   for(auto &[r, n, m] : student){cout << r << " " << n << " " << m << endl;}
   cout<<endl;






}
