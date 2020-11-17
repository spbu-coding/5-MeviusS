#include<stdio.h>
#include<string.h>

void input(){
    char buffer[5];
    gets(buffer);
    fflush(stdout);
}

void other(){
    printf("Dodik \n");
    fflush(stdout);
    exit(0);
}

int main(){
    printf("%p \n", &other);
    input();
    printf("Normal output \n");

    return 0;
}
