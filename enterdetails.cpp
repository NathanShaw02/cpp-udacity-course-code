#include <iostream>
#include <string>


int main(){
    std::string name1 = "";
    std::string name2 = "";
    std::string address1 = "";
    std::string address2 = "";
    std::string phone1 = "";
    std::string phone2 = "";
    
    std::cout<<"Please enter your name\n";
    std::getline(std::cin, name1);
    
    std::cout<<"Please enter your address\n";
    std::getline(std::cin, address1);
    
    std::cout<<"Please enter your phone\n";
    std::getline(std::cin, phone1);
    
    std::cout<<"Please enter your name\n";
    std::getline(std::cin, name2);
    
    std::cout<<"Please enter your address\n";
    std::getline(std::cin, address2);
    
    std::cout<<"Please enter your phone\n";
    std::getline(std::cin, phone2);
    
    std::cout<<"\n"<<name1<<"\n\t\t"<<address1<<"\n\t\t"<<phone1;
    std::cout<<"\n"<<name2<<"\n\t\t"<<address2<<"\n\t\t"<<phone2;
    
    return 0;
}