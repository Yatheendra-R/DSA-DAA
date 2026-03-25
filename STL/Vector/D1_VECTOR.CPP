#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    vector<int> roll={1,2,3,4,5};
    vector<string>name(5,"");
    vector<double> mark;
    for(auto r:roll){
        cout<<r<<" ";
    }
    cout<<endl;
    /*//Empty
    for(auto m:mark){
        cout<<m<<" ";
    }*/
    int l=name.size();
    cout<<"Enter the name and mark: ";
    for(int i=0;i<l;i++){
        getline(cin, name[i]);
        //cin>>mark[i]; error bcs size of mark is not predefined so we can not use at or []
        //cin>>mark.push_back(); //Because push_back() is not a variable — it’s a function.
        int dummy_mark;

        cin>>dummy_mark;
        mark.push_back(dummy_mark);
        cin.ignore();
    }
    cout<<"Name and mark "<<endl;
    for(int i=0;i<l;i++){
        cout<<name[i]<<" "; //cout<<name.at(i)<<" "; this also works
        cout<<mark[i]<<endl; //cout<<mark.at(i)<<" "; this also works

    }
    cout<<endl;

    roll.push_back(6);
    roll.push_back(7);
    // we can push into vector from the back any number of times , size will dynamically changing

    cout<<"size for roll vector: "<<roll.size()<<endl;
    cout<<"Roll numbers: ";
    for(auto r:roll){cout<<r<<" ";}cout<<endl;

    cout<<"see the last element: "<<roll.back()<<endl;
    cout<<"popping or removing last element...  "<<endl;
    roll.pop_back();
    cout<<"see the last element: "<<roll.back()<<endl;

    cout<<"Inserting 100 in index 3 of roll vector"<<endl;
    roll.insert(roll.begin()+3,100);
    cout<<"Roll numbers: ";
    for(auto r:roll){cout<<r<<" ";}cout<<endl;

    cout<<"Inserting 50 at beginning of roll vector"<<endl;
    roll.insert(roll.begin(), 50);          // insert at beginning
    cout<<"Roll numbers: ";
    for(auto r:roll){cout<<r<<" ";}cout<<endl;

    cout<<"Inserting 150 at end of roll vector"<<endl;
    roll.insert(roll.end(), 150);           // insert at end
    cout<<"Roll numbers: ";
    for(auto r:roll){cout<<r<<" ";}cout<<endl;


    cout<<"insert 7 three times(from index 1) of roll vector"<<endl;
    roll.insert(roll.begin()+1, 3, 7);      // insert 7 three times
    cout<<"Roll numbers: ";
    for(auto r:roll){
        cout<<r<<" ";
    }
    cout<<endl;

    //erase()
    cout << "\nErasing element at index 2...\n";
    roll.erase(roll.begin() + 2);

    cout << "After erase:\n";
    for(auto r : roll){
        cout << r << " ";
    }
    cout << endl;

    cout << "\nErasing range [1,4)...\n";
    roll.erase(roll.begin() + 1, roll.begin() + 4);

    cout << "After range erase:\n";
    for(auto r : roll){
        cout << r << " ";
    }
    cout << endl;

    cout<<"First element: "<<roll.front()<<endl;   // first element

    //find()
    cout << "\nFinding 10...\n";
    auto it = find(roll.begin(), roll.end(), 10);
    if(it != roll.end()){
        cout << "Found at index: " << it - roll.begin() << endl;
    } else {
        cout << "Not found\n";
    }

    //binary_search()
    sort(roll.begin(), roll.end()); // required
    cout << "Binary search for 10: ";
    if(binary_search(roll.begin(), roll.end(), 10)){
        cout << "Found\n";
    } else {
        cout << "Not found\n";
    }

    //count()
    cout << "Count of 5: " << count(roll.begin(), roll.end(), 5) << endl;


    //sort()
    cout << "\nSorting ascending...\n";
    sort(roll.begin(), roll.end());
    for(auto r : roll){
        cout << r << " ";
    }
    cout << endl;

    cout << "Sorting descending...\n";
    sort(roll.begin(), roll.end(), greater<int>()); // type is not compulsory
    for(auto r : roll){
        cout << r << " ";
    }
    cout << endl;

    //front()
    cout << "First element: " << roll.front() << endl;

    //reverse()
    cout << "Reversing vector...\n";
    reverse(roll.begin(), roll.end());
    for(auto r:roll){cout<<r<<" ";}cout<<endl;


    // min_element and max_element
    cout << "--- Min and Max ---"<<endl;

    if(!roll.empty()) {
    cout << "Min element: " << *min_element(roll.begin(), roll.end()) << endl;
    cout << "Max element: " << *max_element(roll.begin(), roll.end()) << endl;}


    //comparing vectors
    cout << "\n--- Vector Comparison ---\n";
    vector<int> a = {1,2,3};
    vector<int> b = {1,2,4};

    if(a < b)
        cout << "a is smaller than b (lexicographically)\n";
    else
        cout << "a is NOT smaller than b\n";


    //clear() and assign()
    cout << "\n--- Clear and Assign ---\n";
    roll.clear();  // remove all elements
    cout << "After clear, size: " << roll.size() << endl;

    roll.assign(5, 10);  // {10,10,10,10,10}
    cout << "After assign: ";
    for(auto r : roll) cout << r << " ";
    cout << endl;

    //empty()
    cout << "\n--- Empty Check ---\n";
    if(roll.empty()) {
        cout << "Vector is empty\n";
    } else {
        cout << "Vector is NOT empty\n";
    }

    //swap()
    cout << "\n--- Swap ---\n";
    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};

    v1.swap(v2);

    cout << "v1 after swap: ";
    for(auto x : v1) cout << x << " ";
    cout << "\nv2 after swap: ";
    for(auto x : v2) cout << x << " ";
    cout << endl;

    //iterator basics
    cout << "\n--- Iterator ---\n";
    vector<int> v = {10, 20, 30};

    auto it2 = v.begin();
    cout << "First element: " << *it2 << endl;

    it2++;
    cout << "Second element: " << *it2 << endl;

    //assign variants
    cout << "\n--- Assign Variants ---\n";
    v.assign(5, 10);
    cout << "Assign 5 times 10: ";
    for(auto x : v) cout << x << " ";
    cout << endl;

    vector<int> v3 = {1,2,3};
    v.assign(v3.begin(), v3.end());
    cout << "Assign from another vector: ";
    for(auto x : v) cout << x << " ";
    cout << endl;

    cout<<"\n---unique function---"<<endl;
    sort(v.begin(), v.end());

    auto it3 = unique(v.begin(), v.end());

    v.erase(it3, v.end());

    for(auto x : v) cout << x << " ";
    cout << endl;

    return 0;
}

