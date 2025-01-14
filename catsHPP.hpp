/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/


#include <iostream>
#include <string>

class Cat{

    std::string name;
    std::string breed;
    int age;

    public:

    std::string getName();
    std::string getBreed();
    int getAge();
    void setName(std::string newName);
    void setBreed(std::string newBreed);
    void setAge(int newAge);
    void printInfo();

};

std::string Cat::getName(){
    return name;
}

std::string Cat::getBreed(){
    return breed;
}

int Cat::getAge(){
    return age;
}

void Cat::setName(std::string newName){
    name = newName;
}

void Cat::setBreed(std::string newBreed){
    breed = newBreed;
}
void Cat::setAge(int newAge){
    age = newAge;
}

void Cat::printInfo(){
    std::cout<<"Name: "<<name<<"\tBreed: "<<breed<<"\tAge: "<<age;
}