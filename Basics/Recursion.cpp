#include<bits/stdc++.h>
using namespace std;

// 1. Print Name N-Times
// void printName(int i, int n, string name){
//     if(i>=n) return;
//     cout << name << endl;
//     printName(i+1, n, name);
// }
// 
// int main(){
//     int n;
//     string name;
//     cin >> n >> name;
//     printName(0, n, name);
// }

// 2. Print 1 to N
// void printNums(int i, int n){
//     if(i>n) return;
//     cout << i << endl;
//     printNums(i+1, n);
// }
//
// int main(){
//     int n;
//     cin >> n;
//     printNums(1, n);
// }

// 3. Print N to 1
// void printNumsInRev(int n){
//     if(n==0) return;
//     cout << n << endl;
//     printNumsInRev(n-1);
// }
// 
// int main(){
//     int n;
//     cin >> n;
//     printNumsInRev(n);
// }

// 4. Print 1 to N Using Backtracking
// void printNums(int i, int n){
//     if(n<i) return;
//     printNums(i+1, n);
//     cout << i << endl;
// }
//
// int main(){
//     int n;
//     cin >> n;
//     printNums(1, n);
// }

// 5. Print Sum
// int printSum(int n, int sum){
//     if(n==0) return sum;
//     printSum(n-1, sum+n);
// }
// 
// int main(){
//     int n;
//     cin >> n;
//     cout << printSum(n,0) << endl;
// }

// 6. Print Factorial Number
// int printFact(int n){
//     if(n==0) return 1;
//     return n * printFact(n-1);
// }
// 
// int main(){
//     int n;
//     cin >> n;
//     cout << printFact(n) << endl;
// }

// 7. Print Fibonacci Number
// int printFib(int n){
//     if(n<=1) return n;
//     return printFib(n-1) + printFib(n-2);
// }
// 
// int main(){
//     int n;
//     cin >> n;
//     cout << printFib(n) << endl;
// }

// 8. Reverse An Array
// (Two Pointer Approach)
// void reverseArray(int l, vector<int> &arr, int r){
//     if(l>=r) return;
//     swap(arr[l], arr[r]);
//     reverseArray(l+1, arr, r-1);
// }
// 
// (One Pointer Approach)
// void reverseArray(int i, vector<int> &arr, int n){
//     if(i>=n/2) return;
//     swap(arr[i], arr[n-i-1]);
//     reverseArray(i+1, arr, n);
// }
// 
// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for(int i=0; i<n; i++){
//         int num;
//         cin >> num;
//         arr.push_back(num);
//     }
//     reverseArray(0,arr,n-1); (Two)
// 
//     reverseArray(0,arr,n); (One)
// 
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }