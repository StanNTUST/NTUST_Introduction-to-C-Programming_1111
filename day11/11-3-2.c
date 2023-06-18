#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void deal(char row[],char column[]);
void shuffle (unsigned int wDeck [] [FACES]);
int main(){
    int a;
    char take[5][4],row[5],column[5];
    for(a=0;a<5;a++)
    {
        scanf(" %s",take[a]);
        row[a]=take[a][0];
        column[a]=take[a][1];
    }
    deal(row,column);
}
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
void deal(char row[],char column[]){
    int a,take_row[5],take_column[5];
    for(a=0;a<5;a++)
    {
        switch(column[a]){
            case 'A':
                take_column[a]=13;
                break;
            case 'J':
                take_column[a]=10;
                break;
            case 'Q':
                take_column[a]=11;
                break;
            case 'K':
                take_column[a]=12;
                break;
            case '1':
                take_column[a]=9;
                break;
            default:
                take_column[a]=(column[a])-'0'-1;
                break;
        }
        switch(row[a]){
            case 'S':
                take_row[a]=0;
                break;
            case 'H':
                take_row[a]=1;
                break;
            case 'D':
                take_row[a]=2;
                break;
            case 'C':
                take_row[a]=3;
                break;
        }
    }
    for(int a=0;a<4;a++)
    {
        for(int column2=0;column2<4-a;column2++)
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
        printf("Flush");
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
