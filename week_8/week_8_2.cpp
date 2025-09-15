#include <iostream>
using namespace std;

class Rectangle
{
  private:
    int width;
    int height;
  public:
    void rectWidth(int value) ;
    void rectHeight(int value);
    int rectGetArea() const;
    
};

void Rectangle::rectWidth(int value) 
{
  width = value;
}

void Rectangle::rectHeight(int value)
{
  height = value;
}

int Rectangle::rectGetArea() const
{
 
  return width * height;
}

int main(){
  Rectangle rect;

  rect.rectHeight(3);
  rect.rectWidth(5);

  cout << "면적: " << rect.rectGetArea() << endl;
  
  return 0;
}