#include <iostream>

class Rectangle
{
    int width, height;

public:
    int setWidth(int x)
    {
        width = x;
    }
    int setHeight(int y)
    {
        height = y;
    }
    int setDimensions(int x, int y)
    {
        width = x;
        height = y;
    }
    int getArea()
    {
        return width * height;
    }
    int getPerimeter()
    {
        return 2 * width * height;
    }
};

int main()
{
    Rectangle rect = Rectangle();
    rect.setDimensions(12, 20);

    return 0;
}