#include <iostream>
using namespace std;
  
  
void sort(int &a, int &b, int &c)
{
    if (a > b) swap(a,b);
    if (b > c) swap(b,c);
    if (a > b) swap(a,b);
}
  
  
int main()
{
    int a1, a2, b1, b2, c1, c2;
  
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
      
    sort(a1,b1,c1);
    sort(a2,b2,c2);
  
    if ((a1 == a2) && (b1 == b2) && (c1 == c2)) 
        cout << "Boxes are equal";
    else if ((a1 >= a2) && (b1 >= b2) && (c1 >= c2)) 
        cout << "The first box is larger than the second one";
    else if ((a1 <= a2) && (b1 <= b2) && (c1 <= c2))
        cout << "The first box is smaller than the second one";
    else
        cout << "Boxes are incomparable";

    return 0;
}