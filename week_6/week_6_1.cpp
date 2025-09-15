#include <iostream>
using namespace std;

// do while 일단 do 문을 실행한 뒤 while 문 반복.
  /**do {
    일단 실행 이건.
  }
    while(조건);

  int main()
  {
    int num;
    short leftDigit;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    do
    {
      leftDigit = num % 10;
      num = num/=10;
    } while (num>0);
      
  cout <<" The left most digit is " << leftDigit << endl;
  return 0;
    
  }**/



// 반복문과 관련된 구문
//return ,break, continue, goto 조건문 등 다양한 상황에 자주 사용.

//return = 반환하다. 현재 함수를 종료하고 함수를 호출한 쪽으로 제어를 리턴. return 구문을 사용하면 반복문이 종료되며 동시에 반복문이 소속된 함수도 종료.
//goto 레이블. 사용하지 마셈 ㅇㅇ

/**int main(){
  int x =10;
  
  while (x<20){
    cout << x << endl;
    x++;
  }
  return 0;
}**/

/**int main(){
  int x = 10;
  
  for (x =10; x < 20 ; x++){
    cout << x << endl;
  }
}**/
// 5, 7의 공배수를 구하는 것.
int main(){

  for (int x = 0 ; x <=100; x++){
    if ((x % 5)==0 && (x % 7)==0)
      cout << x << endl;
  }
}