#include <stdio.h>
#include<stdbool.h>
int main()
{
	int menu, harga , jumlah , total, uang,jumlahmenu,iterasimenu=1;
	int hargaAyamGoreng = 16000;
	int hargaAyamBakar = 20000;
	int hargaItikGoreng = 25000;
	int hargaEsTeh = 2000;
	int hargaEsJeruk = 5000;
	int bayar[100];
	int i = 1;
	int totalTransaksi;
	
	bool kar= true ;
	char opsi;

	
	
	
		printf("--Daftar menu warung ahu am--\n");
		printf("1.ayam goreng : %d\n",hargaAyamGoreng);
		printf("2.ayam bakar  : %d\n",hargaAyamBakar);
		printf("3.itik goreng : %d\n",hargaItikGoreng);
		printf("4.es teh      : %d\n",hargaEsTeh);
		printf("5.es jeruk    : %d\n",hargaEsJeruk);
		printf("pilih jumlah menu: ");
		scanf("%d",&jumlahmenu);
//		while(kar){
		for(int i=1;i<=jumlahmenu;i++){
		printf("\nSilahkan pilih menu yang diinginkan :\n");
		printf("Menu ke - %d :\n",i);
        scanf("%d",& menu);
       	switch(menu){
		case 1:{
				printf("ayam goreng\n");
				printf("jumlah pesanan ");
		  		scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaAyamGoreng ,jumlah);
				total= hargaAyamGoreng * jumlah ;
				printf("total pembayaran : %d",total);}
		break ;
		case 2:{
				printf("ayam bakar\n");
				printf("jumlah pesanan ");
  				scanf("%d",&jumlah);
				printf("harga = %d x Jumlah = %d \n",hargaAyamBakar,jumlah);
				total= hargaAyamBakar * jumlah ;
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
			bayar[iterasimenu] = total;
			iterasimenu ++;
	}//tutup fo11r
		
			if(jumlahmenu< 2){
		totalTransaksi = total;
		}else
		{
			int totalfor = total;
			for(int i=2; i<=jumlahmenu; i++){
				totalfor = totalfor + bayar [i]; 
			}
			totalTransaksi = totalfor;
		}
		printf("\n ================= \n Total Transaksi = %d",totalTransaksi);

	printf("\nmasukan nominal uang anda :");
	scanf("%d",&uang);	
	int Kembalian = uang-totalTransaksi;
	
	if (Kembalian<0){
		printf("maaf uang anda tidak mencukupi");
		
	}else(Kembalian>0);{
		printf("kembalian anda sebesar %d",Kembalian);
	}
		
		
//tutup while
		printf("\nSemoga Bertemu Kembali \n");

}
