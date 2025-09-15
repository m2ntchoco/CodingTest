#include<iostream>

using namespace std;

//변수만 각각 객체가 들어가지

/*class Circle
{
  private
    double radius;
  public 
    class getRadius();
}

Circle::getRadius(double radius)
{
  Radius 멤버변수
  this -> Radius(멤버 변수) = Radius(매개변수); //'->'는 (this -> radius) 포인터 기능 '.'(*this).radius은 포인터 기능이 아님.
  R = radius;
}*/

프로그램 내부에서 this 포인터를 사용해서 데이터 멤버를 명시적으로 가리킬 수도 있음
this 포인터를 사용하면 데이터 멤버와 매개변수를 같은 이름으로 사용할 수 있음.

객체를 생성하는 인스턴스 데이터 멤버 함수(매개변수가 있는 생성자) 또는 (데이터 멤버의 값을 변경하는 설정자 멤버 함수를 사용해서 클래스의 불변 속성)을 적용.
모든 함수에 가동코드가 필요함.

(클래스 선언)
class Circle
{
(멤버 변수, 함수)
private
  double Radius; (멤버 변수로 선언)
public
  double getRadius() const // 상수 선언.
  void setRadius(double Radius)
(생성자, 소멸자)
public
  Circle()
  ~Circle() (소멸자)
  Circle(double Radius) 

  Circle C;
    C.setRadius(5.5)
}

Circle::Circle() //생성자
{

}

Circle::Circle(double radius)
{

}

double Circle:: getRadius() 
{

}

void Circle::setRadius(double Radius) (리턴값 없음)
{

}
정적 데이터 멤버
static double Radius; //정적 변수

static double getRadius() const; //정적 함수

정적 데이터 멤버 선언
클래스 정의에서 선언해야 하고 'static' 이라는 키워드를 붙여야함.

인스턴스에 속하지 않으므로 생성자에서 초기화 할 수 없음.

값을 초기화 할 때는 클래스 이름과 클래스 스코프 연산자 '::' 를 추가해서 클래스에 속한다는 것을 나타내야 하며 다만 'static' 한정자를 추가하면 안됨.

int Rectangle::count = 0; // initialization of static data member

private :
  static int count; //Static data member

public :
  static int getCount(); // Static member function

정의할 때는 정적 멤버 함수와 (인스턴스 멤버 함수의 차이가 없음). // LOCK 건다.

int Rectangle::getCount()
{

}
정적 멤버 함수는 인스턴스 또는 클래스를 통해서 호출 할 수 있음.
정적 멤버 함수에는 호스트 객체가 없으며 따라서 정적 멤버 함수 내부에서 인스턴스 데이터 멤버에 접근 할 수 없음.
