#include "TTTClasses.cpp"

//UNFINISHED -- NO VALIDATION FOR PLACING OVER EXISTING THING
int main(){
    
    TicTacToe currentGame;
    
    currentGame.printBoard();
    
    while (currentGame.gameOver()!='o'||currentGame.gameOver()!='x'){
        userInput(1,'x',currentGame);
        if (currentGame.gameOver()=='0'){
            userInput(2,'o',currentGame);
        }else{
            break;
        }
        
    }
    
    std::cout<<"\nGame Over!\n\n"<<currentGame.gameOver()<<" Wins!\n";
    currentGame.printBoard();
    
    
    return 0;
}