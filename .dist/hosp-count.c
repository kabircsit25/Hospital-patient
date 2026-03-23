#include <stdio.h>
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
    int i, w1 = 0, w2 = 0, w3 = 0, w4 = 0, w5 = 0, w6 = 0, w7 = 0;
    struct hosp_read hpp[24];
    FILE *fp;
    fp = fopen("hosp_write.txt","r");
    for (i = 0; i < 24; i++)
    {
        fscanf(fp,"%s %d %s %s %d", &hpp[i].name, &hpp[i].age, &hpp[i].address, &hpp[i].condition, &hpp[i].ward_number);
        if (hpp[i].ward_number == 1)
        {
            w1++;
        }
        else if (hpp[i].ward_number == 2)
        {
            w2++;
        }
        else if (hpp[i].ward_number == 3)
        {
            w3++;
        }
        else if (hpp[i].ward_number == 4)
        {
            w4++;
        }
        else if (hpp[i].ward_number == 5)
        {
            w5++;
        }
        else if (hpp[i].ward_number == 6)
        {
            w6++;
        }
        else if (hpp[i].ward_number == 7)
        {
            w7++;
        }

    }

    fclose(fp);
    printf("Ward Number \t Number of Patients\n"); 
    printf("1 \t\t %d\n", w1);
    printf("2 \t\t %d\n", w2);     
    printf("3 \t\t %d\n", w3);
    printf("4 \t\t %d\n", w4);
    printf("5 \t\t %d\n", w5);
    printf("6 \t\t %d\n", w6);
    printf("7 \t\t %d\n", w7); 
    return 0;
}
