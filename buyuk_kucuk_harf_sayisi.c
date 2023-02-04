#include <stdio.h>
#include <string.h>
// klavyeden girilen metindeki küçük ve büyük harf sayısını bul 

int main()

{
  
 char metin[200];
 
 int KucukHarfSayaci = 0,BuyukHarfSayaci = 0;
 
 int i = 0;
 
 printf("kucuk ve buyuk harflerden olusan metin girin: ");
 gets(metin);
 
 while(metin[i] != '\0')
 {
  if(metin[i] >= 'A' && metin[i] <= 'Z')
  {
    BuyukHarfSayaci++;
  }
  
  else if(metin[i] >= 'a' && metin[i] <= 'z')
  {
    KucukHarfSayaci++;
  }
     
  i++;     
 }
 
 printf("\ngirdiginiz metinde %d tane buyuk harf %d tane kucuk harf var.",BuyukHarfSayaci,KucukHarfSayaci);
 
 return 0;
 
}
