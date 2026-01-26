#include <stdio.h>

int main() 
{
    char s;
    char n[100];
    char m[100];
    
    scanf(" %c", &s);         
    scanf("%s", &n);          
    scanf(" %[^\n]%*c", &m);   
    
    printf("%c\n", s); 
    printf("%s\n", n);
    printf("%s\n", m); 
    return 0;
}
