#include <iostream>

using namespace std;

int main(void){
  // 자료형 변수에 크기를 알아보자
 /* cout << "unsigned short : \t" << sizeof(unsigned short)<< endl;
  cout << "short : \t\t" << sizeof(short)<<endl;

  cout << "unsigned int : \t\t" << sizeof(unsigned int)<<endl;
  cout << "int : \t\t\t" << sizeof(int)<<endl;

  cout << "unsigned long int : \t" << sizeof (unsigned long int)<<endl;
  cout << "long int : \t\t" << sizeof(long int)<<endl;

  cout << "char : \t\t\t" << sizeof(char)<<endl;
  cout << "bool : \t\t\t" << sizeof(bool)<<endl;

  cout << "float : \t\t" << sizeof(float)<<endl;
  cout << "double : \t\t" << sizeof(double)<<endl;
  cout << "long double : \t\t" << sizeof(long double)<<endl;*/

  // 표현식 (어떻게 화면에 표시할건지.)
  // 리터럴 : 값을 나타내지만 부가 자굥이 없는 표현식. (short 리터럴은 없우)
  
  /* double x =23.56;
  int y = 30;

  cout << "Without casting : " << x+y <<endl;
  cout << "With casting : " << static_cast <int> (x) + y;
*/

 /* 10진수에서 8진수로 변환
 int x =1237;

  cout << "x in decimal :\t"<<x<<endl;
  cout << "x in octal :\t" << oct << x <<endl;
*/

  //setprecision(n) -> 괄호안의 정수로 소수점 뒤 몇자리까지 출력할 지를 지정함.
  
  //시간을 입력 받는 코드



  int hour ;
  int minute ;
  int second ;
  int sum = 0;
  sum = 3600 * hour + 60 * minute + second;

  cout << "시를 입력하시오. :";
  cin >> hour;

  cout << "분을 입력하시오. :";
  cin >> minute;

  cout << "초를 입력하시오. :";
  cin >> second;

  cout << hour << "시" << minute << "분" << second << "초\n";

  sum = 3600 * hour + 60 * minute + second;
  cout << "초로 계산하면 "<< sum<< "초 입니다.";
  

  
  
  
  return 0;
  
  
}

