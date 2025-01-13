/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>
//#include <string>

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    //std::cout<<a<<" "<<aa<<" "<<aaa<<"\n"<<b<<" "<<bb<<" "<<bbb<<"\n"<<c<<" "<<cc<<" "<<ccc<<"\n";

    std::cout<<"ints"<<std::setw(10)<<"floats"<<std::setw(10)<<"doubles"<<"\n";
    std::cout<<a<<std::setw(12)<<b<<std::setw(10)<<c<<"\n";
    std::cout<<aa<<std::setw(12)<<bb<<std::setw(10)<<cc<<"\n";
    std::cout<<aaa<<std::setw(12)<<bbb<<std::setw(10)<<ccc;

    std::string userInput;
    std::cin>>userInput;
    std::cout<<userInput;

    return 0;
}