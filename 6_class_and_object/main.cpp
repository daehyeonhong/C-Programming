#include "CounterM.h"
#include "Counter.h"
#include "VecF.h"
#include "NamedObj.h"

using namespace std;

void f() {
    NamedObj x("third");// �� ��° ��ü�� ����
    x.display();// �Լ� ��ȯ �� x�� �Ҹ��
}

int main() {

    float a[3] = {1, 2, 3};
    float b[3] = {2, 4, 6};

    VecF v1(3, a);
    VecF v2(3, b);
    VecF v3(v1.add(v2));
    v1.print();
    cout << endl;
    v2.print();
    cout << endl;
    v3.print();
    cout << endl;

    cout << "NamedObj Ŭ������ ��ü �� : " << NamedObj::nObj() << endl;

    NamedObj ff("First");// ù ��° ��ü ����
    NamedObj s("Second");// �� ��° ��ü ����
    cout << "NamedObj Ŭ������ ��ü �� : " << NamedObj::nObj() << endl;

    f();
    NamedObj c("Fourth");// �� ��° ��ü ����
    c.display();
    cout << "NamedObj Ŭ������ ��ü �� : " << NamedObj::nObj() << endl;

    return 0;
}