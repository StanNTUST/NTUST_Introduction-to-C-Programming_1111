#include<stdio.h>
#include<stdlib.h>
struct listNode{
    int data;
    struct listNode *nextptr;
    struct listNode *prevptr;
};

typedef struct listNode listnode;
typedef listnode *listnodeptr;
listnodeptr last;

void insert(listnodeptr *sptr,int value);
void displayList(listnodeptr currentptr);
void printListBackward(listnodeptr currentptr,int time);
int main(){
    listnodeptr startptr=NULL;
    int item,time,input,input2;
    scanf("%d%d",&input,&input2);
    time=input+input2;
    int contain[time];
    while(time--)
    {
        scanf("%d",&item);
        insert(&startptr,item);
        printf("%4d",item);
    }
    puts("");
    startptr->prevptr=NULL;
    displayList(startptr);
    printListBackward(startptr,input+input2);
}
void insert(listnodeptr *sptr,int value)
{
    listnodeptr newptr=malloc(sizeof(listnode));
    newptr->data=value;
    newptr->nextptr=NULL;
    newptr->prevptr=NULL;
    listnodeptr prevoiusptr =NULL;
    listnodeptr currentptr=*sptr;

    while(currentptr !=NULL && value >currentptr->data){
        prevoiusptr=currentptr;
        currentptr=currentptr->nextptr;
    }
    if(prevoiusptr ==NULL){
        newptr->prevptr=newptr;
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
        last=currentptr;
        printf("%4d",currentptr->data);
        currentptr = currentptr->nextptr;
    }
    puts("");
}
void printListBackward( listnodeptr currentptr,int time)
{
    int number[time],count=0;
    while(currentptr!=NULL){
        number[count]=currentptr->data;
        currentptr = currentptr->nextptr;
        count++;
    }
    while(count--)
    {
        printf("%4d",number[count]);
    }
}

