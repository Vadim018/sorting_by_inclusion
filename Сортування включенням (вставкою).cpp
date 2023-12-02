﻿/*
 
Сортування включенням або сортування вставкою — це простий алгоритм сортування на основі порівнянь.

На великих масивах є значно менш ефективним за такі алгоритми, як швидке сортування, пірамідальне сортування та сортування злиттям.

*/
#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");

    int* mass;
    int n;

    cout << "Вх*дна розм*рн*сть масиву: ";
    cin >> n;
    cout << "Введ*ть номер масиву: \n";

    mass = new int[n];

    for (int i = 0; i < n; i++) // введення масиву
    {
        cout << "A[" << i << "]" << ": ";
        cin >> mass[i];
    }

    cout << "Вих*дний масив: "; // виведення масиву

    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }

    cout << endl;

    system("pause");
    return 0;
}