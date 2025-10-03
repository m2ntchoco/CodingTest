#include <iostream>
#include <string>

using namespace std;

int main(){
  int n, R, c = 0;
  string S;
  string P; 
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> R >> S;
    for(int c = 0; c < S.length(); c++){
      for (int j = 0; j < R; j++){
        P += S[c]; //P에 삽입 할 시 += 혹은 push_back()을 사용할 것
      }
    }
    cout << P << endl;
    P = "";
  }

  return 0;
}