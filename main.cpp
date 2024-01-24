#include <stdio.h>
#include <string.h>

int hitungDiskon(int harga, int tiket, int number) {
    int diskon = 0;

        if (number == 1) { // Express
            if (tiket >= 3) {
                diskon = ((harga * tiket) * 0.1);
            }
        }else if(number == 2){
            if (tiket >= 3) {
                diskon = ((harga * tiket) * 0.1);
            }
        }else{
            // mboh ruwet
        }    

    return diskon;
}

int main() {
    // Arrays for schedules, classes, and prices
    int number, harga;
    char expressTime[][20] = {"06.00", "13.00", "18.00"};
    char bisnisTime[][20] = {"07.00", "10.00", "14.00", "17.00", "19.00"};
    char ekonomiTime[][20] = {"06.30", "09.30", "11.30", "15.00", "18.00"};
    char kereta[10];

    // Access and print each string in the array
    printf("Selmat Datang Di Aplikasi Pemesanan Tiket Kereta\n");
    printf("Silahkan pilih kereta mana yang ingin anda pesan\n");
    printf("1. Express\n");
    printf("2. Bisnis\n");
    printf("3. Ekonomi\n");
    printf("pilih (nomor):");
    scanf("%d", &number);

    int choice, tiket, totalHarga ;
    char jadwal[20];

    if(number == 1) {
        harga = 150000;
        strcpy(kereta, "Express");
        printf("Jadwal Kereta %s\n", kereta);
        for (int i = 0; i < sizeof(expressTime) / sizeof(expressTime[0]); i++) {
            printf("%d. %s\n", i+1 , expressTime[i]);
        };
        printf("pilih jadwal (nomor):");
        scanf("%d", &choice);
        strcpy(jadwal, expressTime[choice-1]);
        printf("mau pesan berapa tiket :");
        scanf("%d", &tiket);
    }else if(number == 2){
        harga = 80000;
        strcpy(kereta, "Bisnis");
        printf("Jadwal Kereta %s\n", kereta);
        for (int i = 0; i < sizeof(bisnisTime) / sizeof(bisnisTime[0]); i++) {
            printf("%d. %s\n", i+1 , bisnisTime[i]);
        };
        printf("pilih jadwal (nomor):");
        scanf("%d", &choice);
        strcpy(jadwal, bisnisTime[choice-1]);
        printf("mau pesan berapa tiket :");
        scanf("%d", &tiket);
        printf("%s", jadwal);
    }else if(number == 3){
        harga = 5000;
        strcpy(kereta, "Ekonomi");
        printf("Jadwal Kereta %s\n", kereta);
        for (int i = 0; i < sizeof(ekonomiTime) / sizeof(ekonomiTime[0]); i++) {
            printf("%d. %s\n", i+1 , ekonomiTime[i]);
        };
        printf("pilih jadwal (nomor):");
        scanf("%d", &choice);
        strcpy(jadwal, ekonomiTime[choice-1]);
        printf("mau pesan berapa tiket :");
        scanf("%d", &tiket);
        printf("%s", jadwal);
    }

    printf("\n Detail Pembayaran \n");
    printf("Kelas Tiket : %s \n", kereta);
    printf("Jadwal Kereta : %s \n", jadwal);
    printf("Jumlah Tiket : %i \n", tiket);
    printf("Harga: %i \n", harga);
    printf("Diskon : %d\n",hitungDiskon(harga, tiket, number));
    printf("Total Pembayaran (harga x tiket - diskon) = %d \n", (harga*tiket) - hitungDiskon(harga, tiket, number)); 
    printf("Pembayaran total sudah mencakup potongan. \n\n");
    
    return 0;
}


