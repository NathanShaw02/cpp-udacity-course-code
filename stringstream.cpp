 #include <sstream>
 #include <iostream>
 #include <string>
 
 float length;
 float width;
 std::string temp = "";
 
 std::cout<<"Please enter the length of the room";
 std::cin>>temp;
 std::stringstream(temp)>>length;
 
 std::cout<<"Please enter the width of the room";
 std::cin>>temp;
 std::stringstream(temp)>>width;
 
 float area = length*width;
 std::cout<<"The area of the room is "<<area<<"cm^2";