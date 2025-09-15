// #include <iostream>

// using namespace std;

// int main(){
//   int a = 0;

//   cin >> a;

//   for (int i = 1; i < 10; i++ ){
//     cout << a << " * " << i << " = " << a * i << endl;
//   }

//   return 0;
// }


// //두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.

// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
#include <iostream>
using namespace std;

int main(){
  int a = 0, b = 0, c = 0, d = 0;
  cin >> a;
  cin >> b;

  for (int i = 0; i < b; i++){
    cin >> c >> d;
    a -= (c * d);
  }
  if (a == 0) cout << "Yes";
  else cout << "No";

  return 0;
}



// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.

// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)