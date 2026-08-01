#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for(int i = 0; i < len; i++)
        freq[(unsigned char)str[i]]++;

    while(1)
    {
        int max = 0, index = -1;

        for(int i = 0; i < 256; i++)
        {
            if(freq[i] > max)
            {
                max = freq[i];
                index = i;
            }
        }

        if(max == 0)
            break;

        for(int i = 0; i < max; i++)
            printf("%c", index);

        freq[index] = 0;
    }

    return 0;
}
