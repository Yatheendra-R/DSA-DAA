#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
#include <array>

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
    //auto p2 = make_pair(100, 2);


    cout<<"Single pair: "<<p.first<<" "<<p.second<<endl<<endl;

    pair<int,int> a = {1,2};
    pair<int,int> b = {1,3};

    cout <<"True(1) or False(0): "<<(a < b)<<endl<<endl;   // true
    //Lexicographical comparison (same as vector)
    auto[a1,b1]=min(a, b); //max
    cout<<"Min pair: "<<a1<<" "<<b1<<endl<<endl;


    vector<pair<int,string>> roll_name;
    cout<<"Enter the roll(int) and name(string) "<<endl;
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
    //max(t1, t2);

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

   sort(student.begin(), student.end());
   cout<<endl<<"Roll name mark after sort"<<endl;
   for(auto &[r, n, m] : student){cout << r << " " << n << " " << m << endl;}
   cout<<endl;


   // 2d
   // pair
   vector<vector<pair<int,int>>> from_to;
   int r=2;
   int c=2;

   vector<vector<pair<int,int>>> from_to1;
   from_to1.push_back({make_pair(2,1),make_pair(2,2)});
   from_to1.push_back({make_pair(1,2),make_pair(1,1)});
   cout<<"{from to}"<<endl;
   for(auto &row:from_to1)
   {
       for(auto &[f,t]:row)
       {
           cout<<"|| { "<<f<<" ,"<<t<<" } || ";

       }
       cout<<endl;
   }
   cout<<endl;

   /*
   for(const auto &row : from_to1){
    for(const auto &p : row){
        cout << p.first << "," << p.second << " ";
    }
    cout << endl;
    }
   */

   for(auto &row : from_to1){
        sort(row.begin(), row.end());  //sort based on the first element of the pairs if same: first → second
   }
   cout<<endl;
   cout<<"{from to} after sort elements of each row"<<endl;
   for(auto &row:from_to1)
   {
       for(auto &[f,t]:row)
       {
           cout<<"|| { "<<f<<" ,"<<t<<" } || ";

       }
       cout<<endl;
   }
   cout<<endl;

   sort(from_to1.begin(), from_to1.end());
   cout<<"{from to} after sort outer vector"<<endl;
   for(auto &row:from_to1)
   {
       for(auto &[f,t]:row)
       {
           cout<<"|| { "<<f<<" ,"<<t<<" } || ";

       }
       cout<<endl;
   }
   cout<<endl;

   for(auto &row : from_to1){
        for(auto &[f,t] : row){
            if(f > t) swap(f, t);
        }
    }
    cout<<"{from to} after sort pair"<<endl;
   for(auto &row:from_to1)
   {
       for(auto &[f,t]:row)
       {
           cout<<"|| { "<<f<<" ,"<<t<<" } || ";

       }
       cout<<endl;
   }
   cout<<endl;
    /*
    Rows compared lexicographically:

    Compare first element of each row
    Then next..
    */

    vector<vector<tuple<int,string,double>>> mat(2);
    mat[0].push_back({3, "B", 8.2});
    mat[0].push_back({1, "A", 9.5});
    mat[1].push_back({0, "C", 9.7});
    mat[1].push_back({4, "D", 9.7});

    cout<<"Student roll  name cgpa "<<endl;
    for(const auto &row : mat){
        for(const auto &[a,b,c] : row){
            cout << a << "," << b << "," << c << "   ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*
    for(const auto &row : mat){
        for(const auto &t : row){
            cout << get<0>(t) << ","
                 << get<1>(t) << ","
                 << get<2>(t) << " ";
        }
        cout << endl;
    }
    */

    for(auto &row : mat){
        sort(row.begin(), row.end());
    }
    cout<<"Student roll  name cgpa after sort elements of each row"<<endl;
    for(const auto &row : mat){
        for(const auto &[a,b,c] : row){
            cout << a << "," << b << "," << c << "   ";
        }
        cout<<endl;
    }
    cout<<endl;
    sort(mat.begin(), mat.end());

    cout<<"Student roll  name cgpa after sort outer vector"<<endl;
    for(const auto &row : mat){
        for(const auto &[a,b,c] : row){
            cout << a << "," << b << "," << c << "   ";
        }
        cout<<endl;
    }
    cout<<endl;



    vector<vector<tuple<int,int,int>>> mat1(2);

    mat1[0].push_back({3,1,2});
    mat1[0].push_back({9,5,7});

    mat1[1].push_back({4,6,2});
    mat1[1].push_back({8,1,3});

    cout << "Before sorting inside each tuple:\n";
    for(auto &row : mat1){
        for(auto &[a,b,c] : row){
            cout << "(" << a << "," << b << "," << c << ") ";
        }
        cout << endl;
    }

    for(auto &row : mat1){
        for(auto &[a,b,c] : row){
            array<int,3> arr = {a,b,c};
            sort(arr.begin(), arr.end());
            tie(a,b,c) = {arr[0], arr[1], arr[2]};
        }
    }

    cout << "\nAfter sorting inside each tuple:\n";
    for(auto &row : mat1){
        for(auto &[a,b,c] : row){
            cout << "(" << a << "," << b << "," << c << ") ";
        }
        cout << endl;
    }
    return 0;

}
