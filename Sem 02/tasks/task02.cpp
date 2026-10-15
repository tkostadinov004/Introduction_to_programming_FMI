#include <iostream>

const int MINUTES_IN_AN_HOUR = 60;
const int HOURS_IN_A_DAY = 24;

int main()
{
    int input_Hour, input_Minutes;
    std::cin>>input_Hour;
    std::cin>>input_Minutes;
    input_Minutes = input_Minutes + 15;
    if(input_Minutes>=MINUTES_IN_AN_HOUR)
    {
        input_Hour = input_Hour + 1;
        input_Minutes = input_Minutes - MINUTES_IN_AN_HOUR;
    }
    if(input_Hour>=HOURS_IN_A_DAY)
    {
        input_Hour= input_Hour-HOURS_IN_A_DAY;   
    }
    std::cout<<"After 15 minutes the clock will be at: ";
    std::cout << (input_Hour < 10 ? "0" : "") << input_Hour << ":" << (input_Minutes < 10 ? "0" : "") << input_Minutes;
}
