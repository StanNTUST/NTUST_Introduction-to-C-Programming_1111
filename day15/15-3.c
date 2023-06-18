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
void insert_first(listnodeptr *sptr,int number);
void insert_end(listnodeptr *sptr,int number);
void insert_key(listnodeptr *sptr,int number,int value);
void delete(listnodeptr *sptr,int number);
void displayList(listnodeptr currentptr);
int main(){
    int choose,number,value;
    listnodeptr startptr=NULL;
    scanf("%d",&choose);
    while(choose!=-1){
        scanf("%d",&number);
        switch(choose){
            case 1:
                insert_first(&startptr,number);
                break;
            case 2:
                insert_end(&startptr,number);
                break;
            case 3:
                scanf("%d",&value);
                insert_key(&startptr,number,value);
                break;
            case 4:
                delete(&startptr,number);
                break;
        }
        displayList(startptr);
        scanf("%d",&choose);
    }
}
void insert_first(listnodeptr *sptr,int number)
{
    if(*sptr==NULL){
        listnodeptr newptr=malloc(sizeof(listnode));
        newptr->data=number;
        newptr->prevptr=NULL;
        newptr->nextptr=*sptr;
        *sptr=newptr;
    }
    else{
        listnodeptr newptr=malloc(sizeof(listnode));
        newptr->data=number;
        newptr->nextptr =*sptr;
        (*sptr)->prevptr=newptr->nextptr;
        *sptr =newptr;
    }
}
void insert_end(listnodeptr *sptr,int number)
{
    listnodeptr newptr=malloc(sizeof(listnode));
    newptr->data=number;
    newptr->nextptr=NULL;
    newptr->prevptr=NULL;
    listnodeptr prevoiusptr =NULL;
    listnodeptr currentptr=*sptr;
    while(currentptr !=NULL){
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
void insert_key(listnodeptr *sptr,int number,int value)
{
    listnodeptr newptr=malloc(sizeof(listnode));
    newptr->data=value;
    newptr->nextptr=NULL;
    newptr->prevptr=NULL;
    listnodeptr prevoiusptr =NULL;
    listnodeptr currentptr=*sptr;
    while(currentptr !=NULL && number !=currentptr->data){
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
void delete(listnodeptr *sptr,int value)
{
    if(value ==(*sptr)->data){
        listnodeptr tempptr =*sptr;
        *sptr=(*sptr)->nextptr;
        free(tempptr);
        return value;
    }
    else{
        listnodeptr previousptr=*sptr;
        listnodeptr currentptr =(*sptr) ->nextptr;
        while(currentptr!=NULL && currentptr->data!=value){
            previousptr=currentptr;
            currentptr =currentptr->nextptr;
        }
        if(currentptr!=NULL)
        {
            listnodeptr tempptr=currentptr;
            previousptr->nextptr=currentptr->nextptr;
            free(tempptr);
            return value;
        }
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
