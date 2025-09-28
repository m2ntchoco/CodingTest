// #include <iostream> -> 오답
// using namespace std;

// int main(){
//   int n = 0 , m = 0, c = 0;
//   cin >> n;
//   cin.ignore(); // 개행 문자 무시
//   string a;
  

//   getline(cin, a);
//   cin >> m;
//   for (int i = 0; i < a.length(); i++){
//     if (a[i] - '0' == m) {
//       c++;
//     }
//   }
//   cout << c;
// }
// string으로 입력을 받고 "1 3 5 7 9"이런 형식으로 받는 다면 a.length()는 1이 되고 1만 받게 된다.
// 따라서 공백을 포함한 길이를 구하려면 getline(cin, a);를 사용해야 한다.
// 그리고 a[i] - '0' == n;을 통해 char형을 int형으로 바꿔서 비교해야 한다.
// char형은 아스키코드로 저장되기 때문에 '0'을 빼줘야 한다.
// 예를 들어 '1'은 아스키코드로 49이고 '0'은 48이기 때문에 '1' - '0' = 49 - 48 = 1이 된다.

#include <iostream>
using namespace std;

int main() {
    int n, v;
    cin >> n;        // 정수 개수
    int arr[100];    // n <= 100 이므로 배열 선언

    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // 정수 하나씩 입력
    }

    cin >> v;        // 찾고 싶은 정수
    int c = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            c++;
        }
    }

    cout << c;
}
