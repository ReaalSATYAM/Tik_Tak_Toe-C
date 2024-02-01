/*  
                              <---TIC-TAC-TOE--->
                              
    -This is a simple command-line implementation of the classic Tic-Tac-Toe game .
    -The game displays the Tic-Tac-Toe board and prompts each player to input their
     move by choosing a number corresponding to the cell they want to mark.

    [ TIC-TAC-TOE ]

         |     |
      1  |  2  |  3      Player 1 - X 
    _____|_____|_____
         |     |
      4  |  5  |  6      Player 2 - O
    _____|_____|_____
         |     |
      7  |  8  |  9
         |     |

*/

#include <stdio.h>
// Function to display the Tic-Tac-Toe board
void displayBoard( char a[])
{
    printf("<---TIC-TAC-TOE--->\n\n");
    printf("     |     |         \n");
    printf("  %c  |  %c  |  %c      Player 1 - X \n",a[0],a[1],a[2]);
    printf("_____|_____|_____    Player 2 - O\n");
    printf("     |     |        \n");
    printf("  %c  |  %c  |  %c  \n",a[3],a[4],a[5]);
    printf("_____|_____|_____   \n");
    printf("     |     |        \n");
    printf("  %c  |  %c  |  %c  \n",a[6],a[7],a[8]);
    printf("     |     |        \n");
    printf("\n");  
}

// Function to check if Player 1 has won
int checkWinner1( char a[])
{
    if( a[0]=='X' && a[0]==a[1] && a[0]==a[2] ||
        a[0]=='X' && a[0]==a[3] && a[0]==a[6] ||
        a[0]=='X' && a[0]==a[4] && a[0]==a[8] ||
        a[1]=='X' && a[1]==a[4] && a[1]==a[7] ||
        a[3]=='X' && a[3]==a[4] && a[3]==a[5] ||
        a[6]=='X' && a[6]==a[7] && a[6]==a[8] ||
        a[2]=='X' && a[2]==a[4] && a[2]==a[6] ||
        a[2]=='X' && a[2]==a[5] && a[2]==a[8] )
        return 1;
    
    else 
        return 0;
}

// Function to check if Player 2 has won
int checkWinner2( char a[])    
{
    if( a[0]=='O' && a[0]==a[1] && a[0]==a[2] ||
        a[0]=='O' && a[0]==a[3] && a[0]==a[6] ||
        a[0]=='O' && a[0]==a[4] && a[0]==a[8] ||
        a[1]=='O' && a[1]==a[4] && a[1]==a[7] ||
        a[3]=='O' && a[3]==a[4] && a[3]==a[5] ||
        a[6]=='O' && a[6]==a[7] && a[6]==a[8] ||
        a[2]=='O' && a[2]==a[4] && a[2]==a[6] ||
        a[2]=='O' && a[2]==a[5] && a[2]==a[8] )
        return 1;
    
    else 
        return 0;
}


int main()
{
    char input=' ';      // stores either X or O
    int pst;             //  position of X and O in array 
    int p;               //   Player's choice to play again or exit
    while(1)
    {
        
    char a[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    for(int i=1;i<=9;i++)
    {
        displayBoard(a);       // print tic-tac-toe board
        input=i%2==0?'O':'X';  
        if(i%2==0)
        {
            
            printf("Player 2 - ");
            scanf("%d",&pst);
            printf("\n\n");
            if(pst>=1 && pst<=9 && a[pst - 1] == ' ')
                a[pst-1]=input;
            
            else      
            {
                printf("<---INVALID INPUT | TRY AGAIN !!!--->\n\n");
                i--;
            }
            
        }
        else
        {
            printf("Player 1 - ");
            scanf("%d",&pst);
            printf("\n\n");
            if(pst>=1 && pst<=9 && a[pst - 1] == ' ')
                a[pst-1]=input;
            
            else      
            {
                printf("<---INVALID INPUT | TRY AGAIN !!!--->\n\n");
                i--;
            }   
        }
        //Winning condition check
        if(checkWinner1(a))
           {
                displayBoard(a);
                printf("<---PLAYER 1 WINS !!!--->\n\n");
                break;
           }
           
        else if(checkWinner2(a))
            {   
                displayBoard(a);
                printf("<---PLAYER 2 WINS !!!--->\n\n");
                break;
            }
        // Draw condition check
        if(i==9)          
        {
            displayBoard(a);
            printf("<-----DRAW !!!----->\n\n");
        }   
    }
    
    printf("Play Again :) - 1\nExit :( - 0\nYour Choice :|- ");
    scanf("%d", &p);
    printf("\n\n");
    if( p!=1 )
        break;
    printf("\n\n");
    }
    return 0;
}
