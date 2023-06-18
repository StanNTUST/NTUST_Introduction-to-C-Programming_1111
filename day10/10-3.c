#include<stdio.h>
int main(){
    int b=1,c,d,x,y,game=9,end=0;
    char a[3][3],status='X';
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            a[c][d]=' ';
        }
    }
    printf("-------------\n");
    printf("| %c | %c | %c |\n",a[0][0],a[0][1],a[0][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n",a[1][0],a[1][1],a[1][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n",a[2][0],a[2][1],a[2][2]);
    printf("-------------\n");
    printf("\n");
    while(game--)
    {
        scanf("%d",&y);
        scanf("%d",&x);
        if(status=='X')
        {
            a[y][x]='X';
            printf("Enter a row for player X:\n");
            printf("Enter a column for player X:\n");
            status='O';
        }
        else
        {
            a[y][x]='O';
            printf("Enter a row for player O:\n");
            printf("Enter a column for player O:\n");
            status='X';
        }
        printf("-------------\n");
        printf("| %c | %c | %c |\n",a[0][0],a[0][1],a[0][2]);
        printf("-------------\n");
        printf("| %c | %c | %c |\n",a[1][0],a[1][1],a[1][2]);
        printf("-------------\n");
        printf("| %c | %c | %c |\n",a[2][0],a[2][1],a[2][2]);
        printf("-------------\n");
        printf("\n");
        if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]!=' ')
        {
            end=1;
            if(a[0][0]=='O') printf("O player won.");
            if(a[0][0]=='X') printf("X player won.");
            break;
        }
        else if(a[2][0]==a[1][1]&&a[1][1]==a[0][2]&&a[2][0]!=' ')
        {
            end=1;
            if(a[2][0]=='O') printf("O player won.");
            if(a[2][0]=='X') printf("X player won.");
            break;
        }
        else if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][0]!=' ')
        {
            end=1;
            if(a[0][0]=='O') printf("O player won.");
            if(a[0][0]=='X') printf("X player won.");
            break;
        }
        else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][0]!=' ')
        {
            end=1;
            if(a[1][0]=='O') printf("O player won.");
            if(a[1][0]=='X') printf("X player won.");
            break;
        }
        else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][0]!=' ')
        {
            end=1;
            if(a[2][0]=='O') printf("O player won.");
            if(a[2][0]=='X') printf("X player won.");
            break;
        }
        else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[0][0]!=' ')
        {
            end=1;
            if(a[0][0]=='O') printf("O player won.");
            if(a[0][0]=='X') printf("X player won.");
            break;
        }
        else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[0][1]!=' ')
        {
            end=1;
            if(a[0][1]=='O') printf("O player won.");
            if(a[0][1]=='X') printf("X player won.");
            break;
        }
        else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[0][2]!=' ')
        {
            end=1;
            if(a[0][2]=='O') printf("O player won.");
            if(a[0][2]=='X') printf("X player won.");
            break;
        }
    }
    if(end==0) printf("draw.");
}
//x:1,y:2
//c:1->X,2->O
