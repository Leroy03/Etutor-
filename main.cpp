//
//  main.cpp
//  etutor
//
//  Created by Leroy on 02/04/2019.
//  Copyright © 2019 Leroy. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
void cal(char sym,int a[])
{
    int b[2];
    switch (sym)
    {
        case '+':
            b[0] = a[1] + a[3];
            b[1] = a[2] + a[4];
            break;
        case '-':
            b[0] = a[1] - a[3];
            b[1] = a[2] - a[4];
            break;
        case '*':
            b[0] = a[1] * a[3] - a[2] * a[4];
            b[1] = a[1] * a[4] + a[2] * a[3];
            break;
        case '/':
            int tmp = pow(a[3], 2) + pow(a[4], 2);
            b[0] = (a[1] * a[3] + a[2] * a[4]) / tmp;
            b[1] = (a[2] * a[3] - a[1] * a[4]) / tmp;
            break;
            
    }
    cout << b[0] << " " << b[1] << endl;
}

int main() {
    
    int x;
    int a[5];
    char symbol;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        cin >> symbol >> a[1] >> a[2] >> a[3] >> a[4];
        cal(symbol, a);
    }
    
    
}
