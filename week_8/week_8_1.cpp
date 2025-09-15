#include <iostream>
// 속성은 인스턴스가 가지는 특징을 의미, 컴퓨터 과학에서의 속성이란 우리가 관심 있어 하는 특성
// 행위 : 인스턴스는 어떤 행위를 가짐, 행위란 어떤 인스턴스가 스스로 할 수 있는 작업 또는 연산을 의미
//Class라는 구문을 사용하여 타입을 생성.
/* 객체는 인스턴스. 
  데이터 멤버 : 객체의 데이터 멤버는 속성을 표현하기 위한 변수를 의미
  멤버 함수*/

/*새로운 타입을 만들려면 클래스 정의를 작성
  클래스 정의는 헤더, 본문, 세미콜론
  헤더는 class라는 키워드 뒤에 클래스 이름을 붙여서 생성.
  클래스 본문은 데이터 멤버와 멤버 함수의 선언을 가진 블록 부분
  마지막으로 세미콜론은 클래스 정의를 종료하겠다고 나타내는 부분*/
// 예제 1
using namespace std;

class Circle
{
  private: //접근 권한을 나타낼 때 사용. (클래스에서 데이터 멤버와 멤버 함수를 선언하면 기본적으로 private접근 제한자가 붙음.)
           //접근   제한자가 붙으면 해당 요소로부터 값을 추출할 수도 없고 값을 변경할 수도 없음.
    double radius;
    int number;

  public: //접근자.
    double getRadius() const; //const : 값을 변경할 수 없음.
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value); //얘는 부를 수 있음.
                                          // 접근 범위 (private < protected < public)
}; // 끝에 세미콜론을 붙여야함.

double Circle::getRadius() const // 멤버 함수 이름 앞에 클래스 이름과 클래스 스코프 기호(::)를 성처럼 붙여야함.
  {
    return radius;
  }

double Circle::getArea() const
  {
    const double PI = 3.141592;
    return (PI * radius * radius);
  }

double Circle::getPerimeter() const
  {
    const double PI = 3.141592;
    return (PI * 2 * radius);
  }

void Circle::setRadius(double value)
  {
    radius = value;
  }