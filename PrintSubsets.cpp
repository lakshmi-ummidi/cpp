//https://leetcode.com/problems/subsets/
#include<bits/stdc++.h>
using namespace std;
void PrintSubsets(int ind, int arr[], int n, vector<int> &ds){
    if(ind == n){
        for(int it: ds) cout<<it<<" ";
        cout<<"\n";
        return;}
    ds.push_back(arr[ind]);
    PrintSubsets(ind+1, arr, n, ds);
    ds.pop_back();
    PrintSubsets(ind+1, arr, n, ds);}
  
int main(){
    int n = 3;
    int arr[n] = {1, 2, 3};
    vector<int> ds;
    PrintSubsets(0, arr, n, ds);
    
}



//https://leetcode.com/problems/combination-sum/
#include<bits/stdc++.h>
using namespace std;
void PrintSubsets(int ind, int n, int arr[], vector<int> &ds, int t){
    if(ind == n){
        if(t==0){
            for(int i = 0; i< ds.size(); i++) cout<<ds[i]<<" ";
            cout<<"\n";
        }
    return;
  }
    if(t>= arr[ind]){
        ds.push_back(arr[ind]);
        PrintSubsets(ind, n, arr, ds, t-arr[ind]);
        ds.pop_back();}
    PrintSubsets(ind+1, n, arr, ds, t);}
    
int main(){
    int n = 4;
    int arr[n] = {2, 3, 6, 7};
    vector<int> ds;
    int t = 7;
    PrintSubsets(0, n, arr, ds, t);
    
}

//mainans.erase(unique(mainans.begin(), mainans.end()), mainans.end());
