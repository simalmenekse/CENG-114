#include <stdio.h>
#include <string.h>
#define MAX 100 


int countword(char * str, char * toSearch);

int main()
{
    char str[MAX];
    char toSearch[MAX];
    int count;
    
    gets(toSearch);
    gets(str);
    count = countword(str, toSearch);

    printf("%d",count);

    return 0;
}


int countword(char * str, char * toSearch)
{
    int i, j, found, counter;
    int stringLen, searchLen;

    stringLen = strlen(str); 
    searchLen = strlen(toSearch); 

    counter = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            counter++;
        }
    }

    return counter;
}