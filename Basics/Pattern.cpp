#include <bits/stdc++.h>
using namespace std;

// 1. Pattern 1
// int main() {
//     int n;
//     cout << "Enter a num" << endl;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout <<  "*" << " ";
//         }
//         cout << endl;
//     }
// }

// 2. Pattern 2
// int main() {
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout <<  "*" << " ";
//         }
//         cout << endl;
//     }
// }

// 3. Pattern 3
// int main(){
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// 4. Pattern 4
// int main() {
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// 5. Pattern 5
// int main() {
//     int n;
//     cin >> n;
//     for(int i=n; i>0; i--){
//         for(int j=0; j<i; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// 6. Pattern 6
// int main() {
//     int n;
//     cin >> n;
//     for(int i=n; i>0; i--){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// 7. Pattern 7
// int main() {
//     int n;
//     cin >> n;
    // for(int i=0; i<n; i++){
        // for(int j=0; j<n-i-1; j++){
        //     cout << " " << " ";
        // }
        // for(int j=0; j<2*i-1; j++){
        //     cout << "*" << " ";
        // }
        // for(int j=0; j<n-i-1; j++){
        //     cout << " " << " ";
        // }
// Another approach
//         int a = 1;
//         for(int i=n-1; i>=0; i--){
//             for(int j=i; j>=0; j--){
//                 cout << " " << " ";
//             }
//             for(int j=0; j<a; j++){
//                 cout << "*" << " ";
//             }
//             a+=2;
//         cout << endl;
//     }
// }

// 8. Pattern 8
// int main(){
//     int n;
//     cin >> n;
//     int a = n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << " " << " ";
//         }
//         for(int j=0; j<2*a-1; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//         a-=1;
//     }
// }

// 9. Pattern 9
// int main(){
//     int n;
//     cin >> n;
//     int a = 1;
//         for(int i=n-1; i>=0; i--){
//             for(int j=i; j>=0; j--){
//                 cout << " " << " ";
//             }
//             for(int j=0; j<a; j++){
//                 cout << "*" << " ";
//             }
//             a+=2;
//             cout << endl;
//     }
//     int b = n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << " " << " ";
//         }
//         for(int j=0; j<2*b-1; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//         b-=1;
//     }
// }

// 10. Pattern 10
// int main(){
//     int n;
//     cin >> n;
//     int a = n-1;
//     for(int i=1; i<2*n; i++){
//         if(i>n){
//         for(int j=a; j>0; j--){
//             cout << "*" << " ";
//             }
//         a-=1;
//         }
//         else{
//             for(int j=0; j<i; j++){
//             cout << "*" << " ";
//         }
//         }
//         cout << endl;
//     }
// }

// 11. Pattern 11
// int main(){
//     int n;
//     cin >> n;
//     int start = 1;
//     for(int i=1; i<=n; i++){
//             if(i%2 == 0){
//                 start = 0;
//             } else start = 1;
//         for(int j=0; j<i; j++){
//             cout << start << " ";
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }

// 12. Pattern 12
// int main(){
//     int n;
//     cin >> n;
//     int a = n;
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<i; j++){
//             cout << j+1 << " ";
//         }
//         for(int j=0; j<2*a-2; j++){
//             cout << " " << " ";
//         }
//         a -= 1;
//         for(int j=i; j>0; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// 13. Pattern 13
// int main(){
//     int n;
//     cin >> n;
//     int a = 0;
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<i; j++){
//             a += 1;
//             cout << a << " ";
//         }
//         cout << endl;
//     }
// }

// 14. Pattern 14
// int main(){
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(char ch = 'A'; ch <= 'A' + i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// 15. Pattern 15
// int main(){
//     int n;
//     cin >> n;
//     int a = n;
//     for(int i=0; i<n; i++){
//         for(char ch = 'A'; ch < 'A' + a; ch++){
//             cout << ch << " ";
//         }
//         a -= 1;
//     cout << endl;
//     }
// }

// 16. Pattern 16
// int main(){
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j = 0; j<i; j++){
//             cout << ch << " ";
//         }
//         ch = 'A' + i;
//         cout << endl;
//     }
// }

// 17. Pattern 17
// int main(){
//     int n;
//     cin >> n;
//     int a = n-1;
//     for(int i=0; i<n; i++){
//         int b = (2*i+1) / 2;
//         for(int j=0; j<a; j++){
//             cout << " " << " ";
//         }
//         a -= 1;
//         char ch='A';
//         for(int j=1; j<=2*i+1; j++){
//             cout << ch << " ";
//             if(j<=b) ch++;
//             else ch--;
//         }
//         cout << endl;
//     }
// }

// 18. Pattern 18
// int main(){
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(char ch = ('A' + n-1) - i; ch <= ('A' + n-1); ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// 19. Pattern 19
// int main(){
//     int n;
//     cin >> n;
//     int a = n;
//     int spaces = 0;
//     for(int i=1; i<=2*n; i++){
//         for(int j=0; j<a; j++){
//             cout << "*" << " ";
//         }
//         for(int j=0; j<spaces; j++){
//             cout << " " << " ";
//         }        
//         for(int j=a; j>0; j--){
//             cout << "*" << " ";
//         }
//         if(i<n){
//             spaces += 2;
//             a -= 1;
//         }
//         else if(i==n){
//             spaces = spaces;
//             a = a;
//         }
//         else{
//             spaces -= 2;
//             a += 1;
//         }
//         cout << endl;
//     }
// }

// 20. Pattern 20
// int main(){
//     int n;
//     cin >> n;
//     int spaces = 2*n;
//     int a = 0;
//     for(int i=1; i<=2*n-1; i++){
//         if(i>n){
//             spaces += 2;
//             a -= 1;
//         } else{
//             spaces -= 2;
//             a += 1;
//         }
//         for(int j = 0; j<a; j++){
//             cout << "*" << " ";
//         }
//         for(int j = 0; j<spaces; j++){
//             cout << " " << " ";
//         }
//         for(int j=a; j>0; j--){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// 21. Pattern 21
// int main(){
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         if(i==0 || i==n-1){
//             for(int j=0; j<n; j++){
//                 cout << "*" << " ";
//             }
//         }
//         else{
//             cout << "*" << " ";
//             for(int j=0; j<n-2; j++){
//                 cout << " " << " ";
//             }
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// 22. Pattern 22
// int main(){
//     int n;
//     cin >> n;
//     for(int i=0; i<2*n-1; i++){
//         for(int j=0; j<2*n-1; j++){
//             int top = i;
//             int bottom = (2*n-2) - i;
//             int left = j;
//             int right = (2*n-2) - j;
//             cout << (n - min(min(top, bottom), min(left, right))) << " ";
//         }
//         cout << endl;
//     }
// }