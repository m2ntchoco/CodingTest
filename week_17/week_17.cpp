#include <iostream>
// 파생 클래스에서 함수를 재정의 하는 사례

// 함수 재정의
  // 부모 자식 함수를 둘다 인정
//가상함수
  // virtual 키워드로 선언된 멤버 함수
    // 동적 바인딩 지시어, 컴파일러에게 함수에 대한 호출 바인딩을 실행 시간까지 미루도록 지시.
//오버라이딩
  // 파생 클래스에서 기본 클래스의 가상 함수와 동일한 이름의 함수 선언
  // virtual의 가상 함수는 존재감을 잃고 자식의 함수가 호출됨.

using namespace std;

/*class Shape {
  public:
  void paint() {
    draw();
  }
  virtual void draw(){
    cout << "Shape:draw() called" << endl;
  }
};

class Circle : public Shape {
  public:
  virtual void draw() {
    cout << "Circle : draw() called" << endl;
  }
};

int main() {
  Shape *pShape = new Circle(); // 업 캐스팅
  pShape -> paint();
  delete pShape;
}*/

// 소멸자를 가상 함수로 선언
class Base {
  public:
    virtual ~Base() {cout << "~Base()" << endl;}
};

class Derived: public Base{
public:
  virtual ~Derived() {cout << "~Derived()" << endl;}

};

int main() {
  Derived *dp = new Derived();
  Base *bp = new Derived();

  delete dp;
  delete bp;
}