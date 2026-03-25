#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
using namespace std;
/*struct cmp
{
    bool operator()(const pair<int,double> &a,const pair<int,double> &b)
    {
        //return a.second<b.second;  //ascending order
        return a.second>b.second;  //descending order


    }
};*/

/*bool cmp(const pair<int,double> &a, const pair<int,double> &b)
{
    if(a.second!=b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;

    }
}*/


int main()
{
    vector<pair<int,double>> roll_mark;
    roll_mark.push_back({3,9.8});
    roll_mark.push_back({2,9.0});
    roll_mark.push_back({1,9.5});

    cout<<"Roll mark original: "<<endl;


    for(auto[r,m]:roll_mark)
    {
        cout<<r<<" "<<m<<endl;
    }
    cout<<endl;

    //sort(roll_mark.begin(),roll_mark.end(),cmp());
    //sort(roll_mark.begin(),roll_mark.end(),cmp);
    /*sort(roll_mark.begin(), roll_mark.end(),
    [](const pair<int,double> &a, const pair<int,double> &b)
     {
         return a.second < b.second;
     });*/
    sort(roll_mark.begin(), roll_mark.end(), [](const auto &a, const auto &b){
        return a.second < b.second;
    });

    cout<<"Roll mark sort based on mark: "<<endl;

    for(auto[r,m]:roll_mark)
    {
        cout<<r<<" "<<m<<endl;
    }
    cout<<endl;

    //tuple
    vector<tuple<int,string,double>> student;

    student.push_back({3,"Tj",9.3});
    student.push_back({1,"Yathi",9.7});
    student.push_back({2,"Abi",9.1});


    cout<<"Roll name mark original: "<<endl;

    for(auto[r,n,m]:student)
    {
        cout<<r<<" "<<n<<" "<<m<<endl;
    }
    cout<<endl;

    sort(student.begin(),student.end(),
         [](const auto &a,const auto &b)
         {
            return get<1>(a)<get<1>(b);
         }
         );

    cout<<"Roll name mark sort based on name: "<<endl;
    for(auto[r,n,m]:student)
    {
        cout<<r<<" "<<n<<" "<<m<<endl;
    }
    cout<<endl;

    //2d
    //pair

    vector<vector<pair<int,int>>> grid;

    vector<pair<int,int>> row1;
    row1.push_back({5,100});
    row1.push_back({10,20});

    vector<pair<int,int>> row2;
    row2.push_back({3,13});
    row2.push_back({4,4});

    grid.push_back(row1);
    grid.push_back(row2);

    cout << "Grid Original:"<<endl;
    for(auto &r : grid){
        for(auto &p : r){
            cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << endl;
    }
    cout<<endl;

    for(auto &r : grid){
       sort(r.begin(),r.end(),
            [](const auto &a,const auto &b)
            {
                return a.second<b.second;
            }
            );
    }



    cout << "Grid after sorted based on second - each row:"<<endl;
    for(auto &r : grid){
        for(auto &p : r){
            cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << endl;
    }
    cout << endl;

    sort(grid.begin(), grid.end(), [](const auto &a, const auto &b){
        return a[0].second < b[0].second;
    });


    cout << "Grid after sorted based on second-Sorting Entire 2D Vector:"<<endl;
    for(auto &r : grid){
        for(auto &p : r){
            cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << endl;
    }
    cout << endl;

    /*
    vector<vector<pair<int,int>>> grid;

    int n = 2, m = 2;

    cout << "Enter pairs:\n";

    for(int i = 0; i < n; i++)
    {
        vector<pair<int,int>> row;

        for(int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;

            row.push_back({a, b});
        }

        grid.push_back(row);
    }
    */


    vector<vector<tuple<int,string,double>>> grid1;

    vector<tuple<int,string,double>> row11;
    row11.push_back({1,"A",9.5});
    row11.push_back({2,"B",7.2});

    vector<tuple<int,string,double>> row22;
    row22.push_back({3,"C",8.8});
    row22.push_back({4,"D",6.1});

    grid1.push_back(row11);
    grid1.push_back(row22);

    cout << "Original Grid:\n";
    for(auto &r : grid1){
        for(auto &t : r){
            cout << "("
                 << get<0>(t) << ", "
                 << get<1>(t) << ", "
                 << get<2>(t) << ") ";
        }
        cout << endl;
    }
    cout << endl;

    for(auto &r : grid1){
        sort(r.begin(), r.end(),
            [](const auto &a, const auto &b){
                return get<2>(a) < get<2>(b);   // sort by double
            }
        );
    }


    cout << "Sorted Grid (by double):\n";
    for(auto &r : grid1){
        for(auto &t : r){
            cout << "("
                 << get<0>(t) << ", "
                 << get<1>(t) << ", "
                 << get<2>(t) << ") ";
        }
        cout << endl;
    }
    cout << endl;




    return 0;
}

