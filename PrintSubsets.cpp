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
