#include <iostream>
#inlcude <week_9.h>

using namespace std;

int main{

  return 0;
}

/* '생성자'와 '소멸자'
  생성자 : 특별한 멤버 함수가 호출될 때 생성. (생성자 내부에서 초기화를 하면 편리)
          - 객체를 생성하는 특별한 멤버 함수, 생성자 내부에서 객체의 데이터 멤버를 초기화
  또한 객체가 더 이상 필요가 없어지는 경우, 객체가 차지하고 있는 메모리를 비워줘야 함.
  소멸자 : 특별한 멤버 함수가 호출되어 소멸자 내부에서 객체를 정리하는 타입.
        소멸자는 앞에 ~(물결표) 표시를 하면 됨 */

/*생성자 정의
  생성자는 특별한 멤버 함수
  생성자는 리턴값을 가질 수 없으며, 이름은 클래스의 이름과 같음*/

  class Circle
  {
    public:
      Circle(double radius); //매개변수가 있는 생성자
      Circle(); // 기본 생성자
      Circle(const Circles circle); // 복사 생성자


  }
  Circle :: Circle (double rds)
  : radius(rds)
  {
    ...
  }

  //소멸자

  class Circle
  {
    ...
    public:
      ...
      ~Cicle(); //소멸자

  }