#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H

class GraphicEditor {
private:
    int number;
    int selection;

    void INS();
    void DEL();
    void ALL();
    void EXIT();

public:
    void Menu();
    void Menu2();  // 아직 구현 안 되어 있음
};

#endif
