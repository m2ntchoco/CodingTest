// #include <iostream>

// using namespace std;

// int main(){
//   int a = 0, b = 0 , c = 0;

//   cin >> a >> b;
//   cin >> c;
//   b += c;
//   while ( b >= 60){
//     b -= 60;
//     a += 1;
//   }
//   if ( a > 23){
//     a -= 24;
//   }

//   cout << a << " "<< b;
//   return 0;
// }

#include <iostream>

using namespace std; // 세 가지 기준. a | b | c

int main(){
  int a = 0 ,b = 0, c = 0, d = 0;

  cin >> a >> b >> c;

  if(a == b && b == c && a == c){
    d = 10000 + (1000 * a);
  }
  if (a == b && b != c && a != c){
    d = 1000 +(100 * a);
  }
  if (a != b && b == c && a != c){
    d = 1000 + (100 * b);
  }
  if (a == c && c != b && a != b){
    d = 1000 + (100 * a);
  }
  if (b == c && a != b && a != c){
    d = 1000 + (100 * b);
  }
  if (a != b && b != c && a != c){
    if (((a > b && b > c) || (a > b && b < c))) {
      d = 100 * a;
    }

    if (((b > a && a > c) || (b > a && a < c))) {
      d = 100 * b;
    }

    if (((c > a && a > c) || (c > a && a < c))) {
      d = 100 * c;
    }
  }
  cout << d;
  return 0;
}