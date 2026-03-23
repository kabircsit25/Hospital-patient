#include <stdio.h>
struct hosp_write
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
     struct hosp_write hpp[24];
    FILE *fp;
    fp=fopen("hosp_write.txt","w");
    printf("Enter the details of 24 patients:\n");
    printf("Name \t Age \t Address \t Condition \t Ward_Number\n");
     for(i=0;i<24;i++){
        scanf("%s %d %s %s %d",&hpp[i].name,&hpp[i].age,&hpp[i].address,&hpp[i].condition,&hpp[i].ward_number);
        fprintf(fp,"%s \t %d \t %s \t %s \t %d\n",hpp[i].name,hpp[i].age,hpp[i].address,hpp[i].condition,hpp[i].ward_number);
    }
    fclose(fp);
    return 0;
}
