#include <iostream>

class Rectangle
{
    int width, height;

public:
    void setWidth(int x)
    {
        width = x;
    }
    void setHeight(int y)
    {
        height = y;
    }
    void setDimensions(int x, int y)
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