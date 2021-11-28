#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check_vowel(char ch)
{
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
        return 1;
    else
        return 0;
}

int main()
{
    char c[100],t[100],d=0;
    FILE *f=fopen("text1.txt","r");
    if(f == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fscanf(f, "%[^\n]", c);
    for(int i = 0; c[i] != '\0'; i++) {
        if(check_vowel(c[i]) == 0) {       // If not a vowel
            t[d] = c[i];
            d++;
        }
    }
    t[d] = '\0';
    strcpy(c, t);
    fclose(f);
    FILE *f2;
    f2 = fopen("text2.txt", "w");

    if (f2 == NULL) {
        printf("Error!");
        exit(1);
    }

    fprintf(f2, "%s", c);
    fclose(f2);
    return 0;
}