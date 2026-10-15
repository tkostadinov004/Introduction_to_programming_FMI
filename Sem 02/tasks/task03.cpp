#include <iostream>

int main()
{
    double r, x, y;
    std::cout<<"r: ";
    std::cin>>r;
    std::cout<<"x: ";
    std::cin>>x;
    std::cout<<"y: ";
    std::cin>>y;
    double hypotenuse_Circle = r*r;
    double hypotenuse_Point = y*y + x*x;
    std::cout<<"The point is ";
    if (hypotenuse_Circle==hypotenuse_Point)
    {
        std::cout<<"on the circle.";
    }
    else if (hypotenuse_Circle > hypotenuse_Point)
    {
        std::cout<<"inside the circle.";
    }
    else
    {
         std::cout<<"outside the circle.";
    }


}
