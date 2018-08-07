#include <stdio.h>

void helloworld(char *);

int main(){
    char who[7] = {'w','o','r','l','d','\0'};
    helloworld(who);
    return 0;
}

void helloworld(char *who){
    printf("Hello %s!", who);
}