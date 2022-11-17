#include<string.h>
#include<stdlib.h>
char* copy(char * origin){
    int len = strlen(origin) + 1;

    char* dest = malloc(sizeof(char)*len);

    for(int i=0; i<strlen(origin); i++){
        dest[i] = origin[i];
    }

    return dest;
}