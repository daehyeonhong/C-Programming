#include<iostream>
#include<string>
#include "Menu.h"

using namespace std;

int main() {
    string option[5] = {"�޴� ��ü ����",
                        "���� �׸� �߰�",
                        "�޴� ���� ���",
                        "������ �޴��� �̿��� �׸� ����",
                        "����"};

    Menu menu;
    char status = 1;
    while (status != 5) {
        for (int i = 0; i < sizeof option / sizeof option[0]; i++)
            cout << "[" << i + 1 << "] " << option[i] << endl;
        cout << endl;
        cout << "�׸� ��ȣ�� �����Ͻÿ� : ";
        cin >> status;
        cout << status << endl;
        int statusInt = status - '0';
        switch (statusInt) {
            case 1:
                menu.insertMenu();
                break;
            case 2:
                menu.insertSelection();
                break;
            case 3:
                menu.printMenu();
                break;
            case 4:
                menu.chooseSelection();
                break;
            case 5:
                cout << "�ý����� �����մϴ�.";
                status = 5;
                break;
            default:
                status = 0;
                cout << "�߸��� �Է��Դϴ�, �ٽ� �Է����ּ���.";
                cout << endl;
                continue;
        }
    }
    return EXIT_SUCCESS;
}
