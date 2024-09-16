#include<stdio.h>
int main(void){
    int var;
    printf("Size of int=%u\n",sizeof(int));
    printf("Size of float=%u\n",sizeof(float));
    printf("Size of char=%u\n",sizeof(char));
    printf("Size of integer constant=%u\n",sizeof(55));
    printf("Size of var=%u\n",sizeof(var));

    return 0;
}