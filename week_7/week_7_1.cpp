#include <iostream>
#include <string>

using namespace std;
  //사용자로부터 패턴의 종류 1~4와 크기(1~9)를 입력받고 다음과 같은 패턴을 출력하는 프로그램을 만드세요.
/*
int main(){
  int size = 0, pattern = 0 ,a_1 = 1 ,a_2 = 0;

  cout << "패턴을 입력하세요. :";
  cin >> pattern;
  cout << "크기를 입력하시오. :";
  cin >> size;
  
  a_2 = size;

  switch(pattern){
    
    case 1 : for(int i = 1; i <= size; i++){
              for(int j =1 ; j <= a_1; j++){
                cout << '*';
              }
              a_1++;
              cout << endl;
            }
      break;
    case 2 : for(int i = 1; i <= size; i++){
              for(int j = 1 ; j <= a_1; j++){
                cout << ' ';
               }
                a_1++;
              for(int j = 1 ; j <= a_2; j++){
                cout << '*';
              }
                a_2--;
              cout << endl;
            }
    break;
    case 3 : for(int i = 1; i <= size; i++){
                for(int j =1 ; j <= a_1; j++){
                cout << ' ';
                }
              a_1++;
              for(int j = 1 ; j <= a_2; j++){
                cout << '*';
                }
              a_2--;
              cout << endl;
            }
    break;
    case 4 : for(int i = 1; i <= size; i++){
              for(int j = 1 ; j <= a_2; j++){
                cout << ' ';
               }
              a_2++;
                for(int j = 1 ; j <= a_1; j++){
                cout << '*';
               }
              a_1++;
              cout << endl;
              }
    break;

    default : cout << "잘못 입력하셨습니다.";
  }

}*/

/*int main(){
  
  int count_a = 0,aver = 0, a = 1;;
  
  while (true) {
    
    cout << "숫자를 입력하시오. : ";
    cin >> count_a;
    if (count_a == 1000) break;
    aver += count_a;
    
    aver /= a;
    a ++;
    cout << aver <<endl;

    

  }
  
  return 0;
}*/

// 0을 센티넬로 사용해서 사용자로부터 양의 정수와 음의 정수 리스트를 읽어들이는 프로그램을 만드세요. 양의 정수가 몇개 입력되었는지, 음의 정수가 몇개인지
/*int main(){
  int input = 0, pos = 0, neg = 0;

  while (true) {
    cout << "정수를 입력하시오. : ";
    cin >> input;
  

    if (input < 0)
      neg += 1;
    else if (input > 0)
      pos += 1;

    if (input == 0){
    cout << "양수의 개수 :" << pos << endl << "음수의 개수 :" <<neg <<endl;
    break;}
    

  }
  
}*/

// 사용자에게 두 양의 정수를 입력받고 두 정수를 범위로 내부에 있는 홀수와 짝수를 출력하는 프로그램을 만드세요.
/*int main(){
  int input_a = 0, input_b = 0, a = 0, b = 0 ;
  cout << "두개의 정수를 입력하세요. :" << endl;
  cin >> input_a >> input_b;

  if (input_a > input_b){
    for (int i = input_b; i <=input_a ; i++)
      if (i % 2 == 1)
        a ++;
      else b++;
  }
  else {
    for (int i = input_a ; i <=input_b ; i++)
      if (i % 2 == 1)
        a ++;
      else b++;
  }

  cout << "홀수는 총" << b <<"개\n" << "짝수는 총" <<a << "개";

  return 0;
}*/

//1~100의 범위에 있는 정수 중에서 7로 나눌 수 있는 숫자들을 출력하시오.
/*int main(){
  int j= 0;

  for (int i = 0; i <=100; i++){
      j = i / 7;
      if (i % 7 == 0)
      cout << i <<endl;
  }
  return 0;
}*/

// 1~100 의 범위에 있는 정수 중에서 5와 7로 동시에 나눌 수 있는 숫자들을 출력하세요.

/*int main() {
    for (int i = 1; i <= 100; i++)
        if (i % 35 == 0)
            cout << i << endl;
    return 0;
}*/

#include <cmath>
#include <ctime>
#include <cstdlib>


/*int main(){
  int input_ = 0, i = 0, sum = 0;
  
  // 랜덤 숫자 생성기의 동작을 확인해볼 수 있게 10~ 99 사이의 숫자 10개로 5개 세트를 만들고, 각 세트의 합을 구하는 프로그램을 만드세용

srand(time(0));
  for (int i = 0 ; i < 5 ; i++)
  {
    sum = 0;
    cout << "10에서 99 사이의 숫자를 무작위로 돌립니다.... ";
    for(int i = 0 ; i < 10; i++)
    {
      
      input_ = rand() %(99-10+1) +10; // 난수 설정
      
      cout << input_<< " "; // 난수 값 표시.
      
      sum += input_; // sum에 난수값을 계산
      
      }
      cout << endl << sum <<endl;
    
  }

}*/



