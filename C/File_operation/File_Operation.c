#include<stdio.h>
int main(){
    //FILE *file = fopen("operation.txt","r");
    FILE *pfile = fopen("operation.txt","w");
    if( pfile != NULL){
        fprintf(pfile,"Manasi Ajinkya Tambade!!\n");
        fclose(pfile);
    }

    //Read Content From File
    char buffer[150];
    pfile = fopen("operation.txt","r");
    if( pfile != NULL){
        fgets(buffer,sizeof(buffer),pfile);
        printf("%s",buffer);
        fclose(pfile);
    }
    return 0;
}