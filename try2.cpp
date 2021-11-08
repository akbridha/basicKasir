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
	int totalTransaksi;
	
	bool kar= true ;
	char opsi;

	
	while(kar){
	
		printf("--Daftar menu--\n");
		printf("1.ayam goreng : %d\n",hargaAyamGoreng);
		printf("2.ayam bakar  : %d\n",hargaAyamBakar);
		printf("3.itik goreng : %d\n",hargaItikGoreng);
		printf("4.es teh      : %d\n",hargaEsTeh);
		printf("5.es jeruk    : %d\n",hargaEsJeruk);
        printf("\nSilahkan pilih menu yang diinginkan :\n");
		        printf("Menu ke - %d :\n",x);
        scanf("%d",& menu);
        	switch(menu){
		    case 1:{
				printf("\nAnda Memilih ayam goreng\n");
				printf("--------------------------\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaAyamGoreng ,jumlah);
				total= hargaAyamGoreng * jumlah ;
				printf("--------------------------\n");
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 2:{
				printf("\nAnda Memilih ayam bakar\n");
				printf("--------------------------\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaAyamBakar,jumlah);
				total= hargaAyamBakar * jumlah ;
				printf("--------------------------\n");
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 3:{
				printf("\nAnda Memilih ayam itik bakar\n");
				printf("--------------------------\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaItikGoreng ,jumlah);
				total= hargaItikGoreng * jumlah ;
				printf("--------------------------\n");
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 4:{
				printf("\nAnda Memilih es teh\n");
				printf("--------------------------\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaEsTeh ,jumlah);
				total= hargaEsTeh *jumlah ;
				printf("--------------------------\n");
				printf("total pembayaran : %d",total);	
				}
		break ;
		case 5:{
				printf("\nAnda Memilih es jeruk\n");
				printf("--------------------------\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaEsJeruk ,jumlah);
				total= hargaEsJeruk * jumlah ;
				printf("--------------------------\n");
				printf("total pembayaran : %d",total);	
				}
		break ;
				default:{
					printf("kamu tidak memilih apa-apa");
				}		
		}//tutup switch
		
		
		
		bayar[x] = total;
	
//		
		
		
		printf("\n Ingin memesan lagi ?[y/t] \n");
		scanf(" %c",&opsi);
		if(opsi == 'y'){
			x++;
			printf("\n Transaksi lanjut \n");
		}else if(opsi == 't'){
			printf("Transaksi Selesai\n");
			kar = false;
		}
		

	}//tutup while

	
	
	
	if(x < 2){
		totalTransaksi = total;
		}else
		{
			
			for(int i=2; i <=x; i++){
				printf("Ke %d \n",i);
				totalTransaksi = bayar[i-1] + bayar[i];
			}
		}
		
		
		
	printf("\nTotal Transaksi = %d",totalTransaksi);

	printf("\nmasukan nominal uang anda :");
	scanf("%d",&uang);	
	int Kembalian = uang-totalTransaksi;
	
	if (Kembalian<0){
		printf("maaf uang anda tidak mencukupi");
		
	}else(Kembalian>0);{
		printf("kembalian anda sebesar %d",Kembalian);
	}
		printf("\nSemoga Bertemu Kembali \n");
}
