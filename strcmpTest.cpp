#include <stdio.h>
#include <string.h>
#include <iostream>


int main(){

    char word1[] = "Apple";
    char word2[] = "Bannana";
    std::cout<<"Word 1 is: "<<word1<<"\nWord 2 is: "<<word2<<"\n\n";
    std::cout<<"comparing Apple with Bannana: "<<strcmp(word1,word2);
    std::cout<<"\ncomparing Bannana with Apple: "<<strcmp(word2,word1);
    std::cout<<"\ncomparing Apple with Apple: "<<strcmp(word1,word1);

    return 0;
}