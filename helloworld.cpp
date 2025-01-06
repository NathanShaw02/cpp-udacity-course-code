#include <iostream> //includes the io stream library (contains cout)

//using namespace std; can be used to remove the need for std:: before cout however this may not be the best practice for larger projects
int main() //defines the main function, expects an int to be returned || in c++ main MUST return something
{
    std::cout<<"Hello world, I am ready for C++"; 
    /*cout is the print of C++ 
    it is called from the standard library using std::
    */
    return 0; //it is customary in C++ to return 0 at the end of main as it means that code has run without error
}