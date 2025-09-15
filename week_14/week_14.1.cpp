#include <iostream>

using namespace std;
class graphicEditor{

  public:
    int number;
    int selection;

  public:
    Menu();
    Insert();
    Delete();
    ALL();
    Exit();
}
graphicEditor::Menu(){
  cout << "그래픽 에디터 입니다. \n";
  cout << "삽입:1 삭제:2 모두보기:3 종료:4";
  cin >> selection;
  switch (selection){
    case 1 :
      Insert(); break;
    case 2 :
      Delete(); break;
    case 3 :
      ALL(); break;
    case 4 :
      Exit(); break;
    
    default : cout << "선택 오류";
  }
}
graphicEditor::Insert(){
  
}

graphicEditor::Delete(){

}
graphicEditor::ALL(){

}

graphicEditor::Exit(){

}




  return 0;
}