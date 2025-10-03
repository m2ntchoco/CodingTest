#include <iostream>
#include <string>
using namespace std;

int main(){
  int c = 0;
  string A;
  bool inWord = false;

  getline(cin,A); // 공백 포함 전체 줄 입력받기

  for (char ch : A){ // 문자열 'A'의 각 문자 하나하나 'ch'에 담아서 순회하는 범위 기반 for 문.
    if(ch != ' '){
      if(!inWord){
        c++;
        inWord = true;
      }
    } else{
      inWord = false;
    }
  }
  cout << c;


  return 0;
}