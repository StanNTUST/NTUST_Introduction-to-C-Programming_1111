#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct listNode{
    char data;
    struct listNode *nextptr;
    struct listNode *prevptr;
};
typedef struct listNode listnode;
typedef listnode *listnodeptr;
listnodeptr last;
void insert(listnodeptr *sptr,char letter);
void findlast(listnodeptr currentptr);
void displayList(listnodeptr currentptr);
int palindrome(listnodeptr currentptr);
int main(){
    int count,judge;
    char text[200],letter;
    listnodeptr startptr=NULL;
    gets(text);
    for(count=0;strlen(text)>count;count++)
    {
        if(text[count]!=' ')
        {
            letter=tolower(text[count]);
            insert(&startptr,letter);
        }
    }
    findlast(startptr);
    judge=palindrome(startptr);
    if(judge) printf("True");
    else printf("False");
}
void insert(listnodeptr *sptr,char letter)
{
    listnodeptr newptr=malloc(sizeof(listnode));
    newptr->data=letter;
    newptr->nextptr=NULL;
    newptr->prevptr=NULL;
    listnodeptr prevoiusptr =NULL;
    listnodeptr currentptr=*sptr;
    while(currentptr !=NULL){
        prevoiusptr=currentptr;
        currentptr=currentptr->nextptr;
    }
    if(prevoiusptr ==NULL){
        newptr->nextptr =*sptr;
        *sptr =newptr;
    }
    else{
        newptr->prevptr=newptr;
        prevoiusptr->nextptr=newptr;
        newptr->nextptr=currentptr;
    }
}
void displayList(listnodeptr currentptr){
    while(currentptr!=NULL){
        printf("%c %d %d\n",currentptr->data,currentptr->prevptr,currentptr->nextptr);
        currentptr = currentptr->nextptr;
    }
    puts("");
}
void findlast(listnodeptr currentptr){
    while(currentptr!=NULL){
        last=currentptr;
        currentptr = currentptr->nextptr;
    }
}
int palindrome(listnodeptr currentptr)
{
    char letter[200],len=0,count=0;
    while(currentptr!=NULL){
        letter[len]=currentptr->data;
        len++;
        currentptr = currentptr->nextptr;
    }
    len--;
    while(count<len){
        if(letter[count]!=letter[len]) return 0;
        count++;
        len--;
    }
    return 1;
}
