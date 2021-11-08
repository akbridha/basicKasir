#include <stdio.h>
#include<stdbool.h>
int main()
{
	int menu, harga , jumlah , total, uang;
	int hargaAyamGoreng = 16000;
	int hargaAyamBakar = 20000;
	int hargaItikGoreng = 25000;
	int hargaEsTeh = 2000;
	int hargaEsJeruk = 5000;
	int bayar[100];
	int x = 1;
	
	bool kar= true ;
	char opsi;

	
	while(kar){
	
		printf("--daftar menu--\n");
		printf("1.ayam goreng : %d\n",hargaAyamGoreng);
		printf("2.ayam bakar  : %d\n",hargaAyamBakar);
		printf("3.itik goreng : %d\n",hargaItikGoreng);
		printf("4.es teh      : %d\n",hargaEsTeh);
		printf("5.es jeruk    : %d\n",hargaEsJeruk);
        printf("silahkan pilih menu yang diinginkan :\n");
        scanf("%d",& menu);
        	switch(menu){
		    case 1:{
				printf("ayam goreng\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaAyamGoreng ,jumlah);
				total= hargaAyamGoreng * jumlah ;
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 2:{
				printf("ayam bakar\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaAyamBakar,jumlah);
				total= hargaAyamBakar* jumlah ;
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 3:{
				printf("ayam itik bakar\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaItikGoreng ,jumlah);
				total= hargaItikGoreng * jumlah ;
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 4:{
				printf("es teh\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaEsTeh ,jumlah);
				total= hargaEsTeh *jumlah ;
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 5:{
				printf("es jeruk\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaEsJeruk ,jumlah);
				total= hargaEsJeruk * jumlah ;
				printf("total pembayaran : %d",total);	
				}
		break ;
				default:{
					printf("kamu tidak memilih apa-apa");
				}		
		}//tutup switch
		
		
	printf("\nmasukan nominal uang anda :");
	scanf("%d",&uang);	
	int Kembalian = uang-total;
	
	if (Kembalian<0){
		printf("maaf uang anda tidak mencukupi");
	}else(Kembalian>0);{
		printf("kembalian anda sebesar %d",Kembalian);
	}
		
//		
//		
//		bayar[x] = total;
//		printf("\nTotal Bayar %d",bayar[x]);
		
		
		printf("\n Ingin lanjut memesan ?[y/t] \n");
		scanf(" %c",&opsi);
		if(opsi == 'y'){
			x++;
			printf("\n lanjut \n");
		}else if(opsi == 't'){
			printf("stop\n");
			kar = false;
		}
		

	}//tutup while
}
