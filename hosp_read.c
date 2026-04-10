#include<stdio.h>
struct hosp_write{
    char name[50];
    int age;
    char address[100];
    char condition[100];
    char ward[20];
};
int main()
{
    struct hosp_write hpp;
    FILE *fp;
    fp=fopen("hospital.txt","r");
    if(fp==NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    printf("Details of the patients : \n");
    printf("Name \t Age \t Address \t Condition \t ward \n");
    while(!feof(fp))
    {
        fscanf(fp,"%s %d %s %s %s",&hpp.name,&hpp.age,&hpp.address,&hpp.condition,&hpp.ward);
        printf("%s \t %d \t %s \t %s \t %s\n",hpp.name,hpp.age,hpp.address,hpp.condition,hpp.ward);
    }
    fclose(fp);
    return 0;
}