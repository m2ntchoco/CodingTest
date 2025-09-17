// #include <iostream>

// using namespace std;

// int main(){
//   int a = 0;
//   cin >> a;
//   a = a/4;
//   string b;
//   for(int i = 0; i < a; i++){
//     cout << "long ";
//   }
//   cout << "int";
  
//   return 0;
// }

#include <iostream> 

using namespace std;
int main(){
  ios_base::sync_with_stdio(false); //C와 C++의 입출력 동기화를 해제하여 속도 향상
    cin.tie(NULL);
  int a =0, b = 0, c =0;
  cin >> a;
for (int i = 0; i < a; i++){
    cin >> b >> c;
    cout << b + c << "\n";
}
  return 0;
}