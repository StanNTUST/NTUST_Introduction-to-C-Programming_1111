#include<stdio.h>
int main(){
    int a[50][50],b,c=0,d,e,f,dir=1,x=0,y=0;
    scanf("%d",&b);
    for(d=0;d<50;d++)
    {
        for(e=0;e<50;e++)
        {
            a[d][e]=0;
        }
    }
    while(b!=9)
    {
        if(b==1) c=0;
        else if(b==2) c=1;
        else if(b==3)
        {
            dir-=1;
            if(dir==0) dir=4;
        }
        else if(b==4)
        {
            dir+=1;
            if(dir==5) dir=1;
        }
        else if(b==5)
        {
            scanf("%d",&d);
            if(c==1)
            {
                if(dir==1)
                {
                    for(e=0;d>e;e++,x++)
                    {
                        a[x][y]=1;
                    }
                }
                else if(dir==2)
                {
                    for(e=0;d>e;e++,y--)
                    {
                        a[x][y]=1;
                    }
                }
                else if(dir==3)
                {
                    for(e=0;d>e;e++,x--)
                    {
                        a[x][y]=1;
                    }
                }
                else
                {
                    for(e=0;d>e;e++,y++)
                    {
                        a[x][y]=1;
                    }
                }
                a[x][y]=1;
            }
            else
            {
                if(dir==1) x+=d;
                else if(dir==2) y-=d;
                else if(dir==3) x-=d;
                else y+=d;
            }
        }
        else if(b==6)
        {
            for(e=0;e<50;e++)
            {
                for(d=0;d<50;d++)
                {
                    printf("%d",a[d][e]);
                }
                printf("\n");
            }
        }
        scanf("%d",&b);
    }
}
//dir:1->right,2->up,3->left,4->down
//c:1->down,0->up
