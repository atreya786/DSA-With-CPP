#include <bits/stdc++.h>
using namespace std;

// 1. Count The Digits
// int main(){
//     int n;
//     cin >> n;
    // int count = 0;
    // while(n>0){
    //     int lastDigit = n%10;
    //     count = count + 1;
    //     n = n/10;
    // }
    // 
    // int count = (int)((log10(n))+1);
    // cout << count << endl;
// }

// 2. Reverse The Number
// int main(){
//     int n;
//     cin >> n;
//     int reversedNum = 0;
//     while(n>0){
//         int lastDigit = n%10;
//         reversedNum = reversedNum * 10 + lastDigit;
//         n = n/10;
//     }
//     cout << reversedNum << endl;
// }

// 3. Check Palindrome
// int main(){
//     int n;
//     cin >> n;
//     int dup = n;
//     int reversedNum = 0;
//     while(dup>0){
//         int lastDigit = dup%10;
//         reversedNum = reversedNum * 10 + lastDigit;
//         dup = dup/10;
//     }
//     n == reversedNum ? cout << "Palindrome" << endl : cout << "Not Palindrome" << endl;
// }

// 4. Armstrong Number
// int main(){
//     int n;
//     cin >> n;
//     int dup = n;
//     int sum = 0;
//     while(dup>0){
//         int lastDigit = dup%10;
//         sum = sum + (lastDigit * lastDigit * lastDigit);
//         dup = dup/10;
//     }
//     n == sum ? cout << "Armstrong" << endl : cout << "Not Armstrong" << endl;
// }

// 5. Print All Divisors
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1; i<=sqrt(n); i++){
//         if(n%i==0){
//             cout << i << " ";
//             if((n/i)!=i){
//                 cout << (n/i) << " ";
//             }
//         }
//     }
// }

// 6. Prime Numbers
// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
//     for(int i=1; i<=sqrt(n); i++){
//         if(n%i==0){
//             count++;
//             if((n/i)!=i){
//                 count++;
//             }
//         }
//     }
//     count == 2 ? cout << "Prime" << endl : cout << "Not Prime" << endl;
// }

// 7. HCF / GCD
// int main(){
//     int a,b;
//     cin >> a >> b;
    // int gcd = 0;
    // for(int i=1; i<=(min(a,b)); i++){
    //     if(a%i==0 && b%i==0){
    //         gcd = i;
    //     }
    // }
    // cout << gcd << endl;
    // 
//     while(a>0 && b>0){
//         if(a>b) a = a%b;
//         else b = b%a;
//     }
//     a == 0 ? cout << b << endl : cout << a << endl;
// }