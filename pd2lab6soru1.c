#include <stdio.h>
#include <string.h>


/*. 
. Toplam eleman say�s�n� kullan�c�dan alarak bu say� kadar bellekten calloc fonksiyonunu kullanarak 
gerekli yeri al�n�z. Ay�rd���n�z bu bellek alan�na eleman say�s� kadar de�eri kullan�c�dan al�n�z. Daha 
sonra girilen en b�y�k de�eri tan�mlad���n�z i�aret�i de�i�keni kullanarak bulunuz ve ekrana 
yazd�r�n�z.

*/
int main(){
    
    int elemansayisi;
    int *p;
    int enb;
    printf("kac eleman girmek istersiniz: ");
    scanf("%d",&elemansayisi);
    p=(int *)calloc(elemansayisi,sizeof(int));
    
    int i;
    for(i=0;i<elemansayisi;i++)
    {
    	printf("lutfen %d. elemani girin: ",i+1);
    	scanf("%d",&(*(p+i)));
	}
	
	enb=*p;
	for(i=0;i<elemansayisi;i++)
	{
		
		if(enb<*(p+i))
		{
			enb=*(p+i);
		}
	}
	printf("en buyuk sayim:  %d",enb);
	

    
    
    
    
 return 0;
}
