#include <iostream>

using namespace std;

class triangle
{
  private :
    double width;
    double height;
  
  public :
    void rectWidth(double value);
    void rectHeight(double value);
    int rectArea();

};

void triangle::rectWidth(double value)
  {
    width = value;
  }

void triangle::rectHeight(double value)
  {
    height = value;
  }

int triangle::rectArea()
  {
    return width * height / 2;
  }

int main (){
  triangle tri;

  tri.rectWidth(4);

  tri.rectHeight(4);

  cout << "삼각형의 넓이는" <<tri.rectArea();

}