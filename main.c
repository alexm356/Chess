#include  <stdio.h>
#include <stdbool.h>

void move();
void print_board(int gameboard[9][9]);
int game_setup();


int main(){

    int active;
    int white, black;
    int playerColor;
    int player1, player2;

    int board[9][9] =   
    
    {{1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}};

    playerColor = game_setup(active);

    if(playerColor > 0){
        active = 1;
    }

    if (playerColor == 1){
        player1 = white;
        player2 = black;
        printf("Player 1 is white and player 2 is black\n");
    }
    else if (playerColor == 2){
        player1 = black;
        player2 = white;
        printf("Player 2 is white and player 1 is black\n");
    }else {
        printf("Something went wrong!");
    }

    if (active == 1){

        print_board(board);

    }else if (active == 0){

        printf("no game today!");
    }else { 
        printf("what is going on!");
    }

    
    

}

void move(){
}


void print_board(int gameboard[9][9]){

    for(int i = 0; i < 8; i++){
        printf("\n");
        for(int j = 0; j <= 7; j++)
            printf("|%2d ", gameboard[i][j]);
            printf("|");
    }
    printf("\n");

}

int game_setup(){

    int choice;

    char game;

    int white = 1, black = 2;

    int player1, player2;

    printf("Would you like to play a game of chess? 'y' for yes , 'n' for no\n");
    scanf("%c", &game);

    if (game == 'y'){
        printf("Welcome to the Game Player 1! Please choose 1 for white or 2 for black.\n");
        scanf("%d", &choice);

        switch (choice){
    
            case 1:
                player1 = white;
                player2 = black;
                break;
            case 2:
                player2 = white;
                player1 = black;
                break;
            default: 
                printf("Maybe Next Time!");
                break;
        }
    }else{
        printf("Are you in the right place? Go next!");
        
    }

    return player1;
}