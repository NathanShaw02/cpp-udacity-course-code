/*header file for main.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition

Gameboard::Gameboard(){
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            gameSpace[i][j]='-';
        }
    }
}

void Gameboard::setGameSpace(int row, int column, char value){
    gameSpace[row][column]=value;
}

char Gameboard::getGameSpace(int row, int column){
    return gameSpace[row][column];
}

int Gameboard::fourInRow(){
    int gameOver = 0;
    for(int i=0; i<4;i++){//checking horizontal
        if (gameSpace[i][0] == gameSpace[i][1] &&gameSpace[i][1] == gameSpace[i][2]&&gameSpace[i][2] == gameSpace[i][3]){
            gameOver = 1;
        }
    }
    // for(int i=0; i<4;i++){//checks vertical not needed
    //     if (gameSpace[0][0] == gameSpace[0][i] &&gameSpace[1][i] == gameSpace[2][i]&&gameSpace[2][i] == gameSpace[3][i]){
    //         gameOver = 1;
    //     }
    // } 
    return gameOver;
}

void Gameboard::printInfo(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<gameSpace[i][j]<<"\t";
        }
        cout<<"\n";
    }
}