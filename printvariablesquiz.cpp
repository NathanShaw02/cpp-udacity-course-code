/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream> //retrieves the iostream library
#include <string> //includes the string library
#include <iomanip> // includes the input output manipulation library

int main(){ //initialises the main function and asks for an int to be returned

    int integer_variable = 123; //int only stores positive integers
    short short_integer_variable = 32767; //short stores an int between -32768 to 32767
    long long_integer_variable = 123456789; //long is used for large integers
    char char_variable = 'P'; //Char stores a single character/digit | uses single quotes
    float float_variable = 7.75; //float holds about 6 or 7 digits after decimal point
    double double_variable = 7.7500000000001; //double holds about 15 digits after decimal point
    bool boolean_variable = true; //bool holds true or false
    std::string string_variable = "String";

    //these wont be used for the quiz but I wanted to demonstrate the data types 

    std::cout<< sizeof(int)<<"\n"<< sizeof(short)<<"\n"<< sizeof(long)<<"\n"<< sizeof(char)<<"\n"<< sizeof(float)<<"\n"<< sizeof(double)<<"\n"<< sizeof(bool)<<"\n";

    std::cout<<std::setw(10)<<"Hi"<<std::setw(10)<<"this"<<std::setw(10)<<"is"<<std::setw(10)<<"width"<<std::setw(10)<<10<<"\n";
    std::cout<<std::setw(10)<<"Hiiiiiiiii"<<std::setw(10)<<"this"<<std::setw(10)<<"is"<<std::setw(10)<<"width"<<std::setw(10)<<10;

    return 0;
}