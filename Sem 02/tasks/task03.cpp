#include <iostream>

int main()
{
    double r, x, y, hypotenuse_Point, hypotenuse_Circle;
    std::cout<<"r: ";
    std::cin>>r;
    std::cout<<"x: ";
    std::cin>>x;
    std::cout<<"y: ";
    std::cin>>y;
    hypotenuse_Circle = r*r;
    hypotenuse_Point = y*y + x*x;
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
