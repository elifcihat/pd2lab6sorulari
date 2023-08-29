#include <stdio.h>
#include <string.h>


/*. 
. Toplam eleman sayýsýný kullanýcýdan alarak bu sayý kadar bellekten calloc fonksiyonunu kullanarak 
gerekli yeri alýnýz. Ayýrdýðýnýz bu bellek alanýna eleman sayýsý kadar deðeri kullanýcýdan alýnýz. Daha 
sonra girilen en büyük deðeri tanýmladýðýnýz iþaretçi deðiþkeni kullanarak bulunuz ve ekrana 
yazdýrýnýz.

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
