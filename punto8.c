#include <stdio.h>

int main(){

    for(int f=0; f<=sizeof(/*(Macro)*/);f++){
        for(int c=0; c<=sizeof(/*(Macro)*/);c++){
            printf("%d",/*(Macro[f])*/);
            printf("%d",/*(Macro[c])*/);
        }
    }
    return 0;
}
