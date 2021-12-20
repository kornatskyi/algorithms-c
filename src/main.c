#include <stdio.h>

char str[] = "<hello> world\\";
int x = 5;
char c[] = "<>\\";

int main(int argc, char const *argv[])
{   


char result[sizeof(str) * 2];
int k = 0;
    for (int i = 0; i < sizeof(str); i++)
    {

        if(str[i]== c[0] || str[i] == c[1] || str[i] == c[2]) {
                    result[k] = '\\';
                    k++;
        }        
        result[k] = str[i];
        k++;
    }
    

    printf("%s", result);


    printf("\n");
    return 0;
}
