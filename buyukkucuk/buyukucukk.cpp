#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*klavyeden - girilinceye kadar girilen say�lar�n en k���k ilk ikisini ve en b�y�k ilk ikisini bulan program*/
int main() {
	setlocale(LC_ALL, "turkish");
	
	int number, maxnum, minnum;
	
	printf("bir say�y� giriniz  (negatif de�erde program durur): \n ");
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
	
	printf("bir say�y� giriniz  (negatif de�erde program durur): \n");
	scanf("%d", &number);
	
		
}

	printf("bulunan en k���k say�: %d \n" ,minnum);
	printf("bulunan en b�y�k say� : %d \n", maxnum);
	




	
	
	
	
	
	
	
	return 0;
}
