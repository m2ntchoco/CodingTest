#include <iostream>

using namespace std;

int main(void){

//학생 점수를 3개 입력 받고, 최소값과 최대값을 기반으로 평균을 구해서 학생의 성적을 찾는 프로그램을 작성하시오.

int num1, num2, num3, aver,max, min;



cout << "점수 세 개를 입력하세요";
cin >> num1 >> num2 >> num3;
cout << "입력 받은 점수 " << num1 << " " << num2 <<" "  << num3 ;

aver = (num1 + num2 +num3) / 3;
if (num1 > num2 && num1 > num3){
  max = num1;
}
  else if (num2 > num1 && num2 > num3){
    max = num2;
  }
    else if (num3 > num1 && num3 > num2){
      max = num3;
    }

if (num1 < num2 && num1 < num3){
   min = num1;
} else if (num2 < num1 && num2 <  num3){
  min = num2;
}
  else if (num3 < num1 && num3 < num2){
    min = num3;
  }

cout << "최대값 :" << max << "최소값 :" <<min;
cout << "평균 : " << aver;


return 0;
}