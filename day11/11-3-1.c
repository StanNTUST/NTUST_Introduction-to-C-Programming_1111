#include<stdio.h>
#define SUITS 4
#define FACES 13
#define CARDS 52
void shuffle(unsigned int wDeck [] [FACES] );
void deal(unsigned int wDeck [] [FACES],const char *wFace[],const char *wSuit[]);
int main(){
    unsigned int deck [SUITS] [FACES]={0},a,b,c;
    srand(time(NULL));
    shuffle(deck);
    const char *suit[SUITS]={"S","H","D","C"};
    const char *face[FACES]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    deal(deck,face,suit);
}
// shuffle cards in deck
void shuffle (unsigned int wDeck [] [FACES]){
// for each of the cards, choose slot of deck randomly

    for (size_t card = 1; card <= CARDS; ++card) {
        size_t row; // row number
        size_t column; // column number
    // choose new random location until unoccupied slot found
        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while (wDeck [row] [column] != 0) ;
        // place card number in chosen slot of deck
        wDeck [row] [column] = card;
    }
}
void deal(unsigned int wDeck [] [FACES],const char *wFace[],const char *wSuit[]){
    int take[5],take_row[5],take_column[5];
    for(int card=0;card<5;card++)
    {
        take[card]=rand()%52;
    }
    for(int card=0;card<5;card++)
    {
        for(int row=0;row<SUITS;row++)
        {
            for(int column=0;column<FACES;column++)
            {
                if(wDeck[row][column]==take[card])
                {
                    printf("%s%s ",wSuit[row],wFace[column]);
                    take_row[card]=row;
                    take_column[card]=column;
                }
            }
        }
    }
    printf("\b\n");
    for(int column=0;column<4;column++)
    {
        for(int column2=0;column2<4-column;column2++)
        {
            if(take_column[column2]>take_column[column2+1])
            {
                int change=take_column[column2+1];
                take_column[column2+1]=take_column[column2];
                take_column[column2]=change;
                change=take_row[column2+1];
                take_row[column2+1]=take_row[column2];
                take_row[column2]=change;
            }
        }
    }
    if(take_column[0]+1==take_column[1]&&take_column[1]+1==take_column[2]&&take_column[2]+1==take_column[3]&&take_column[3]+1==take_column[4])
    {
        if(take_row[0]==take_row[1]&&take_row[1]==take_row[2]&&take_row[2]==take_row[3]&&take_row[3]==take_row[4])
        {
            printf("Straight flush");
        }
        else
        {
            printf("Straight");
        }
    }
    else if(take_row[0]==take_row[1]&&take_row[1]==take_row[2]&&take_row[2]==take_row[3]&&take_row[3]==take_row[4])
    {
        printf("flush");
    }
    else if((take_column[0]==take_column[1]&&take_column[1]==take_column[2]&&take_column[2]==take_column[3])||(take_column[1]==take_column[2]&&take_column[2]==take_column[3]&&take_column[3]==take_column[4]))
    {
        printf("Four of a kind");
    }
    else if(take_column[0]==take_column[1]&&take_column[1]==take_column[2])
    {
        if(take_column[3]==take_column[4])
            printf("Full house");
        else
            printf("Three of a kind");
    }
    else if(take_column[2]==take_column[3]&&take_column[3]==take_column[4])
    {
        if(take_column[0]==take_column[1])
            printf("Full house");
        else
            printf("Three of a kind");
    }
    else if(take_column[0]==take_column[1])
    {
        if(take_column[2]==take_column[3]||take_column[3]==take_column[4])
        {
            printf("Two pair");
        }
        else
        {
            printf("One pair");
        }
    }
    else if(take_column[1]==take_column[2])
    {
        if(take_column[3]==take_column[4])
        {
            printf("Two pair");
        }
        else
        {
            printf("One pair");
        }
    }
    else if(take_column[2]==take_column[3]||take_column[3]==take_column[4])
    {
            printf("One pair");
    }
    else
    {
        printf("High card");
    }
}
