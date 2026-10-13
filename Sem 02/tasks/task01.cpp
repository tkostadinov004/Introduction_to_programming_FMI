#include <iostream>

int main()
{
    double a, b;
    double end;
    char sign;
    std::cin>>a;
    std::cin>>b;
    std::cin>>sign;
    switch (sign)
    {
        case '+':
            end = a+b;
            std::cout <<end;
            break;
        case '-':
            end = a-b;
            std::cout <<end;
            break;
        case '*':
            end = a*b;
            std::cout <<end;
            break;
        case '/':
            if(b!=0)
            {
                end = a / b;
                std::cout <<end;
            }
            else
            {
                std::cout <<"Error....";
            }
            break;        
        default:
             std::cout <<"Error....";
    }
    
}
