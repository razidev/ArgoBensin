# ArgoBensin

Deskripsi Program
Program yang kami buat adalah “Argo Bensin” yang inputannya beli bensin, isi tangki, jenis-jenis bensin, dan jenis pembelian. Inputan beli bensin merupakan inputan memasuki input jenis-jenis bensin, inputan jenis-jenis bensin ini terdiri dari Pertamax, Premium, & Solar, dan saat kita memlilih salah satu dari jenis bensin itu kita memasuki jenis pembelian. Saat memasuki jenis pembelian ada 2 pilihan yang terdiri beli berdasarkan: Nominal & Liter, jika beli berdasarkan nominal maka input yang dimasukan adalah nominal uang dibagi harga bensin yang sudah ditetapkan outputnya adalah jumlah liter, namun jika beli berdasarkan liter maka liter di kali harga bensin yang sudah di tetapkan dan outputnya adalah banyaknya rupiah yang dibayar. Selain dari itu di menu utama ada inputan lagi berupa lihat isi masing-masing tangki dari jenis bensin & inputan tambah isi masing-masing tangki dalam satuan liter, di sini user dapat memilih dahulu mana tangki dari 3 jenis bensin yang akan ditambahakan baru di input lagi berapa banyak liter yang akan di isi.

Sintaks Program :
1.	File Header
File header merupakan kumpulan deklarasi dari berbagai fungsi yang dibutuhkan oleh program baik itu untuk standar input atau ouput maupun sebagai syntax.  Adapun file header yang kami gunakan pada program ini adalah:
•	#include<stdio.h>
Merupakan file header yang beririsi fungsi-fungsi yang digunakan sebagai standar input output operasi dalam bahasa c. Adapun fungsi yang ada di dalam file header adalah sebagai berikut: printf(), puts(), putchar(), scanf(), gets(). Adapun yang kami gunakan dalam program ini hanya beberapa saja dengan rincian sebagai berikut:
o	printf()

o	scanf()

•	#include<conio.h>
Merupakan file header yang berfungsi untuk menampilkan hasil antarmuka kepada user. Adapun fungsi yang ada pada header tersebut adalah: getch(), getche(), clrscr(). Pada pembuatana program ini kami hampir menggunakan seluruh fungsi tersebut dengan rincian sebagai berikut:
o	getch()
•	#define pertamax 10000, #define premium 6500, #define solar 6500
Merupakn file header yang berfungsi untuk menetapkan nilai dari harga masing-masing bensin

2.	Deskripsi variabel Dan Fungsi
•	int menu_utama(int pilihan)
fungsi ini digunakan untuk menampilkan menu utama, atau halaman awal program yang berupa pilihan menu untuk menghitung pembelian bensin, isi. tambah tangki dan exit

•	int menu_bensin(int pilihan)
Pada fungsi ini, user akan ditampilkan pilihan untuk pembelian bensin, dalam menu ini pilihannya adalah jenis bensin. Jenis bensin yang dapat dipilih adalah premium, pertamax, solar, dan kembali ke menu utama.

•	int jenis_beli()
Setelah user memilih jenis bensin yang akan dibeli, maka selanjutnya akan masuk ke fungsi jenis beli, jenis beli yang dimaksud adalah sesuai dengan keinginan user, terkadang pembeli ingin membeli bensin dengan satuan uang, maka pilih 1. Uang, dengan begitu fungsi akan menghitung jumlah uang yang dimasukkan untuk ditampilkan dalam satuan liter. Begitupun sebaliknya, jika pembeli ingin membeli dengan satuan liter, maka fungsi akan menghitung berapa liter bensin yang dibeli untuk ditampilkan dalam jumlah uang yang harus dibayar.

•	void uang(int bensin, int HARGA, int *TANGKI)
Fungsi ini untuk pembeli jika ingin membeli bensin dalam satuan uang yang dibayarkan, maka fungsi akan menampilkan jumlah liter bensin yang dibeli. User akan memasukkan jumlah uang maka fungsi akan menghitung berapa liter bensin yang dibeli. Fungsi ini ada yang dideklarasikan dengan menggunakan parameter by reference. Yang artinya ketika berjalan ia akan mengambil nilai yang disimpan di alamat lain.

•	void liter(int bensin, int HARGA, int *TANGKI)
Fungsi ini digunakan untuk pembeli jika ingin membeli dalam satuan liter bensin yang akan dibeli, user akan memasukkan jumlah liter bensin yang ingin dibeli maka fungsi akan menghitung lalu menampilkan jumlah uang yang harus dibayarkan.  Fungsi ini  ada yang dideklarasikan dengan menggunakan parameter by reference. Yang artinya ketika berjalan ia akan mengambil nilai yang disimpan di alamat lain.

•	int harga_bensin (int bensin)
deklasi di atas merupakan deklasrasi terhadap jenis bensin untuk perhitungan dalam rumus liter dan uang. Fungsi ini dideklarasikan dengan tipe int yang berati fungsi ini merupakan fungsi dengan nilai balik yang bertipe int.

•	void cetak_tangki(int *TANGKI)
Fungsi ini bertujuan untuk menampilkan sisa tangki, Fungsi ini  ada yang dideklarasikan dengan menggunakan parameter by reference. Yang artinya ketika berjalan ia akan mengambil nilai yang disimpan di alamat lain.


•	void isi_tangki(int bensin, int *TANGKI)
Fungsi ini bertujuan untuk menambahkan isi tangki yang telah berkurang. Fungsi ini menggunakan parameter by reference karena menghitung isi di dalam variabel tangki, sebelumnya pada fungsi menghitung jumlah pembelian bensin baik dalam liter menggunakan *TANGKI -= jumlah_liter; ini digunakan untuk mengurangi isi tangki SPBU jika terjadi pembelian. Dalam fungsi ini terdapat *TANGKI += tambah_tangki;  ini digunakan untuk menambah isi tangki yang telah berkurang, kemudian fungsi akan menampilkan isi bensin di dalam tangki dalam liter.
