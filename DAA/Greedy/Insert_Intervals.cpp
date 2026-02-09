#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<pair<int,int>> arr(n);
    cout << "Enter intervals (start end):\n";
    for(int i=0; i<n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    int si, ei;
    cout << "Enter interval to insert: ";
    cin >> si >> ei;

    vector<pair<int,int>> result;
    int i = 0;

    // STEP 1: Add all intervals completely before the new interval
    while(i < n && arr[i].second < si){
        result.push_back(arr[i]);
        i++;
    }

    // STEP 2: Merge overlapping intervals
    // Overlap condition: arr[i].start <= ei
    while(i < n && arr[i].first <= ei){
        si = min(si, arr[i].first);   // Expand left boundary
        ei = max(ei, arr[i].second);  // Expand right boundary
        i++;
    }
    result.push_back({si, ei});   // push merged block

    // STEP 3: Add remaining intervals
    while(i < n){
        result.push_back(arr[i])_
