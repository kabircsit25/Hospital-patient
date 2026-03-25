#include<stdio.h>
struct hosp_read
{
    char name[50];
    int age;
    char address[50];
    char condition[50];
    char ward_name[50];
};
int main()
{
    int i;
    struct hosp_read hpp[24];
    FILE *fp;
    fp=fopen("hosp_write.txt","r");
    for(i=0;i<24;i++)
    {
        fscanf(fp,"%s %d %s %s %s" ,&hpp[i].name,&hpp[i].age,&hpp[i].address,&hpp[i].condition,&hpp[i].ward_name);
        if(strcmp(hpp[i].condition,"Critical") == 0)
        {
            printf("%s \t %d \t %s \t %s \t %s\n",hpp[i].name,hpp[i].age,hpp[i].address,hpp[i].condition,hpp[i].ward_name);
        } 
    }
    fclose(fp);
    return 0;
}