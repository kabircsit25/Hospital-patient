#include<stdio.h>
struct hosp_read
{
    char name[50];
    int age;
    char address[50];
    char condition[50];
    int ward_number;
};  
int main()
{
    int i;
     struct hosp_read hpp[24];
    FILE *fp;
    fp=fopen("hosp_write.txt","r");
    printf("Details of 24 patients:\n");
    printf("Name \tAge \tAddress\t Condition\t Ward_Number\n");
     for(i=0;i<24;i++){
        fscanf(fp,"%s %d %s %s %d",&hpp[i].name,&hpp[i].age,&hpp[i].address,&hpp[i].condition,&hpp[i].ward_number);
        printf("%s \t%d \t%s \t%s \t%d\n",hpp[i].name,hpp[i].age,hpp[i].address,hpp[i].condition,hpp[i].ward_number);
    }
    fclose(fp);
    return 0;
}