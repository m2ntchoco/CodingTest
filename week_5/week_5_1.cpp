#include <iostream>
using namespace std;

int main(){
  char name;
  int sum, product, counter, n = 0;

  cout << "s와 p 둘 중 하나를 입력하시오."<< endl;
  cin >> name;
  cout << "정수를 입력하시오."<<endl;
  cin >> n;
  if (name == 's'){
    cout << "더할 수를 입력하시오.";
    for (cin >> counter; counter > n; n++){
      n++;
      sum += counter;
      cout << sum << endl;
    }

  }
  
  else if (name == 'p'){
    cout << "곱할 수를 입력하시오.";
    for (cin >> counter; counter <0; counter++ ){
    
      product *= counter;
      cout << product;
    }
  }
  cout << "잘못 입력하였습니다.";

  return 0;
}