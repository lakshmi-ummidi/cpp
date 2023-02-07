#include<iostream>
using namespace std;
void PrintSubsets(int ind, int arr[], int n, vector<int>&ds){
  if(ind == n){
    for(int it: ds) cout<<it<<" ";
    cout<<"\n";
    return;}
  ds.push_back();
  
int main(){
  int n = 3;
  int arr[n] = [1, 2, 3];
  PrintSubsets(0, arr, n, {});}
