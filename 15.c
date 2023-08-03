#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count;
    char data[20], stfudata[30];
    printf("Enter data:");
    scanf("%s", data);
    i = 0;
    j = 0;
    count = 0;
    while (data[i] != '\0')
    {
        stfudata[j] = data[i];
        if (data[i] == '1')
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count == 5)
        {
            stfudata[++j] = '0';
            count = 0;
        }
        i++;
        j++;
    }
    printf("\nthe original data %s", data);
    printf("\nthe stuffed data %s", stfudata);
}