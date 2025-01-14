#include <iostream>
class TicTacToe{
    
    char gameBoard[4][4];
public:
    TicTacToe();//initialises constructor
    void setBoardSpace(int row, int col, char value);
    char getBoardSpace(int row, int col);
    char gameOver();
    void printBoard();
    
};

TicTacToe::TicTacToe(){
    
    for(int i = 0; i<4;i++){
        for(int j = 0; j<4; j++){
            gameBoard[i][j] = '-';
        }
    }
    
}

char TicTacToe::gameOver(){
    char winningChar = '0';
    
    for(int i=0; i<4; i++){//check horizontal
        if (gameBoard[i][0] != '-'&&gameBoard[i][0] == gameBoard[i][1] &&gameBoard[i][1] == gameBoard[i][2]&&gameBoard[i][2] == gameBoard[i][3]){
            winningChar=gameBoard[i][0];
            return winningChar;
        }
    }
    for(int i=0; i<4; i++){//check horizontal
        if (gameBoard[0][i] != '-'&&gameBoard[0][i] == gameBoard[1][i] &&gameBoard[1][i] == gameBoard[2][i]&&gameBoard[2][i] == gameBoard[3][i]){
            winningChar=gameBoard[0][i];
            return winningChar;
        }
    }
    if(gameBoard[0][3] != '-'&&gameBoard[0][3] == gameBoard[1][2] &&gameBoard[1][2] == gameBoard[2][1]&&gameBoard[2][1] == gameBoard[3][0]){
        winningChar=gameBoard[0][3];
        return winningChar;
    }
    if(gameBoard[0][0] != '-'&&gameBoard[0][0] == gameBoard[1][1] &&gameBoard[1][1] == gameBoard[2][2]&&gameBoard[2][2] == gameBoard[3][3]){
        winningChar=gameBoard[0][0];
        return winningChar;
    }
    return winningChar;
    
}



void TicTacToe::setBoardSpace(int row, int col, char value){
    
    gameBoard[row][col]=value;
    
}

char TicTacToe::getBoardSpace(int row, int col){
    return gameBoard[row][col];
}


void TicTacToe::printBoard(){
    for(int i = 0; i<4;i++){
        for(int j = 0; j<4; j++){
            std::cout<<gameBoard[i][j]<<"\t";
        }
    std::cout<<"\n";
    }
    
}

void userInput(int playerNumber, char player, TicTacToe &game){
    bool valid;
    int x,y;
    while (valid==false){
        std::cout<<"Where would "<<player<<" player like to place?\tEnter x then y value\n";
        std::cin>>x;
        std::cin>>y;
        if(game.getBoardSpace(x,y)=='x'||game.getBoardSpace(x,y)=='o'){
            std::cout<<"Please enter valid co-ordinates\n";
        }else{
            game.setBoardSpace(x,y,player);
            game.printBoard();
            valid=true;
        }
    }


}