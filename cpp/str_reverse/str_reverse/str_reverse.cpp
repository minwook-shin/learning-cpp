// str_reverse.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
    char str_sample[] = "hello, world";
    cout << str_sample << endl;

    int len = strlen(str_sample);
    cout << len << endl;

    for (int i = 0; i < len + 1; i++) {
        if (i == 0) {
            continue;
        }
        cout << str_sample[len - i];
    }
    return 0;
}

