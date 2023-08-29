


#include <stdio.h>
#include <string.h>


/*. 
  Öncelikle sadece adýnýz için gerekli olan minimum bellek alanýný malloc ile ayýrýnýz. Daha sonra 
soyadýnýzý da eklemek için bu bellek alanýný realloc ile geniþletiniz. 

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
