//soal 1

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	char huruf[100];
//	scanf("%[^\n]", huruf); getchar();
//	strrev(huruf);
//	
//	printf("%s\n", huruf);
//	
//	return 0;
//}

////soal 2
//#include<stdio.h>
//
//int main(){
//	int speed;
//	float hour;
//	int jarak;
//	scanf("%d %f", &speed, &hour);
//	
//	jarak = speed * hour;
//	printf("%d\n", jarak);
//	
//	return 0;
//}

//soal 3
//#include<stdio.h>
//
//int main(){
//	int t;
//	int a,b,c,d,e;
//	
//	scanf("%d", &t); getchar();
//	for(int i=0;i<t;i++){
//		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//		printf("Case #%d: %d %d %d %d %d %d %d %d %d\n", i+1, a,b,c,d,e,d,c,b,a);
//
//	}
//	
//	return 0;
//}


////soal 4
//#include<stdio.h>
//
//int main(){
//	int t;
//	int x;
//	
//	scanf("%d", &t); getchar();
//	
//	for(int i=0;i<t;i++){
//		scanf("%d", &x); getchar();
//		printf("Case #%d: ", i+1);
//			
//		if(x % 2 == 0){
//			printf("bilangan genap\n", x);
//		}
//		else if(x % 2 == 1){
//			printf("bilangan ganjil\n", x);		
//		}
//	}
//	
//	return 0;
//}


////soal 5
//#include<stdio.h>
//
//int main(){
//	int t;
//	int angka;
//	
//	scanf("%d", &t);
//	for(int i=0;i<t;i++){
//		scanf("%d", &angka);
//		
//		int hasil;
//		hasil = angka * 2;
//		printf("Case #%d: %d\n", i+1, hasil);
//	}
//	
//	return 0;
//}


//soal 6
//#include<stdio.h>
//
//int main(){
//	int a,b,c,d,e,total;
//	float hasil;
//	int choose;
//	scanf("%d", &choose);
//	
//	switch(choose){
//		case 1 : 
//			printf("Masukkan nilai : ", a);
//			scanf("%d", &a);
//			if(a%2 == 0){
//				printf("Bilangan genap\n");
//			}
//			else{
//				printf("Bilangan ganjil\n");
//			}
//			break;
//			
//		case 2 :
//			printf("Masukkan nilai : ", b);
//			scanf("%d", &b);
//			
//			total = b+10;
//			printf("Jumlah : %d\n", total);
//			
//			break;
//			
//		case 3 :
//			printf("Masukkan nilai : ", c);
//			scanf("%d", &c);
//			printf("Masukkan nilai : ", d);
//			scanf("%d", &d);
//			printf("Masukkan nilai : ", e);
//			scanf("%d", &e);
//			
//			hasil = (c*d)/e;
//			printf("Hasil : %.2f\n", hasil);
//			
//			break;
//	}
//	return 0;
//}


//soal 7
//#include<stdio.h>
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	
//	printf("%d\n", t);
//	
//	return 0;
//}


//soal 8
//#include<stdio.h>
//
//int main(){
//	int a,b,c;
//	scanf("%d %d %d", &a, &b, &c);
//	
//	int hasil;
//	hasil = (a*b) + c;
//	printf("%d\n", hasil);
//	
//	return 0;
//}


//soal 9
//#include<stdio.h>
//
//int main(){
//	int a,b,c,d,e,f,g;
//	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
//	printf("%d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, f, e, d);
//	
//	return 0;
//	
//}


//soal 10
//#include<stdio.h>
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	
//	for(int i=0;i<t;i++){
//		printf("Jumlah loopingnya adalah looping sebanyak %d kali\n", t);
//	}
//	
//	return 0;
//}


//soal 11
//#include<stdio.h>
//
//int main(){
//	int t,a,b,c;
//	scanf("%d", &t);
//	
//	for(int i=0;i<t;i++){
//		scanf("%d %d %d", &a, &b, &c);
//		
//		double total;
//		total = (a+b+c) * a - b / 3;
//		printf("Case #%d : %.3lf\n", i+1, total);
//	}
//	
//	return 0;
//}


//soal 12
//#include<stdio.h>
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	
//	for(int i=0;i<t;i++){
//		for(int j=0;j<t;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//soal 13
//#include<stdio.h>
//
//int main(){
//	int t,n;
//	scanf("%d", &t);
//	
//	for(int i=0;i<t;i++){
//		scanf("%d", &n);
//		printf("Case #%d: ", i+1);
//		
//		if(n % 2 == 0){
//			printf("%d adalah bilangan genap\n", n);
//		}
//		else{
//			printf("%d adalah bilangan ganjil\n", n);
//		}
//	}
//	
//	return 0;
//}



//soal 14
//#include<stdio.h>
//int main(){
//	int z;
//	scanf("%d", &z);
//	int banyakInteger = 0;
//	
//	while(z>=1){
//		printf("integer ke - %d\n", z);
//		z--;
//		banyakInteger++;
//		
//	}
//	printf("Jumlah Integer dari 122 ke 1 adalah %d\n", banyakInteger);
//	return 0;	
//}


//soal 15
//#include<stdio.h>
//
//int main(){
//	int t;
//	int angka;
//	
//	scanf("%d", &t);
//	for(int i=0;i<t;i++){
//		scanf("%d", &angka);
//		
//		int hasil;
//		hasil = angka * 2;
//		printf("Case #%d: %d\n", i+1, hasil);
//	}
//	
//	return 0;
//}


//soal 16
//#include<stdio.h>
//#include<stdlib.h>


//int main(){
//	int t;
//	long long int angka;
//	
//	scanf("%d", &t);  getchar();
//	for(int i=0;i<t;i++){
//		scanf("%lld", &angka); getchar();
//		
//		long long int nilai;
//		printf("Case #%d: ", i+1);
//			while(angka !=0){
//				nilai = angka % 10;
//				angka /=10;
//				printf("%lld", nilai);
//			}
//		printf("\n");	
//	}
//	
//	return 0;
//}


//soal 17
//#include<stdio.h>
//
//int main(){
//	int t;
//	int angka;
//	
//	scanf("%d", &t);
//	for(int i=0;i<t;i++){
//		scanf("%d", &angka);
//		
//		int hasil;
//		hasil = angka * 2;
//		printf("Case #%d: %d\n", i+1, hasil);
//	}
//	
//	return 0;
//}
