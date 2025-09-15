#include <iostream>

using namespace std;

#include "GraphicEditor.h"

void GraphicEditor::Menu(){
  enum Menu {Insert  = 1, Delete = 2, Allof = 3, Exit = 4};
  cout << "그래픽 에디터 입니다. \n";
  cout << "삽입:1 삭제:2 모두보기:3 종료:4";
  cin >> selection;

  switch (selection){
    case Insert :
      INS(); break;
    case Delete :
      DEL(); break;
    case Allof :
      ALL(); break;
    case Exit :
      EXIT(); break;

  default : cout << "선택 오류\n";
  }
}

void GraphicEditor::INS(){
  cout << "삽입 메뉴 \n";
}

void GraphicEditor::DEL(){
  cout << "삭제 메뉴 \n";
}

void GraphicEditor::ALL(){
  cout << "모두 보기\n";
}

void GraphicEditor::EXIT(){
  cout << "프로그램을 종료합니다.\n";
}

