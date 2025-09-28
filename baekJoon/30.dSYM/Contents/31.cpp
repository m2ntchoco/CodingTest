#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  vector<int> person(31);
  vector<int> check(31, 0);
  for (int i = 1; i <= 28; i++){
    cin >> person[i];
    check[n] = person[i];
  }

  for (int i = 1; i <= 30; i++){
    if (check[i+1] == 0){
      cout << i << '\n';
    }
  }


  return 0;
}