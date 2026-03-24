#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int r = 3, c = 2;
    //vector<vector<int>> mat2(r, vector<int>(c, 0));  // 0 is default value filled
    vector<vector<int>> mat2;

    vector<vector<int>> mat1; //no predefined row and column size
    mat1.push_back({1,2,3});
    mat1.push_back({4,5});
    //jagged vector size of each row in 2d array is different

    cout<<"Accessing the elements of the 2d vector using for each loop "<<endl;

    for(auto each_r: mat1)
    {
        for(auto each_element: each_r)
        {
            cout<<each_element<<" ";
            //each_element=10
            //changes made into each_element will reflect in the 2d vector , bcs each_element is a reference not a copy

        }
        cout<<endl;
    }
    cout<<endl;


    cout<<"Accessing the elements of the 2d vector using index "<<endl;
    for(int i=0;i<mat1.size();i++)
    {
        for(int j=0;j<mat1[i].size();j++)
        {
            cout<<mat1[i][j]<<" ";  //mat.at(i).at(j) this also work
        }
        cout<<endl;
    }
    cout<<endl;

    /*
    changes made into x will reflect in the 2d vector , bcs x is a reference not a copy
    for(auto &row : mat){
    for(auto &x : row){
        cout << x << " ";
        //x=10
    }
    cout << endl;*/

    mat2.push_back({3,2,1});
    mat2.push_back({2,1,3});

    cout<<"number of rows: "<<mat2.size()<<endl;        // number of rows
    cout<<"number of column (here jagged vector number of elements in first row) "<<mat2[0].size()<<endl;
    // number of columns in row i
    cout<<endl;

    cout<<"2D Vector "<<endl;
    for(int i=0;i<mat2.size();i++){for(int j=0;j<mat2[i].size();j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;

    mat2.resize(r);          // rows
    mat2[0].resize(c);       // columns
    // if resized length less than the original then there will be loss of data
    // if greater zeros will be filled

    cout<<"2D Vector "<<endl;
    for(int i=0;i<mat2.size();i++)
    {
        for(int j=0;j<mat2[i].size();j++)
        {
            cout<<mat2[i][j]<<" ";  //mat.at(i).at(j) this also work
        }
        cout<<endl;
    }
    sort(mat2.begin(), mat2.end());
    //Lexicographical row sorting  -> sort columns
    cout<<"2D Vector sort columns wise"<<endl;
    for(int i=0;i<mat2.size();i++){for(int j=0;j<mat2[i].size();j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;
    for(auto &row : mat2){
        sort(row.begin(), row.end());  // sort row wise
    }
    cout<<"2D Vector sort row wise"<<endl;
    for(int i=0;i<mat2.size();i++){for(int j=0;j<mat2[i].size();j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;

    reverse(mat2.begin(), mat2.end());
    cout<<"2D Vector reverse outer vector not each element of the row"<<endl;
    for(int i=0;i<mat2.size();i++){for(int j=0;j<mat2[i].size();j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;


    vector<int> flat;
    for(auto &row : mat2){
        for(auto x : row){
            flat.push_back(x);
        }
    }

    cout<<"Flatened vector "<<endl;
    for(auto each_element:flat)
    {
        cout<<each_element<<" ";
    }
    cout<<endl<<endl;


    int mini = INT_MAX;

    for(auto &row : mat2){
        for(auto x : row){
            mini = min(mini, x); //max(maxi,x)  helps to find max
        }
    }
    cout<<"min element present in the vector: "<<mini<<endl;
    cout<<endl;
    for(auto &row : mat2){
        sort(row.begin(), row.end());   // should be sort for binary_search
        if(binary_search(row.begin(), row.end(), 1)){
            cout << "Found 1 in vector";
        }
    }
    /*
    if(find(row.begin(), row.end(), 1) != row.end()){
    cout << "Found";
    }
    if(cnt(row.begin(), row.end(), 1)){
    cout << "Found";
    }
    // This works sorted vector is not required

    */


    // transpose this method bcs of jagged vector
    int r1 = mat2.size();
    int c1 = 0;

    // to find max size of the row in jagged array
    for(const auto &row : mat2){
        c1 = max(c1, (int)row.size());
    }
    vector<vector<int>> trans(c1);
    for(int i=0;i<mat2.size();i++)
    {
        for(int j=0;j<mat2[i].size();j++)
        {
            trans[j].push_back(mat2[i][j]);
        }
        cout<<endl;
    }
    /*
    if not jagged, this works
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            trans[j][i] = mat2[i][j];
        }
    }
    */

    cout<<"2D Vector transpose jagged vector"<<endl;
    for(int i=0;i<trans.size();i++){for(int j=0;j<trans[i].size();j++){cout<<trans[i][j]<<" ";}cout<<endl;}cout<<endl;

    cout <<"First element of first row"<<trans[0].front()<<endl;
    cout <<"Last element of first row"<<trans[0].back()<<endl;
    cout<<"removing Last element of first row.."<<endl<<endl;
    trans[0].pop_back();

    cout<<"2D Vector "<<endl;
    for(int i=0;i<mat2.size();i++){for(int j=0;j<mat2[i].size();j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;

    mat2[0].insert(mat2[0].begin() + 2, 100);
    cout<<"2D Vector insert element "<<endl;
    for(int i=0;i<mat2.size();i++){for(int j=0;j<mat2[i].size();j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;

    mat2[0].erase(mat2[0].begin() + 2); // remove element

    cout<<"2D Vector remove"<<endl;
    for(int i=0;i<mat2.size();i++){for(int j=0;j<mat2[i].size();j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;

    mat2.clear();   // removes all rows

    return 0;
}
