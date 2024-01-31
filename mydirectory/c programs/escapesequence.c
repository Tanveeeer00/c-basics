#include <stdio.h>
int main()
// escape sequence
{
    // tab
    printf("hello \t\tworld\n");
    // backspaces
    printf("hello\b world\n");
    // newline
    printf("hello world\n");    
    // inserts a carriage returns
    printf("hello to my\r world \n");    
    // inserts a form feed
    printf("hello world\f\n"); 
    // inserts a single and double quote character
    printf("welcome to\' the c programming\"\n");
    // insert a backslash character
    printf("hello world\\c programming\n");
    // alarm or beep
    printf("when tanveer name comes then make sound\a\n");
    // to add vertical tab character
    printf(" hello world \v\n");
    // question mark
    printf("who are you\?\n");
    // null
    printf("hello world\0\n");
    return 0;
}