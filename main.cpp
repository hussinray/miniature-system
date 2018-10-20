#include <stdio.h>
#include <string.h>

void strings(const char *s1, const char *s2, char *out)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
    *out++=*s1++;
    *out++=',';
    *out++=*s2++;
    *out='\0';
}
}

int main(void)
{
    char set1[50];
    char set2[50];
    char out[100];
    if (fgets(set1, sizeof(set1), stdin) != 0 &&
        fgets(set2, sizeof(set2), stdin) != 0)
    {
        strings(set1, set2, out);
        printf("The union of the two sets: [%s]", out);
    }
}
