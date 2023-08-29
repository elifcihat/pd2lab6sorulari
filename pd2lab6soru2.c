#include <stdio.h>
#include <string.h>


/*. 
 Adýnýz soyadýnýz için gerekli minimum char bellek alanýný malloc fonksiyonu kullanarak ayýrýnýz ve 
içerisine strcpy fonksiyonunu kullanarak adýnýzý ve soyadýnýzý arada boþluk býrakarak yazýnýz. 

*/
int main(){
    
    char ad[]="elif cihat";
    int *p;
    p=(char *)malloc(11*sizeof(char));
    strcpy(p,ad);
    printf("%s ",p);
    
    
    
 return 0;
}
