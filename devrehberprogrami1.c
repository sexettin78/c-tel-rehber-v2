#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
struct rehber{
	char ad[20];
	char soyad[20];
	char telno[11];
	char bosluk[3];
}kayit;

int main(){
	FILE *rdosya;
	FILE *dosya;
	rdosya = fopen("rehber.txt","ab+");
	dosya = fopen("rehber.txt","r");
	int sec=0,in=0;
	char yazi[10000];
	int telno; char ad[20],soyad[20];
	while(in<1){
	
	printf("[1]-Kayit Ekle\n");
	printf("[2]-Kayit Listele\n");
	printf("[3]-Cikis\nSecim yapiniz:");	
	scanf("%d",&sec);
	if(sec==1){
		printf("\nad:");
		scanf("%s",&kayit.ad);
		
		printf("soyad:");
		scanf("%s",&kayit.soyad);

		
		printf("tel no:");
		scanf("%s",&kayit.telno);
		fwrite(&kayit,sizeof(kayit),1,rdosya);
		fprintf(rdosya,"\n");}
	
	if(sec==2){
 	while(! feof(dosya) ){
    putchar(fgetc(dosya));}}
  
	if(sec==3){in++;}
}
fclose(rdosya);
fclose(dosya);
}
