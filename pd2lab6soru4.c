#include <stdio.h>
#include <string.h>


/*. 
  . Klavyeden alýnan iki tane karakter dizisini (String) birleþtirip ekrana yazdýran programý pointer 
kullanarak C dilinde yazýnýz.
*/
int main(){
    
    char dizi1[100];
    char dizi2[100];
    char *p1,*p2;
    
    printf("bir kelime girin: ");
    gets(dizi1);
    
    printf("ikinci kelime girin: ");
    gets(dizi2);
    
    printf("birlestirilmeden once ki hali: %s     %s\n",dizi1,dizi2);
    
    int n=strlen(dizi1);
    int m=strlen(dizi2);
    //p1=dizi1;
    //p2=dizi2;
    for(p1=dizi1+n,p2=dizi2;p2<dizi2+m;p1++,p2++)
    {
    	*p1=*p2;
	}
	printf("birlesmeden sonra\n");
	int i;
	for(i=0;i<(n+m);i++)
	{
		printf("%c",*(dizi1+i));
	}
    
    
    
    
 return 0;
}
