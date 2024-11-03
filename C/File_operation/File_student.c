#include<stdio.h>
#include<stdlib.h>
struct Student{
    int id;
    char name[50];
    int age;
};

void writeTofile(const char *fileName){
    FILE *file = fopen(fileName,"wb");
    if(file == NULL){
        printf("Error in opening for writting purpose");
    }
    struct Student student;
    char choice;
    do{
        printf("Enter student details:\n");
        printf("Student ID:");
        scanf("%d",&student.id);

        printf("Student Name:");
        scanf("%s",&student.name);

        printf("Student Age:");
        scanf("%d",&student.age);

        fwrite(&student,sizeof(struct Student),1,file);
        printf("\n Do you want to continue ,press y for yes or no for no::");
        getchar();
        choice = getchar();
    }
    while( choice == 'y' || choice == 'Y');
    fclose(file);
}

void readFromFile(const char *fileName){
    FILE *file = fopen(fileName,"rb");
    if(file == NULL){
        printf("Error in opening for writting purpose");
        return;
    }
    struct Student student;
    printf("\nTransflowee Students List:");

    while(fread(&student,sizeof(struct Student),1,file) == 1){
        printf("\n%d\t%s\t%d",student.id,student.name,student.age);
    }
    fclose(file);
}

int main(){
    const char *fileName = "operation.dat";
    writeTofile(fileName);
    readFromFile(fileName);
    return 0;
}