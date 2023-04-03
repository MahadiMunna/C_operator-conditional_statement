#include <stdio.h>

int main(){
    int tk;
    scanf("%d",&tk);

    if(tk >= 100){
        printf("Eat burger");
        if(tk>=200){
            printf("\nAlso eat pizza");
        }
    }
    else if(tk>=50){
        printf("Eat fuchka");
    }
    else{
        printf("I won't eat");
    }
}