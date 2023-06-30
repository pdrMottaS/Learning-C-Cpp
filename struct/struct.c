#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 100

struct Dog{
    char name[MAX_LENGTH];
    int age;
    float weight;
};

int main(){
    struct Dog myDog;
    strncpy(myDog.name,"Fido",MAX_LENGTH-1);
    myDog.name[MAX_LENGTH-1] = '\0';
    myDog.age = 10;
    myDog.weight = 30.40;

    printf("Name: %s\n",myDog.name);
    printf("Age: %d\n",myDog.age);
    printf("Weight: %f",myDog.weight);
    
    return 0;
}
