#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a,b,c,d,e;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	a=a+4;b=b+4;c=c+4;d=d+4;e=e+4;    
	if(a>122) a-=26;
    if(b>122) b-=26;
    if(c>122) c-=26;
    if(d>122) d-=26;
    if(e>122) e-=26;
    

    
    printf("%c%c%c%c%c",a,b,c,d,e);
	
	return 0;
}
