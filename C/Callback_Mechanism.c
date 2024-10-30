#include<stdio.h>

void execute(void (*callback)()){
    callback();
}
void walk(){
    printf("\nWalking\n");
}

void run(){
    printf("\nRunning\n");
}
int main(){     
    execute(walk);
    execute(run);

    void (*ptrFunction[2])() = {walk,run};
    for(int i = 0;i < 3;i++){
        ptrFunction[i]();
    }
    return 0;
}