//PROGRAM TO REMOVE ALL OCCURRENCES OF A LETTER FROM STRING


#include <stdio.h>

int main()
{
    char s1[10]="Hello",s2[10];
    char ch='l';
    
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        if(s1[i]!=ch)
        {
            s2[j]=s1[i];
            j++;
        }
        i++;
    }
    s2[j]='\0';
    
    printf("\nOriginal string : %s",s1);
    printf("\nString after removing '%c' : %s",ch,s2);
    return 0;
}
