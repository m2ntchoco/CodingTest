// #include <iostream>
// using namespace std;

// int main(){
//   int n, v, c =0;
//   cin >> n;
//   cin >> v;
//   cin.ignore();
//   int arr[100];
//   int arr2[100];
  
//   for (int i = 0; i < n; i++){
//     cin >> arr[i];
//   }
//   for (int i = 0; i< n; i++){
//     if (arr[i] < 5){
//       arr2[c] = arr[i];
//       c++;
//     }
//   }
  
//   for (int i = 0; i < c; i++){
//     cout << arr2[i] << " ";
//   }

//   return 0;
// }

#include <iostream>
using namespace std;

int main(){
  int n, v;
  cin >> n >> v;
  vector<int> arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++){
    if (arr[i] < v){
      cout << arr[i] << " ";
    }
  }
  return 0;
}
//vector 사용 시 #include <vector>를 추가해야 한다.
// vector를 사용하면 동적 배열을 사용할 수 있다.
// vector는 string, char과 다르게 한꺼번에 문장을 받을 수 없다. 그러므로 반복문으로 입력값을 받는다.
//vector는 자료형을 자유롭게 사용할 수 있다. vector<int>, vector<char>, vector<string> 등등