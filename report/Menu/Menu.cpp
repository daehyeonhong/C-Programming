//
// Created by hongdae on 2021-11-11.
//

#include "Menu.h"

void Menu::insertMenu() {
    string str;
    cout << "�޴� ��Ī�� �Է��Ͻÿ� : ";
    cin >> str;
    cout << endl;
    Menu::~Menu();
    Menu::menuName = str;
    cout << "�޴� ��ü�� ��������ϴ�." << endl;
    cout << "������ �޴��� ��Ī : '" << Menu::menuName << "'" << endl << endl;
}

void Menu::printMenu() {
    if (Menu::isMenuEmpty()) {
        Menu::printException();
        return;
    }
    cout << Menu::menuName << endl << endl;
    Menu::printSelectionVector();
}

bool Menu::isMenuEmpty() {
    return Menu::menuName.empty();
}

void Menu::insertSelection() {
    if (Menu::isMenuEmpty()) {
        Menu::printException();
        return;
    }
    if (Menu::isSelectionVectorFull()) {
        cout << "���� �׸��� �ִ� 10������ �Է� �����մϴ�." << endl;
        return;
    }
    cout << "�߰��� ���� �׸��� �Է��Ͻÿ� : ";
    string selection;
    cin >> selection;
    Menu::selectionVector.push_back(selection);
    cout << "�޴� ��ü�� ���� �׸��� �߰��Ͽ����ϴ�." << endl;
    cout << "�߰��� ���� �׸� : '" << selection << "'" << endl;
}

void Menu::chooseSelection() {
    if (Menu::isMenuEmpty() || Menu::isSelectionVectorEmpty()) {
        Menu::printException();
        return;
    }
    cout << "������ �޴��� �̿��Ͽ� ������ ���� ���� �׸� �� �ϳ��� ������ �Է��� �� �ֽ��ϴ�." << endl;
    cout << endl << Menu::menuName << endl << endl;
    Menu::printSelectionVector();
    cout << "�׸� ��ȣ�� �����Ͻÿ� : ";
    int index;
    cin >> index;
    if (Menu::selectionVector.size() < index) {
        Menu::printException();
        return;
    }
    cout << "�޴� ��ü�� ��ȯ�� ��ȣ�� " << index << "�Դϴ�." << endl;
    cout << "���õ� �׸��� ���� : '" << Menu::selectionVector.at((index - 1)) << "'" << endl;
}

void Menu::printSelectionVector() {
    for (int i = 0; i < Menu::selectionVector.size(); ++i)
        cout << "[" << i + 1 << "] " << selectionVector.at(i) << endl;
    cout << endl;
}

void Menu::clearSelectionVector() {
    Menu::selectionVector.clear();
}

bool Menu::isSelectionVectorEmpty() {
    return Menu::selectionVector.empty();
}

bool Menu::isSelectionVectorFull() {
    return Menu::selectionVector.size() == Menu::size;
}
