


#include <stdio.h>
#include <string.h>


/*. 
  �ncelikle sadece ad�n�z i�in gerekli olan minimum bellek alan�n� malloc ile ay�r�n�z. Daha sonra 
soyad�n�z� da eklemek i�in bu bellek alan�n� realloc ile geni�letiniz. 

*/
int main(){
    
    char ad[]="elif";
    char soyad[]="cihat";
    int *p;
    p=(char *)malloc(4*sizeof(char));
    
    p=(char *)realloc(p,10*sizeof(char));
    printf("%s %s",ad,soyad);
    
    
    
    
    
 return 0;
}
