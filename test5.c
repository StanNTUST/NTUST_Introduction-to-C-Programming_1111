#include<stdio.h>
#include<stdlib.h>
struct listNode{
    char data;
    struct listNode *nextptr;
};

typedef struct listNode listnode;
typedef listnode *listnodeptr;

void insert(listnodeptr *sptr,char value);
char delete(listnodeptr *sptr,char value);
int isempty(listnodeptr sptr);
void printlist(listnodeptr currentptr);
void instructions(void);

int main(){
    listnodeptr startptr=NULL;
    char item;

    instructions();
    unsigned int choice;
    printf("%s","? ");
    scanf("%u",&choice);
    while(choice!=3){
        switch(choice){
            case 1:
                printf("%s","Enter a charactor ");
                scanf("\n%c",&item);
                insert(&startptr,item);
                printlist(startptr);
                break;
            case 2:
                if(!isempty(startptr)){
                    printf("%s","Enter charactor to be deleted: ");
                    scanf("\n%c",&item);
                    if(delete(&startptr,item)){
                        printf("%c deleted.\n",item);
                        printlist(startptr);
                    }
                    else{
                        printf("%c not found\n",item);
                    }
                }
                else{
                    puts("list is empty");
                }
                break;
            default:
                puts("invalid choice.\n");
                instructions();
                break;
        }
        printf("%s"," ?");
        scanf("%u",&choice);
    }
    printf("End of run");
}
void instructions(void)
{
    puts("Enter your choice:\n"
         "  1 to insert an element into the list.\n"
         "  2 to delete an element from the list.\n"
         "  3 to end");
}
void insert(listnodeptr *sptr,char value)
{
    listnodeptr newptr=malloc(sizeof(listnode));

    if(newptr !=NULL){
        newptr->data=value;
        newptr->nextptr=NULL;

        listnodeptr prevoiusptr =NULL;
        listnodeptr currentptr=*sptr;

        while(currentptr !=NULL && value >currentptr->data){
            prevoiusptr=currentptr;
            currentptr=currentptr->nextptr;
        }

        if(prevoiusptr ==NULL){
            newptr->nextptr =*sptr;
            *sptr =newptr;
        }
        else{
            prevoiusptr->nextptr=newptr;
            newptr->nextptr=currentptr;
        }
    }
    else{
        printf("%c not inserted.No memory available.\n",value);
    }
}
char delete(listnodeptr *sptr,char value)
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
int isempty(listnodeptr sptr)
{
    return sptr =NULL;
}
void printlist(listnodeptr currentptr)
{
     if(isempty(currentptr)){
        ("list is empty.\n");
     }
     else{
        puts("the list is:");

        while(currentptr!=NULL){
            printf("%c --> ",currentptr->data);
            currentptr = currentptr->nextptr;
        }
        puts("NULL\n");
     }
}
