/*
Maggie Nguyen
11/9/2024
*/

#include <stdio.h>
#include <string.h>

void censor(char st[]);

int main(void) {
    char line[] = "Love fool foo food";
    char st_censor[100] = "";
    char temp[50];
    int i = 0, j, n;

    n = strlen(line);

    while (i < n) {
        // Handle spaces
        if (line[i] == ' ') {
            strncat_s(st_censor, sizeof(st_censor), " ", 1);
            i++;
            continue;
        }

        // Extract word
        j = 0;
        while (i < n && line[i] != ' ') {
            temp[j++] = line[i++];
        }
        temp[j] = '\0'; // Null terminate the word

        // Censor the word if it matches "foo"
        censor(temp);

        // Concatenate to the result string
        strncat_s(st_censor, sizeof(st_censor), temp, _TRUNCATE);
    }

    printf("Original - %s\n", line);
    printf("Censored - %s\n", st_censor);

    return 0;
}


void censor(char st[]) 
{
    int i;
    int n = strlen(st);

    for (i = 0; i < n - 2; i++) 
    {
        if (st[i] == 'f' && st[i + 1] == 'o' && st[i + 2] == 'o') 
        {
            st[i] = 'x';
            st[i + 1] = 'x';
            st[i + 2] = 'x';
        }
    }
}