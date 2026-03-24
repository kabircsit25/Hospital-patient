#include <stdio.h>
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
    int i, max_index=0, min_index=0;
    struct hosp_read hpp[24];
    FILE *fp;
    fp = fopen("hosp_write.txt", "r");
    for (i = 0; i < 24; i++)
    {
        fscanf(fp, "%s %d %s %s %s", &hpp[i].name, &hpp[i].age, &hpp[i].address, &hpp[i].condition, &hpp[i].ward_name);
        if (hpp[i].age > hpp[max_index].age)
        {
            max_index = i;
        }
        if (hpp[i].age < hpp[min_index].age)
        {
            min_index = i;
        }
    }
    printf("Oldest Patient with age %d: %s\n", hpp[max_index].age, hpp[max_index].name);
    printf("Youngest Patient with age %d: %s\n", hpp[min_index].age, hpp[min_index].name);
    fclose(fp);
    return 0;
}