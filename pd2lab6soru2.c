#include <stdio.h>
#include <string.h>


/*. 
 Ad�n�z soyad�n�z i�in gerekli minimum char bellek alan�n� malloc fonksiyonu kullanarak ay�r�n�z ve 
i�erisine strcpy fonksiyonunu kullanarak ad�n�z� ve soyad�n�z� arada bo�luk b�rakarak yaz�n�z. 

*/
int main(){
    
    char ad[]="elif cihat";
    int *p;
    p=(char *)malloc(11*sizeof(char));
    strcpy(p,ad);
    printf("%s ",p);
    
    
    
 return 0;
}
