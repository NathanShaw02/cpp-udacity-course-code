/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#define _USE_MATH_DEFINES //required for using constant M_PI
#include<iostream>
#include<cmath>

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;

    volCube = std::pow(cubeSide, 3);
    volSphere = (4.0/3.0)*M_PI*(std::pow(sphereRadius,3)); //changed 4/3 to 4.0/3.0. Unsure why first is not correct but this then produced the correct answer
    volCone = M_PI *(std::pow(coneRadius,2))*(coneHeight/3);

    std::cout<<"Cube: "<<volCube<<"\tSphere: "<<volSphere<<"\tCone: "<<volCone;

    int a = 1;
    std::cout<<"printing a to console with a postfix: "<<a++<<a;
    std::cout<<"a after operation complete = "<<a;
    
    return 0;
}