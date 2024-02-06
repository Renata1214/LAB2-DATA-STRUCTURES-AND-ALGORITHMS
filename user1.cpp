#include <iostream>
#include "myvector.h"
#include "mylist.h"
using std::cout;


int main()
{
auto showList = [](const List & s)
 {
 cout << "List size: " << s.size() << '\n';
 s.print(); cout << '\n';
 };


 /*auto showList = [](const List & s)
 {
 cout << "List size: " << s.size() << '\n';
 };*/

 {
 List s;
 s.push_front("apple");
 s.push_front("pear");
 s.push_front("banana");
 showList(s);
 s.pop_front();
 showList(s);
 }
}

/*Output:
List size: 3
List size: 2



int main()
{
 {
 List s;
 s.push_front("apple");
 s.push_front("pear");
 s.pop_front();
 }
}


int main()
{
 Vector v;
 List s;
}
*/