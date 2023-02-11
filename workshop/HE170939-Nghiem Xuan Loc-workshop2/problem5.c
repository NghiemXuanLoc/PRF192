#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    char ch;
    int nguyenam = 0, phuam = 0, amkhac = 0;
    do
    {
        ch = getchar();
        ch = toupper(ch);
        if (ch != '\n')
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                if (ch == 'U' || ch == 'E' || ch == 'O' || ch == 'A' || ch == 'I')
                {
                    nguyenam++;
                }
                else
                    phuam++;
            }
            else
                amkhac++;
        }

    } while (ch != '\n');
    printf("so nguyen am: %d\nso phu am: %d\nso am khac: %d\n", nguyenam, phuam, amkhac);

    return 0;
}