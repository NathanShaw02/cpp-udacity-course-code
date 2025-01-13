/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication 
**of two integers. 
*/
#include <iostream>

void printProduct(int num1,int num2,int finalProduct);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;
    
    printProduct(m1, m2, product);
    return 0;
}

void printProduct(int num1,int num2,int finalProduct){
    
    finalProduct = num1*num2;
    std::cout<<num1<<" * "<<num2<<" = "<<finalProduct;
    
}