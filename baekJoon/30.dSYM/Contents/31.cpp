#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  vector<int> person(31, 0);
  for (int i = 1; i <= 28; i++){
    cin >> num;
    person[num] = 1;
  }

  for (int i = 1; i <= 30; i++){
    if (person[i] == 0){
      cout << i << '\n';
    }
  }


  return 0;
}
// 확인한 값은 1로 바꿔주면 끝임 ㅇㅇ
//