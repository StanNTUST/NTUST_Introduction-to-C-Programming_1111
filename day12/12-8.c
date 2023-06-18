#include <stdio.h>
#include <string.h>


int main() {
    char article[5][10]={{"the"},{"a"},{"one"},{"some"},{"any"}};
    char noun[5][10]={{"boy"},{"girl"},{"dog"},{"town"},{"car"}};
    char verb[5][10]={{"drove"},{"jumped"},{"ran"},{"walked"},{"skipped"}};
    char prepositions [5][10]={{"to"},{"from"},{"over"},{"under"},{"on"}};
    char begin[10];
    int a=20,b,c,d,e,f,g;
    while(a--)
    {
        b=rand()%5;
        c=rand()%5;
        d=rand()%5;
        e=rand()%5;
        f=rand()%5;
        g=rand()%5;
        strcpy(begin,article[b]);
        begin[0]=begin[0]-32;
        printf("%s %s %s %s %s %s.\n",begin,noun[c],verb[d],prepositions[e],article[f],noun[g]);
    }
}
