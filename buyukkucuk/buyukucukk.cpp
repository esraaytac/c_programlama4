#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*klavyeden - girilinceye kadar girilen sayýlarýn en küçük ilk ikisini ve en büyük ilk ikisini bulan program*/
int main() {
	setlocale(LC_ALL, "turkish");
	
	int number, maxnum, minnum;
	
	printf("bir sayýyý giriniz  (negatif deðerde program durur): \n ");
	scanf("%d", &number);
	
	maxnum = number;
	minnum = number;
	
	while (number>0){
		
		
	if (number>maxnum){
	
	maxnum= number;
}

if (number<minnum){
	
	minnum=number;
}
	
	printf("bir sayýyý giriniz  (negatif deðerde program durur): \n");
	scanf("%d", &number);
	
		
}

	printf("bulunan en küçük sayý: %d \n" ,minnum);
	printf("bulunan en büyük sayý : %d \n", maxnum);
	




	
	
	
	
	
	
	
	return 0;
}
