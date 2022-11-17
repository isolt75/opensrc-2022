#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"copy.h"

int main(){

    char* str1 = "Iot Hello!";

    char* str2 = copy(str1);

    printf("%s\n",str2);
    free(str2);



    return 0;
}