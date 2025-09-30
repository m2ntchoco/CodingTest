// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;

// int main (){
//   int M = 0;
//   float sum = 0, first = 0, second = 0;

//   cin >> M;
//   vector<float> a(M);

//   for ( int i = 0; i < M ; i ++){
//     cin >> a[i];
//   }
  
//   for (int i = 0 ; i < M; i++){
//     if(a[i] > first){
//       second = first;
//       first = a[i];
//     }
//     else if (a[i] > second && a[i] < first){
//       second = a[i];
//     }
//   }
//   sum = second/first * 100;
//   cout << setprecision(6) << sum;
  
//   return 0;
// }

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main (){
  int M = 0;
  float sum = 0, first = 0, second = 0;

  cin >> M;
  vector<float> a(M);

  for ( int i = 0; i < M ; i ++){
    cin >> a[i];
  }
  
  for (int i = 0 ; i < M; i++){
    if(a[i] > first){
      second = first;
      first = a[i];
    }
    else if (a[i] > second && a[i] < first){
      second = a[i];
    }
  }
  sum = second/first * 100;
  cout << setprecision(6) << sum;
  
  return 0;
}