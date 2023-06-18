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
    for(a=0;4>a;a++)
    {
        for(b=0;13>b;b++)
        {
            printf("%d ",deck[a][b]);
        }
        printf("\n");
    }
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
