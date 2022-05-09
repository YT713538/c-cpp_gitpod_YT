#include <iostream>

using namespace std;
 
int main()
{
    float radius, area, perimeter;
 
    cout << "请输入圆的半径:";
    cin >> radius;
    
    area = 3.14159265359 * radius * radius;
    perimeter = 2 * 3.14159265359 * radius;
    
    cout << "圆的面积为"
              << area;
              
    cout << "\n圆的周长为"          
            << perimeter;
}    
