#include <stdio.h>
int main()
{
int total = 0, ch;
while( (ch = getchar()) != EOF ) {
total++;
}
printf( "\n%d caracteres digitados\n", total );
}