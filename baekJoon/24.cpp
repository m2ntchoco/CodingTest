#include <iostream>
using namespace std;

int main (){
  int a = 0, b = 0, c = 1;

  while(c){
      cin >> a >> b;
      if(a == 0 && b == 0) break;
      cout << a + b << endl;
  }


  return 0;
}