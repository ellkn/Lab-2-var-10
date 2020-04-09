#include <iostream>
#include <cstring>
#include "Wind.h"

using namespace std;

Window::Window()
{
    this->owner = "person 1";
    this->title = "name 1";
    this->color = "black";
}
Window::Window(const Window & obj)
{
    this->owner = obj.owner;
    this->title = obj.title;
    this->color = obj.color;
}
void Window::setowner(string owner)
{
    this->owner=owner;
}

void Window::settitle(string title)
{
    this->title=title;
}

void Window::setcolor(char* color)
{
    size_t len = strlen (color);
    this->color = new char [len+1];
    strncpy(this->color, color, len);
}

string Window::getowner()
{
    return owner;
}

string Window::gettitle()
{
    return title;
}

char Window::getcolor()
{
    return *color;
}

bool Window::operator> (const Window &w) const
{
    if (owner>w.owner)
    {return 1;}
    return 0;
}

bool Window::operator< (const Window &w) const
{
    if (owner<w.owner)
    {return 1;}
    return 0;
}
bool Window::operator>= (const Window &w) const
{
     if (owner>=w.owner)
    {return 1;}
    return 0;
}
bool Window::operator<= (const Window &w) const
{
    if (owner<=w.owner)
    {return 1;}
    return 0;
}
bool Window::operator==(const Window &w)const
{
    if(owner == w.owner &&
       title == w.title &&
       color == w.color)
    return 1;
    return 0;
}
bool Window::operator!= (const Window & w) const
{
    if (*(this) == w)
    return 0;
    return 1;
}
ostream& operator<< (ostream &out, const Window &w)
{
    out << "Owner: " << w.owner << "\nTitle: " << w.title << "\nColor: " << w.color << endl;
    return out;
}

istream& operator>> (istream &in, Window &w)
{
    in >> w.owner;
    in >> w.title;
 //   in >> w.color;
    return  in;
}

Window&Window::operator=(Window &w)
{
    this-> owner = w.owner;
    this-> title = w.title;
    this-> color = w.color;
    return *this;
}

