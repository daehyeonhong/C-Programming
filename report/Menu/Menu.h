//
// Created by hongdae on 2021-11-11.
//

#ifndef MENU_MENU_H
#define MENU_MENU_H

#include<iostream>
#include<list>
#include<vector>

using namespace std;

class Menu {
    enum {
        size = 10
    };
    string menuName;
    vector<string> selectionVector;
public:
    Menu() : menuName() {}

    ~Menu() {
        menuName.erase();
        clearSelectionVector();
    };

    void insertMenu();

    void printMenu();

    bool isMenuEmpty();

    void insertSelection();

    void chooseSelection();

    void printSelectionVector();

    void clearSelectionVector();

    bool isSelectionVectorEmpty();

    bool isSelectionVectorFull();

    void printException() const { cout << "�޴� ��ü�� -1�� ��ȯ�Ͽ���, �׸� ������ �ùٸ� ���� ���� �ƴ��� �ǹ��մϴ�." << endl; };

};

#endif //MENU_MENU_H
