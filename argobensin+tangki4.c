#include <stdio.h>
#include <conio.h>
#define pertamax 10000
#define premium 6500
#define solar 6500

int menu_utama(int);
int menu_bensin (int);
void liter(int, int, int *);
void uang(int, int, int *);
//void penentu_bensin(int *);
void isi_tangki(int, int *);
void cetak_tangki(int *);

int TANGKI[3]={5000, 2500, 1000};

int main(){
	int pilihan=0, bensin=0, HARGA=0;
	int jenis;
	do{
		pilihan=menu_utama(pilihan);
		if(pilihan==1){
			do{
				bensin=menu_bensin(pilihan);
				if(bensin<4){
					HARGA = harga_bensin(bensin);
					jenis=jenis_beli();
					if(jenis==1){
						uang(bensin, HARGA, TANGKI);
					}else if(jenis==2){
						liter(bensin, HARGA, TANGKI);
					}
				}else if((bensin==0)||(bensin>4)){
					printf("Terjadi kesalahan. Silahkan ulangi kembali.\n");
					getch();
				}
			}while(bensin!=4);
		}else if(pilihan==2){			
			cetak_tangki(TANGKI);
		}else if(pilihan==3){
			do{
				bensin=menu_bensin(pilihan);
				if((bensin>4)||(bensin==0)){
					printf("Terjadi kesalahan. Silahkan ulangi kembali.\n");
					getch();
				}
			}while((bensin>4)||(bensin==0));
			isi_tangki(bensin, TANGKI);
		}
	}while(pilihan!=4);
	printf("--------------------------------------------");
	printf("\n");
	printf("| %25s", "Terima Kasih");
	printf("%15s |\n", "");
	printf("|%33s", "telah memakai aplikasi ini");
	printf("%8s |\n", "");
	printf("--------------------------------------------");
	printf("Razi Aziz Syahputro 5235131563\n");
	return 0;
}

int menu_utama(int pilihan){
	system("cls");
	printf("----------------------------------------------------------------\n");
	printf("| %33s", "MENU UTAMA");
	printf("%27s |\n", "");
	printf("----------------------------------------------------------------");
	printf("\n1. beli bensin \n2. Lihat Isi Tangki\n3. Tambah Isi tangki \n4. exit \n Masukkan pilihan anda: ");
	scanf(" %d", &pilihan);
	return pilihan;
}

int menu_bensin(int pilihan){
	int tipe;
	system("cls");
	printf("----------------------------------------------------------------\n");
	printf("| %33s", "JENIS-JENIS BENSIN");
	printf("%27s |\n", "");
	printf("----------------------------------------------------------------");
	printf("\n1. Pertamax \n2. Premium \n3. solar \n4. kembali ke menu utama \nMasukan pilihan anda: ");
	scanf("%d", &pilihan);
	return pilihan;
}

int jenis_beli(){
	int jenis;
	system("cls");
	printf("beli berdasarkan: \n1. Uang \n2. Liter \nmasukan pilihan anda: "); scanf("%d", &jenis);
	return jenis;
}

void uang(int bensin, int HARGA, int *TANGKI){
	float jumlah_liter;
	float duit;
	printf("masukan banyaknya uang: "); scanf("%f", &duit);
	jumlah_liter= duit/HARGA;
	//printf("%d,", TANGKI[bensin-1]);
	TANGKI[bensin-1] -= jumlah_liter;
	printf("jumlah liter %.2f ", jumlah_liter);
	getch();
}

void liter(int bensin, int HARGA, int *TANGKI){
	float jumlah_uang;
	float ltr;
	//do{
		printf("berapa liter yang dibeli? "); scanf("%f", &ltr);
		if(ltr <= TANGKI[bensin-1]){
			jumlah_uang= ltr * HARGA;
			TANGKI[bensin-1] -= ltr;
			printf("bayarnya : Rp %.f", jumlah_uang);
			getch();
		}else{
			printf("mohon maaf anda membeli melebihi batas tangki\n");
			getch();
		}
//	}while(ltr <= TANGKI[bensin-1]);
}

int harga_bensin (int bensin){
	if (bensin==1){
		return pertamax;
	}else if(bensin==2){
		return premium;
	}else if(bensin==3){
		return solar;
	}
}

void cetak_tangki(int *TANGKI){
	printf("Isi TANGKI pertamax adalah : %d\n", TANGKI[0]);
	printf("Isi TANGKI premium adalah : %d\n", TANGKI[1]);
	printf("Isi TANGKI solar adalah : %d\n", TANGKI[2]);
	getch();
}

void isi_tangki(int bensin, int *TANGKI){
	int tambah_tangki=0;
	cetak_tangki(TANGKI);
	printf("Masukkan banyaknya bensin yang anda pilih (liter) : ");
	scanf(" %d", &tambah_tangki);
	TANGKI[bensin-1] += tambah_tangki;
	cetak_tangki(TANGKI);
	getch();
}
