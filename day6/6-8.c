#include<stdio.h>
#include<math.h>
long isPrime(long a);
int main(){
    long a=2,b,c=0,f;
    while(a<=31)
    {
        b=isPrime(a);
        if(b!=0)
        {
            long e=pow(2,b)-1;
            f=isPrime(e);
            if(f!=0)
                printf("%ld %ld\n",b,e);
        }
        a++;
    }
}
long isPrime(long a){
    long c,d=0;

        for(c=1;sqrt(a)>=c;c+=2)
        {
            if(a%c==0)
            {
                d++;
            }
            if(d>1)
                break;
        }
        if(d==1)
        {
            return a;
        }
        else
        {
            return 0;
        }

}
