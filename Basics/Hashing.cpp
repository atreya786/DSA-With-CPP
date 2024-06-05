#include<bits/stdc++.h>
using namespace std;

// Hashing Of Numbers Using Arrays
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     int hashh[10] = {0};
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//         hashh[arr[i]]++;
//     }
//
//     int q;
//     while(q--){
//         int num;
//         cin >> num;
//         cout << num << ":" << hashh[num] << endl;
//     }
// }

// Hashing Of Characters Using Arrays
// int main(){
//     string str;
//     cin >> str;
//     int hashh[256] = {0};
//     for(int i=0; i<256; i++){
//         hashh[str[i]]++;
//     }
//
//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         cout << c << ":" << hashh[c] << endl;
//     }
// }

// For Bigger Numbers Using Map & Unordered_Map
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     unordered_map<int, int> mpp;
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//         mpp[arr[i]]++;
//     }
//
//     int q;
//     cin >> q;
//     while(q--){
//         int num;
//         cin >> num;
//         cout << num << ":" << mpp[num] << endl;
//     }
// }

// Character Hashing Using Map & Unordered_Map
// int main(){
//     string str;
//     cin >> str;
//     unordered_map<char, int> mpp;
//     for(int i=0; i<str.length(); i++){
//         mpp[str[i]]++;
//     }
// 
//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         cout << c << ":" << mpp[c] << endl;
//     }
// }