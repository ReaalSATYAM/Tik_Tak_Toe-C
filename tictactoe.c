#include <stdio.h>

int main()
{
    printf("\n");
    printf("   [ TIC-TAC-TOE ]\n\n");
    printf("HELLO |^-^|, This is a simple tic tac toe game !!\n\nINSTRUCTIONS !! \n\n");
    printf("Each box has a number, players can choose a number where they want to put X or O .\n\n");
    printf("     |     |         \n");
    printf("  1  |  2  |  3      Player 1 - X \n");
    printf("_____|_____|_____    Player 2 - O\n");
    printf("     |     |        \n");
    printf("  4  |  5  |  6  \n");
    printf("_____|_____|_____   \n");
    printf("     |     |        \n");
    printf("  7  |  8  |  9  \n");
    printf("     |     |        \n");
    printf("ENJOY  (^ o ^)/' !!! \n\n");
    
    printf("-----------------------------------------------------------------------------------------------------\n\n");
    
    char input=' ';     // stores either X or O
    int pst;         // position of X and O in array 
    while(1)
    {
    char a[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    for(int i=1;i<=9;i++)
    {
        
        printf(" [ TIC-TAC-TOE ]\n\n");
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
        
        input=i%2==0?'O':'X';  
        Invalid:     //label
        
        if(i%2==0)
        {
            
            printf("Player 2 - ");
            scanf("%d",&pst);
            printf("\n\n");
            if(pst>=1 && pst<=9)
                a[pst-1]=input;
            
            else      
            {
                printf("Invalid Input !!!\n\n");
                goto Invalid;
            }
            
        }
        else
        {
            
            printf("Player 1 - ");
            scanf("%d",&pst);
            printf("\n\n");
            if(pst>=1 && pst<=9)
                a[pst-1]=input;
            
            else      
            {
                printf("Invalid Input\n\n");
                goto Invalid;
            }
            
        }
        
// WINING CONDITION

        if(a[0]=='X' && a[0]==a[1] && a[0]==a[2] ||
           a[0]=='X' && a[0]==a[3] && a[0]==a[6] ||
           a[0]=='X' && a[0]==a[4] && a[0]==a[8] ||
           a[1]=='X' && a[1]==a[4] && a[1]==a[7] ||
           a[3]=='X' && a[3]==a[4] && a[3]==a[5] ||
           a[6]=='X' && a[6]==a[7] && a[6]==a[8] ||
           a[2]=='X' && a[2]==a[4] && a[2]==a[6] ||
           a[2]=='X' && a[2]==a[5] && a[2]==a[8] )
           
           {
                printf("     |     |         \n");
                printf("  %c  |  %c  |  %c      Player 1 - X \n",a[0],a[1],a[2]);
                printf("_____|_____|_____    Player 2 - O\n");
                printf("     |     |        \n");
                printf("  %c  |  %c  |  %c  \n",a[3],a[4],a[5]);
                printf("_____|_____|_____   \n");
                printf("     |     |        \n");
                printf("  %c  |  %c  |  %c  \n",a[6],a[7],a[8]);
                printf("     |     |        \n\n");
                printf("PLAYER 1 WINS !!!\n\n");
                break;
           }
           
           
        else if(a[0]=='O' && a[0]==a[1] && a[0]==a[2] ||
                a[0]=='O' && a[0]==a[3] && a[0]==a[6] ||
                a[0]=='O' && a[0]==a[4] && a[0]==a[8] ||
                a[1]=='O' && a[1]==a[4] && a[1]==a[7] ||
                a[3]=='O' && a[3]==a[4] && a[3]==a[5] ||
                a[6]=='O' && a[6]==a[7] && a[6]==a[8] ||
                a[2]=='O' && a[2]==a[4] && a[2]==a[6] ||
                a[2]=='O' && a[2]==a[5] && a[2]==a[8] )
                
                {
                    printf("     |     |         \n");
                    printf("  %c  |  %c  |  %c      Player 1 - X \n",a[0],a[1],a[2]);
                    printf("_____|_____|_____    Player 2 - O\n");
                    printf("     |     |        \n");
                    printf("  %c  |  %c  |  %c  \n",a[3],a[4],a[5]);
                    printf("_____|_____|_____   \n");
                    printf("     |     |        \n");
                    printf("  %c  |  %c  |  %c  \n",a[6],a[7],a[8]);
                    printf("     |     |        \n\n");
                    printf("PLAYER 2 WINS !!!\n\n");
                    break;
                }
                
        if(i==9)
            printf("    DRAW !!!\n\n");
            
    }
    
    int p; 
    printf("Play Again :) - 1\nExit :( - 0\nYour Choise :|- ");
    scanf("%d",&p);
    printf("\n\n");
    if(p!=1)
        break;
        
    printf("\n\n");
    }
    
    return 0;
}
