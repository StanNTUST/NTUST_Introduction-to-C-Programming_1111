#include<stdio.h>
int main(){
    struct example {
        char gender;
        int age;
        char *name;
    };
    struct example sample1={ 'M',25,"John" };
    printf( "%c\n", sample1.gender );
    printf( "%d\n", sample1.age );
    printf( "%s\n", sample1.name );
    struct example *samplePtr;
    samplePtr = &sample1;
    printf( "%c\n", samplePtr->gender );
    printf( "%d\n", samplePtr->age );
    printf( "%s", samplePtr->name );
}
