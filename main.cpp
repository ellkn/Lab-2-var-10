#include <iostream>
#include "Wind.h"
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "\t\tИнформация" << endl;
    Window w;
    cout << w;
    cout << "\n\t\tКонструктор Копирования:\n" << endl;
    Window z (w);
    cout << z;
    cout << "\n\t\tРеализация SET:\n" << endl;
    w.setowner("User");
    w.settitle("game");
    w.setcolor("green");
    cout << w;
    cout << "\n\t\tРеализация GET:\n" << endl;
    w.getowner();
    w.gettitle();
    w.getcolor();
    cout << w;

    Window new1;
    string owner;
    string title;
    char *color;

    cout << "\n\t\tВведите новые значения для owner, title, color:\n";
    cin>>new1;
    cout<<"\n"<<new1;

    cout << "\n\t\tРассмотрим работу операторов: \n"<<endl;

    cout << "\t\tОператор >"<< endl;
    if (w>new1)
    {cout << "Первоначальные значение owner Больше Вами введенного" << endl;}
    else
    {cout << "Первоначальные значение owner Меньше Вами введенного" << endl;}

    cout << "\n\t\tОператор <"<< endl;
    if (w<new1)
    {cout << "Первоначальные значение owner Меньше Вами введенного" << endl;}
    else
    {cout << "Первоначальные значение owner Больше Вами введенного" << endl;}

    cout << "\n\t\tОператор >="<< endl;
    if (w>=new1)
    {cout << "Первоначальные значение owner Больше или равно Вами введенного" << endl;}
    else
    {cout << "Первоначальные значение owner Меньше Вами введенного" << endl;}

    cout << "\n\t\tОператор <="<< endl;
    if (w<=new1)
    {cout << "Первоначальные значение owner Меньше или равно Вами введенного" << endl;}
    else
    {cout << "Первоначальные значение owner Больше Вами введенного" << endl;}

    cout << "\n\t\tОператор =="<< endl;
    if (w==new1)
    {cout << "Первоначальные значения Равны с Вами введенным" << endl;}
    else
    {cout << "Первоначальные значения Не равны с  Вами введенным" << endl;}

    cout << "\n\t\tОператор !="<< endl;
    if (w!=new1)
    {cout << "Первоначальные значения НЕ Равны с Вами введенным" << endl;}
    else
    {cout << "Первоначальные значения Равны с  Вами введенным" << endl;}


    return 0;
}
