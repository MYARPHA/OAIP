#include <iostream>

void swapValues(float& x, float& y) {
    float temp = x;
    x = y;
    y = temp;
}


int main()
{
    float x = 8;
    float y = 15;

    std::cout << "До обмена: x = " << x << ", y = " << y << std::endl;

    swapValues(x, y);

    std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

    return 0;
}
