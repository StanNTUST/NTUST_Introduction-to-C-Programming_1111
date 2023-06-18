#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define SUITS 4
#define FACES 13
#define CARDS 52
int deal(unsigned int wDeck [] [FACES],const char *wFace[],const char *wSuit[]);
void shuffle (unsigned int wDeck [] [FACES]);
int n=1,test1_row[5],test1_column[5],test2_row[5],test2_column[5],havetake[5];
unsigned int deck [SUITS] [FACES]={0};
int main(){
    unsigned int a,b,c;
    int takein_column[5],takein_row[5],takein2_column[5],takein2_row[5],win,d=1,e=1;
    srand(time(NULL));
    shuffle(deck);
    const char *suit[SUITS]={"S","H","D","C"};
    const char *face[FACES]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    a=deal(deck,face,suit);
    b=deal(deck,face,suit);

    if(a>b)
    {
        for(c=0;c<5;c++)
        {
            printf("%s%s ",suit[test2_row[c]],face[test2_column[c]]);
        }
        printf("\b");
    }
    else if(a<b)
    {
        for(c=0;c<5;c++)
        {
            printf("%s%s ",suit[test1_row[c]],face[test1_column[c]]);
        }
        printf("\b");
    }
    else{
        for(c=0;c<5;c++)
        {
            takein_column[c]=test1_column[c];
            takein2_column[c]=test2_column[c];
            takein_row[c]=test1_row[c];
            takein2_row[c]=test2_row[c];
            if(takein_column[c]==0)takein_column[c]=13;
            if(takein2_column[c]==0) takein_column[c]=13;
        }
        for(int column=0;column<4;column++){
            for(int column2=0;column2<4-column;column2++){
                if(takein_column[column2]>takein_column[column2+1])
                {
                    int change=takein_column[column2+1];
                    takein_column[column2+1]=takein_column[column2];
                    takein_column[column2]=change;
                    change=takein_row[column2+1];
                    takein_row[column2+1]=takein_row[column2];
                    takein_row[column2]=change;
                }
            }
        }
        for(int column=0;column<4;column++){
            for(int column2=0;column2<4-column;column2++){
                if(takein2_column[column2]>takein2_column[column2+1])
                {
                    int change=takein2_column[column2+1];
                    takein2_column[column2+1]=takein2_column[column2];
                    takein2_column[column2]=change;
                    change=takein2_row[column2+1];
                    takein2_row[column2+1]=takein2_row[column2];
                    takein2_row[column2]=change;
                }
            }
        }
        switch(a){
            case 3:
                d=takein_column[2];
                e=takein2_column[2];
                if(d==0)d=13;
                if(e==0)e=13;
                if(d>e){
                    for(c=0;c<5;c++)
                    {
                        printf("%s%s ",suit[test1_row[c]],face[test1_column[c]]);
                    }
                    printf("\b");
                    d=-1;
                    e=-1;
                }
                else if(e>d){
                    for(c=0;c<5;c++)
                    {
                        printf("%s%s ",suit[test2_row[c]],face[test2_column[c]]);
                    }
                    printf("\b");
                    d=-1;
                    e=-1;
                }
                else{
                    if(takein_column[0]==takein_column[1]&&takein_column[1]!=takein_column[2]) d=takein_column[0];
                    if(takein_column[4]==takein_column[3]&&takein_column[3]!=takein_column[2]) d=takein_column[2];
                    if(takein2_column[0]==takein2_column[1]&&takein2_column[1]!=takein2_column[2]) e=takein2_column[0];
                    if(takein2_column[4]==takein2_column[3]&&takein2_column[3]!=takein2_column[2]) e=takein2_column[2];
                }
                break;
            case 5:
                if(takein_column[0]==0) d=13;
                else d=takein_column[4];
                if(takein2_column[0]==0) e=13;
                else e=takein_column[4];
                break;
            case 6:
                d=takein_column[2];
                e=takein2_column[2];
                break;
            case 7:
                if(takein_column[0]==takein_column[1])
                {
                    if(takein_column[0]==0)d=13;
                    else d= takein_column[0];
                }
                else if(takein_column[1]==takein_column[2]) d= (d>takein_column[1]? d:takein_column[1]);
                else if(takein_column[2]==takein_column[3]) d= (d>takein_column[2]? d:takein_column[2]);
                else if(takein_column[3]==takein_column[4]) d= (d>takein_column[3]? d:takein_column[3]);
                if(takein2_column[0]==takein2_column[1])
                {
                    if(takein2_column[0]==0)e=13;
                    else e= takein2_column[0];
                }
                else if(takein2_column[1]==takein2_column[2]) e= (e>takein2_column[1]? e:takein2_column[1]);
                else if(takein2_column[2]==takein2_column[3]) e= (e>takein2_column[2]? e:takein2_column[2]);
                else if(takein2_column[3]==takein2_column[4]) e= (e>takein2_column[3]? e:takein2_column[3]);
                break;
                if(d>e){
                    for(c=0;c<5;c++)
                    {
                        printf("%s%s ",suit[test1_row[c]],face[test1_column[c]]);
                    }
                    printf("\b");
                    d=-1;
                    e=-1;
                }
                else if(e>d){
                    for(c=0;c<5;c++)
                    {
                        printf("%s%s ",suit[test2_row[c]],face[test2_column[c]]);
                    }
                    printf("\b");
                    d=-1;
                    e=-1;
                }
                else{
                    if(takein_column[0]!=takein_column[1]&&takein_column[0]!=takein_column[2]&&takein_column[0]!=takein_column[3]&&takein_column[0]!=takein_column[4]) d=takein_column[0];
                    else if(takein_column[1]!=takein_column[0]&&takein_column[1]!=takein_column[2]&&takein_column[1]!=takein_column[3]&&takein_column[1]!=takein_column[4]) d=takein_column[1];
                    else if(takein_column[2]!=takein_column[0]&&takein_column[2]!=takein_column[1]&&takein_column[2]!=takein_column[3]&&takein_column[2]!=takein_column[4]) d=takein_column[2];
                    else if(takein_column[3]!=takein_column[0]&&takein_column[3]!=takein_column[1]&&takein_column[3]!=takein_column[2]&&takein_column[3]!=takein_column[4]) d=takein_column[3];
                    else if(takein_column[4]!=takein_column[0]&&takein_column[4]!=takein_column[1]&&takein_column[4]!=takein_column[2]&&takein_column[4]!=takein_column[3]) d=takein_column[2];
                    if(takein2_column[0]!=takein2_column[1]&&takein2_column[0]!=takein2_column[2]&&takein2_column[0]!=takein2_column[3]&&takein2_column[0]!=takein2_column[4]) e=takein2_column[0];
                    else if(takein2_column[1]!=takein2_column[0]&&takein2_column[1]!=takein2_column[2]&&takein2_column[1]!=takein2_column[3]&&takein2_column[1]!=takein2_column[4]) e=takein2_column[1];
                    else if(takein2_column[2]!=takein2_column[0]&&takein2_column[2]!=takein2_column[1]&&takein2_column[2]!=takein2_column[3]&&takein2_column[2]!=takein2_column[4]) e=takein2_column[2];
                    else if(takein2_column[3]!=takein2_column[0]&&takein2_column[3]!=takein2_column[1]&&takein2_column[3]!=takein2_column[2]&&takein2_column[3]!=takein2_column[4]) e=takein2_column[3];
                    else if(takein2_column[4]!=takein2_column[0]&&takein2_column[4]!=takein2_column[1]&&takein2_column[4]!=takein2_column[2]&&takein2_column[4]!=takein2_column[3]) e=takein2_column[2];
                }
            case 8:
                if(takein_column[0]==takein_column[1])d=takein_column[0];
                else if(takein_column[1]==takein_column[2])d=takein_column[1];
                else if(takein_column[2]==takein_column[3])d=takein_column[2];
                else if(takein_column[3]==takein_column[4])d=takein_column[3];
                if(takein2_column[0]==takein2_column[1])e=takein2_column[0];
                else if(takein2_column[1]==takein2_column[2])e=takein2_column[1];
                else if(takein2_column[2]==takein2_column[3])e=takein2_column[2];
                else if(takein2_column[3]==takein2_column[4])e=takein2_column[3];
                break;
            case 9:
                if(takein_column[0]==0) d=13;
                else d=takein_column[4];
                if(takein2_column[0]==0) e=13;
                else e=takein_column[4];
                break;
        }
        if(d==0)d=13;
        if(e==0)e=13;
        if(d>e &&d!=-1){
            for(c=0;c<5;c++)
            {
                printf("%s%s ",suit[test1_row[c]],face[test1_column[c]]);
            }
            printf("\b");
        }
        else if(e>d &&d!=-1){
            for(c=0;c<5;c++)
            {
                printf("%s%s ",suit[test2_row[c]],face[test2_column[c]]);
            }
            printf("\b");
        }
        else if(d!=-1){
            printf("Deuce");
        }
    }
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
int deal(unsigned int wDeck [] [FACES],const char *wFace[],const char *wSuit[]){
    int take[5],take_row[5],take_column[5];
    for(int card=0;card<5;card++)
    {
        if(n==1){
            take[card]=rand()%52;
            havetake[card]==take[card];
        }
        else{
            do{
            take[card]=rand()%52;
            }while(take[card]==havetake[0]||take[card]==havetake[1]||take[card]==havetake[2]||take[card]==havetake[3]||take[card]==havetake[4]);
        }

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
                    if(n==1)
                    {
                        test1_column[card]=column;
                        test1_row[card]=row;
                    }
                    else
                    {
                        test2_column[card]=column;
                        test2_row[card]=row;
                    }
                    if(take_column[card]==0)take_column[card]=13;
                }
            }
        }
    }
    n=2;
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
            printf("Straight flush\n");
            return 0;
        }
        else
        {
            printf("Straight\n");
            return 5;
        }
    }
    else if(take_row[0]==take_row[1]&&take_row[1]==take_row[2]&&take_row[2]==take_row[3]&&take_row[3]==take_row[4])
    {
        printf("flush\n");
        return 4;
    }
    else if((take_column[0]==take_column[1]&&take_column[1]==take_column[2]&&take_column[2]==take_column[3])||(take_column[1]==take_column[2]&&take_column[2]==take_column[3]&&take_column[3]==take_column[4]))
    {
        printf("Four of a kind\n");
        return 2;
    }
    else if(take_column[0]==take_column[1]&&take_column[1]==take_column[2])
    {
        if(take_column[3]==take_column[4]){
            printf("Full house\n");
            return 3;
        }
        else{
            printf("Three of a kind\n");
            return 6;
        }
    }
    else if(take_column[2]==take_column[3]&&take_column[3]==take_column[4])
    {
        if(take_column[0]==take_column[1]){
            printf("Full house\n");
            return 3;
        }
        else{
            printf("Three of a kind\n");
            return 6;
        }
    }
    else if(take_column[0]==take_column[1])
    {
        if(take_column[2]==take_column[3]||take_column[3]==take_column[4])
        {
            printf("Two pair\n");
            return 7;
        }
        else
        {
            printf("One pair\n");
            return 8;
        }
    }
    else if(take_column[1]==take_column[2])
    {
        if(take_column[3]==take_column[4])
        {
            printf("Two pair\n");
            return 7;
        }
        else
        {
            printf("One pair\n");
            return 8;
        }
    }
    else if(take_column[2]==take_column[3]||take_column[3]==take_column[4])
    {
            printf("One pair\n");
            return 8;
    }
    else
    {
        printf("High card\n");
        return 9;
    }
}
