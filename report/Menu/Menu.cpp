//
// Created by hongdae on 2021-11-11.
//

#include "Menu.h"

void Menu::insertMenu() {
    string str;
    cout << "�޴� ��Ī�� �Է��Ͻÿ� : ";
    cin >> str;
    cout << endl;
    Menu::menu = str;
    std::remove(selectionList.begin(), selectionList.end(),1 );
    Menu::selectionList.remove();
    cout << "�޴� ��ü�� ��������ϴ�." << endl;
    cout << "������ �޴��� ��Ī : '" << Menu::menu << "'" << endl << endl;
}

void Menu::insertSelection() {
    if (Menu::menu.empty()) {
        cout << "�޴� ��ü�� -1�� ��ȯ�Ͽ���, �׸� ������ �ùٸ� ���� ���� �ƴ��� �ǹ��մϴ�." << endl;
        return;
    }
    cout << Menu::selectionList.size();
    if (Menu::selectionList.size() + 1 > Menu::size) {
        cout << "���� �׸��� �ִ� 10������ �Է� �����մϴ�." << endl;
        return;
    }
    cout << "�߰��� ���� �׸��� �Է��Ͻÿ� : ";
    string selection;
    cin >> selection;
    Menu::selectionList.push_back(selection);
    cout << "�޴� ��ü�� ���� �׸��� �߰��Ͽ����ϴ�." << endl;
    cout << "�߰��� ���� �׸� : '" << selection << "'" << endl;
}

void Menu::printMenu() {
    if (Menu::menu.empty()) {
        cout << "�޴� ��ü�� -1�� ��ȯ�Ͽ���, �׸� ������ �ùٸ� ���� ���� �ƴ��� �ǹ��մϴ�." << endl;
        return;
    }
    cout << menu << endl << endl;
    Menu::printSelectionList();
}

void Menu::chooseSelection() {
    if (Menu::menu.empty()) {
        cout << "�޴� ��ü�� -1�� ��ȯ�Ͽ���, �׸� ������ �ùٸ� ���� ���� �ƴ��� �ǹ��մϴ�." << endl;
        return;
    }
    cout << "������ �޴��� �̿��Ͽ� ������ ���� ���� �׸� �� �ϳ��� ������ �Է��� �� �ֽ��ϴ�." << endl;
    cout << endl << Menu::menu << endl << endl;
    Menu::printSelectionList();
    cout << "�׸� ��ȣ�� �����Ͻÿ� : ";
    int index;
    cin >> index;
    cout << "�޴� ��ü�� ��ȯ�� ��ȣ�� " << index << "�Դϴ�." << endl;
    cout << "���õ� �׸��� ���� : '" << Menu::selectionList.at((index - 1)) << "'" << endl;
}

void Menu::printSelectionList() {
    int a = 1;
    for (const auto &item: selectionList)
        cout << "[" << a++ << "] " << item << endl;
    cout << endl;
}
