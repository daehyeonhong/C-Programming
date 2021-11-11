//
// Created by hongdae on 2021-11-09.
//

#ifndef INC_6_CLASS_AND_OBJECT_NAMEDOBJ_H
#define INC_6_CLASS_AND_OBJECT_NAMEDOBJ_H

#include <iostream>

using namespace std;

class NamedObj {
    char *name;
    int id;

    // static data member
    static int nConstr;// ������ ��ü ��
    static int nDestr;// �Ҹ�� ��ü ��
public:
    NamedObj(const char *s);// ������

    ~NamedObj();// �Ҹ���

    void display() const {// ��ü�� �Ӽ� ���
        cout << "ID : " << id << " --> �̸� : " << name << endl;
    }

    static int nObj() {// �����ϴ� ��ü �� ��ȯ
        return nConstr - nDestr;
    }

};

#endif//INC_6_CLASS_AND_OBJECT_NAMEDOBJ_H