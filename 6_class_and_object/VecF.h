//
// Created by hongdae on 2021-11-09.
//


#include <iostream>
#include <cstring>

#ifndef INC_6_CLASS_AND_OBJECT_VECF_H
#define INC_6_CLASS_AND_OBJECT_VECF_H

class VecF {
    int n;
    float *arr;
public:
    VecF(int d, const float *a = nullptr) : n{d} {
        arr = new float[d];
        if (a) memcpy(arr, a, sizeof(float) * n);
    }

    VecF(const VecF &fv) : n{fv.n} { //���� ������
        arr = new float[n];
        memcpy(arr, fv.arr, sizeof(float) * n);
    }

    VecF(VecF &&fv) : n{fv.n}, arr{fv.arr} { //�̵� ������
        fv.arr = nullptr;
        fv.n = 0;
    };

    ~VecF() {
        delete[] arr;
    }

    VecF add(const VecF &fv) const {
        VecF tmp(n); // ������ ���� ����� ������ �ӽ� ��ü
        for (int i = 0; i < n; i++)
            tmp.arr[i] = arr[i] + fv.arr[i];
        return tmp; // ���� ����� ��ȯ��
    }

    void print() const {
        std::cout << "[ ";
        for (int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";
        std::cout << "]";
    }

};

#endif //INC_6_CLASS_AND_OBJECT_VECF_H