/*Goal: create a function that searches an array for 
**a given value. 
*/

#include<iostream>

int search(int *arr, int size, int INTSearchedFor);

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *arr, int size,int INTSearchedFor){
    
    for(int i=0;i<size;i++){
        if( arr[i] == INTSearchedFor){
            return i;
            break;
        }
    }
    return -1; //returns -1 if it is not found
    
    
}