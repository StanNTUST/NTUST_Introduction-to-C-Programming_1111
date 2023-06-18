#include<stdio.h>
#include<stdlib.h>
struct listNode{
    char data;
    struct listNode *nextptr;
    struct listNode *prevptr;
};
typedef struct listNode listnode;
typedef listnode *listnodeptr;
listnodeptr last;
void insert(listnodeptr *sptr,char letter);
void displayList(listnodeptr currentptr);
int main(){
    int count,judge;
    char text[200];
    listnodeptr startptr=NULL;
    gets(text);
    for(count=0;strlen(text)>count;count++)
    {
        insert(&startptr,text[count]);
    }
    displayList(startptr);
}
void insert(listnodeptr *sptr,char letter)
{
    if(*sptr==NULL){
        listnodeptr newptr=malloc(sizeof(listnode));
        newptr->data=letter;
        newptr->prevptr=NULL;
        newptr->nextptr=*sptr;
        *sptr=newptr;
    }
    else{
        listnodeptr newptr=malloc(sizeof(listnode));
        newptr->data=letter;
        newptr->nextptr =*sptr;
        (*sptr)->prevptr=newptr->nextptr;
        *sptr =newptr;
    }
}
void displayList(listnodeptr currentptr){
    while(currentptr!=NULL){
        printf("%c",currentptr->data);
        currentptr = currentptr->nextptr;
    }
    puts("");
}
