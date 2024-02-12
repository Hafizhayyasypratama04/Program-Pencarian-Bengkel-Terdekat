#include <stdio.h>
#include <math.h>

int pilihan;

struct Bengkel {
    char nama[100];
    double latitude;
    double longitude;
    char jenis[20];
    char merk[20];

};

int main() {
    printf("\t============================================================\n");
    printf("\t|                                                          |\n");
    printf("\t|        Selamat datang di web Pencarian Bengkel Terdekat  |\n");
    printf("\t|                       KELOMPOK 8                         |\n");
    printf("\t============================================================\n");

    // Array untuk menyimpan data lokasi bengkel
  struct Bengkel bengkel[28] = {
      // Bengkel motor standard
    {"Bengkel Ahass Cempaka (Resmi)", 1.4, 3.3, "Motor Standard"},
    {"Bengkel Star Jaya Abadi (Tidak Resmi)", 1.4, 2.0, "MotorStandard"},
    {"Bengkel Eko Service Cempaka (Tidak Resmi)", 1.1, 2.0, "Motor Standard"},
    {"Bengkel Cempaka Motor (Tidak Resmi)", 0.4, 3.0, "Motor Standard"},
    {"Bengkel Motor Sigit (Tidak Resmi)", 9.4, 1.0, "Motor Standard"},

    // Bengkel motor listrik
    {"Bengkel Etrenz servis (Tidak Resmi)", 1.2, 2.0, "Motor Listrik"},
    {"Bengkel Seli Center (Resmi)", 2.0, 1.0, "Motor Listrik"},
    {"Bengkel Sami E-bike (Tidak Resmi)", 5.0, 3.0, "Motor Listrik"},
    {"Bengkel Gesits (Resmi)", 4.0, 1.0, "Motor Listrik"},


    //Bengkel Mobil Standard
    {"Bengkel Utama ahong (Tidak Resmi)", 1.9, 4.1, "Mobil Standard"},
    {"Bengkel Sampurna jaya (Tidak Resmi)", 2.1, 1.1, "Mobil Standard"},
    {"Bengkel Berkah Cempaka (Tidak Resmi)", 0.1, 0.3, "Mobil Standard"},
    {"Bengkel Auto 2000 Toyota (Resmi)", 1.4, 1.1, "Mobil Standard"},
    {"Bengkel OtoXpert Rawasari (Resmi)", 2.4, 0.5, "Mobil Standard"},

    //Bengkel Mobil Listrik
    {"Bengkel Mobil Listrik Hyundai (Resmi)", 1.2, 2.2, "Mobil Listrik"},
    {"Bengkel Wuling Arista (Resmi)", 1.5, 6.5, "Mobil Listrik"},
    {"Bengkel Nissan Listrik (Resmi)", 0.5, 3.9, "Mobil Listrik"},
    {"Bengkel Misubishi (Resmi)", 3.5, 1.5, "Mobil Listrik"},

    //Bengkel Mobil Hybrid
    {"Bengkel Hybrid Kembangan (Tidak Resmi)", 1.3, 2.9, "Mobil Hybrid"},
    {"Bengkel Hybrid Suzuki (Resmi)", 0.3, 2.1, "Mobil Hybrid"},
    {"Bengkel Toyota Hybrid (Resmi)", 0.9, 1.9, "Mobil Hybrid"},

    //Bengkel Sepeda Listrik
    {"Bengkel Selis (Resmi)", 1.9, 0.2, "Sepeda Listrik"},
    {"Bengkel Uwinfly (Resmi)", 1.5, 3.1, "Sepeda Listrik"},
    {"Bengkel Viar (Resmi)", 9.2, 0.1, "Sepeda Listrik"},


    //Bengkel Sepeda Standard
    {"Bengkel Pak senen(Tidak Resmi)", 1.2, 2.2, "Sepeda Standard"},
    {"Bengkel Sepeda Phonix(Resmi)", 1.5, 6.5, "Sepeda Standard"},
    {"Bengkel Akong jaya bike(Tidak Resmi)" ,0.2, 1.6, "Sepeda Standard"},
    {"Bengkel Sepeda Endy jaya(Tidak Resmi)", 0.8, 1.9, "Sepeda Standard"}
};
  // Array untuk menyimpan data bengkel berdasarkan jenis kendaraan
    struct Bengkel motorStandard[5];  // Jumlah bengkel motor standard
    struct Bengkel motorListrik[4];   // Jumlah bengkel motor listrik
    struct Bengkel mobilStandard[5];  // Jumlah bengkel mobil standard
    struct Bengkel mobilListrik[4];   // Jumlah bengkel mobil listrik
    struct Bengkel mobilHybrid[3];   // Jumlah bengkel mobil listrik
    struct Bengkel sepedaListrik[3];   // Jumlah bengkel mobil listrik
    struct Bengkel sepedaStandard[4];   // Jumlah bengkel mobil listrik

    int motorStandardCount = 0;
    int motorListrikCount = 0;
    int mobilStandardCount = 0;
    int mobilListrikCount = 0;
    int mobilHybridCount = 0;
    int sepedaStandardCount = 0;
    int sepedaListrikCount = 0;

        for (int i = 0; i < 40; i++) {

        if (strcmp(bengkel[i].jenis, "Motor Standard") == 0) {

            strcpy(motorStandard[motorStandardCount].nama, bengkel[i].nama);
            motorStandard[motorStandardCount].latitude = bengkel[i].latitude;
            motorStandard[motorStandardCount].longitude = bengkel[i].longitude;
            strcpy(motorStandard[motorStandardCount].jenis, bengkel[i].jenis);
            strcpy(motorStandard[motorStandardCount].merk, bengkel[i].merk);
            motorStandardCount++;}


        else if (strcmp(bengkel[i].jenis, "Motor Listrik") == 0){
            strcpy(motorListrik[motorListrikCount].nama, bengkel[i].nama);
            motorListrik[motorListrikCount].latitude = bengkel[i].latitude;
            motorListrik[motorListrikCount].longitude = bengkel[i].longitude;
            strcpy(motorListrik[motorListrikCount].jenis, bengkel[i].jenis);
            strcpy(motorListrik[motorListrikCount].merk, bengkel[i].merk);
            motorListrikCount++;}

        else if (strcmp(bengkel[i].jenis, "Mobil Standard") == 0) {
            strcpy(mobilStandard[mobilStandardCount].nama, bengkel[i].nama);
            mobilStandard[mobilStandardCount].latitude = bengkel[i].latitude;
            mobilStandard[mobilStandardCount].longitude = bengkel[i].longitude;
            strcpy(mobilStandard[mobilStandardCount].jenis, bengkel[i].jenis);
            strcpy(mobilStandard[mobilStandardCount].merk, bengkel[i].merk);
            mobilStandardCount++;}


        else if (strcmp(bengkel[i].jenis, "Mobil Listrik") == 0) {
            strcpy(mobilListrik[mobilListrikCount].nama, bengkel[i].nama);
            mobilListrik[mobilListrikCount].latitude = bengkel[i].latitude;
            mobilListrik[mobilListrikCount].longitude = bengkel[i].longitude;
            strcpy(mobilListrik[mobilListrikCount].jenis, bengkel[i].jenis);
            strcpy(mobilListrik[mobilListrikCount].merk, bengkel[i].merk);
            mobilListrikCount++;}

        else if (strcmp(bengkel[i].jenis, "Mobil Hybrid") == 0) {
            strcpy(mobilHybrid[mobilHybridCount].nama, bengkel[i].nama);
            mobilHybrid[mobilHybridCount].latitude = bengkel[i].latitude;
            mobilHybrid[mobilHybridCount].longitude = bengkel[i].longitude;
            strcpy(mobilHybrid[mobilHybridCount].jenis, bengkel[i].jenis);
            strcpy(mobilHybrid[mobilHybridCount].merk, bengkel[i].merk);
            mobilHybridCount++;}

        else if (strcmp(bengkel[i].jenis, "Sepeda Listrik") == 0) {
            strcpy(sepedaListrik[sepedaListrikCount].nama, bengkel[i].nama);
            sepedaListrik[sepedaListrikCount].latitude = bengkel[i].latitude;
            sepedaListrik[sepedaListrikCount].longitude = bengkel[i].longitude;
            strcpy(sepedaListrik[sepedaListrikCount].jenis, bengkel[i].jenis);
            strcpy(sepedaListrik[sepedaListrikCount].merk, bengkel[i].merk);
            sepedaListrikCount++;}

        else if (strcmp(bengkel[i].jenis, "Sepeda Standard") == 0) {
            strcpy(sepedaStandard[sepedaStandardCount].nama, bengkel[i].nama);
            sepedaStandard[sepedaStandardCount].latitude = bengkel[i].latitude;
            sepedaStandard[sepedaStandardCount].longitude = bengkel[i].longitude;
            strcpy(sepedaStandard[sepedaStandardCount].jenis, bengkel[i].jenis);
            strcpy(sepedaStandard[sepedaStandardCount].merk, bengkel[i].merk);
            sepedaStandardCount++;}}

        do {
        printf("\n\t Silakan pilih opsi menu \n");
        printf("\t 1. Service Motor (Standar)\n");
        printf("\t 2. Service Motor Listrik\n");
        printf("\t 3. Service Mobil (Standar)\n");
        printf("\t 4. Service Mobil Listrik\n");
        printf("\t 5. Service Mobil Hybrid\n");
        printf("\t 6. Service Sepeda (Listrik)\n");
        printf("\t 7. Service Sepeda (standar)\n");
        printf("\t 8. Keluar\n\n");

        printf("\t Masukkan opsi nomor yang anda butuhkan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: // Service Motor standard
            {printf("\t Masukkan merk motor standard: ");
                char merkMotorStandard[20];
                scanf("%s", merkMotorStandard);


            double latitude, longitude;
            printf("\t Masukkan latitude posisi Anda: ");
            scanf("%lf", &latitude);
            printf("\t Masukkan longitude posisi Anda: ");
            scanf("%lf", &longitude);

            double jarakTerdekat = INFINITY;
            int indexTerdekat;
            for (int i = 0; i < 5; i++) {
            double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
            if (jarak < jarakTerdekat) {
            jarakTerdekat = jarak;
            indexTerdekat = i;}}

    // Output Bengkel Motor standard terdekat
     printf("\n======================================== *** REKOMENDASI *** ======================================================\n");
    printf("\n\t Bengkel terdekat untuk Service Motor Standard adalah %s dengan jarak %.2f km \n", bengkel[indexTerdekat].nama, jarakTerdekat);
    printf("\t Nama Bengkel: %-50s \n", bengkel[indexTerdekat].nama);
    printf("\t Merk Motor: %-20s    \n", merkMotorStandard);
    printf("\t Jenis Service: %-20s \n", bengkel[indexTerdekat].jenis);
    printf("========================================================================================================================\n");

    // Daftar bengkel motor standard terdekat lainnya
    printf("\n\t ***** Daftar Bengkel Motor Standard terdekat lainnya adalah:  ******\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        if (i == indexTerdekat) continue;
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        printf("\t Nama Bengkel: %s\n", bengkel[i].nama);
        printf("\t Jarak: %.2f km\n", jarak );
        printf("------------------------------------------------------------------------------------------------------------------------\n");}

    break;}
        case 2: // Service Motor listrik
        {
            printf("\t Masukkan merk motor listrik: ");
            char merkMotorListrik[20];
            scanf("%s", merkMotorListrik);

            double latitude, longitude;

            printf("\t Masukkan latitude posisi Anda: ");
            scanf("%lf", &latitude);

            printf("\t Masukkan longitude posisi Anda: ");
            scanf("%lf", &longitude);

            double jarakTerdekat = INFINITY;
            int indexTerdekat;
            for (int i = 5; i < 9; i+=1) {
            double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
            if (jarak < jarakTerdekat) {
            jarakTerdekat = jarak;
            indexTerdekat = i;}}

    // Output bengkel motor listrik terdekat

    printf("\n======================================== *** REKOMENDASI *** ======================================================\n");
    printf("\n\t Bengkel terdekat untuk Service Motor Listrik adalah %s dengan jarak %.2f km \n", bengkel[indexTerdekat].nama, jarakTerdekat);
    printf("\t Nama Bengkel: %-50s \n", bengkel[indexTerdekat].nama);
    printf("\t Merk Motor: %-20s    \n", merkMotorListrik);
    printf("\t Jenis Service: %-20s \n\n", bengkel[indexTerdekat].jenis);
    printf("===================================================================================================================\n");

    // Output Bengkel Motor Listrik terdekat lainnya
   printf("\n\t ***** Daftar Bengkel Motor Listrik terdekat lainnya adalah:  ******\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 5; i < 9; i+=1) {
        if (i == indexTerdekat) continue;  // Skip the nearest workshop
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        printf("\t Nama Bengkel: %s\n", bengkel[i].nama);
        printf("\t Jarak: %.2f km\n", jarak );
        printf("-------------------------------------------------------------------------------------------------------------------\n");}
        break;}

        case 3: // Service Mobil Standard
        {
            printf("\t Masukkan merk mobil standard: ");
            char MerkMobilstandard[20];
            scanf("%s", MerkMobilstandard);

            double latitude, longitude;

            printf("\t Masukkan latitude posisi Anda: ");
            scanf("%lf", &latitude);

            printf("\t Masukkan longitude posisi Anda: ");
            scanf("%lf", &longitude);

                // Mencari bengkel terdekat untuk service mobil standard
            double jarakTerdekat = INFINITY;
        int indexTerdekat;
        for (int i = 9; i < 14; i+=1) {
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        if (jarak < jarakTerdekat) {
            jarakTerdekat = jarak;
            indexTerdekat = i;}}

     printf("\n======================================== *** REKOMENDASI *** ======================================================\n");
    printf("\n\t Bengkel terdekat untuk Service Mobil Standard adalah %s dengan jarak %.2f km \n", bengkel[indexTerdekat].nama, jarakTerdekat);
    printf("\t Nama Bengkel: %-50s \n", bengkel[indexTerdekat].nama);
    printf("\t Merk Mobil: %-20s    \n", MerkMobilstandard);
    printf("\t Jenis Service: %-20s \n\n", bengkel[indexTerdekat].jenis);
    printf("===================================================================================================================\n");

    // Daftar bengkel Mobil standard lainnya
    printf("\n\t ***** Daftar Bengkel Mobil Standard terdekat lainnya adalah:  ******\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 9; i < 14; i+=1) {
        if (i == indexTerdekat) continue;  // Skip the nearest workshop
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        printf("\t Nama Bengkel: %s\n", bengkel[i].nama);
        printf("\t Jarak: %.2f km\n", jarak );
        printf("-------------------------------------------------------------------------------------------------------------------\n");}
        break;}
                case 4: // Service Mobil Listrik
             {
                printf("\t Masukkan merk mobil Listrik: ");
                char MerkMobilListrik[20];
                scanf("%s", MerkMobilListrik);

                double latitude, longitude;

                printf("\t Masukkan latitude posisi Anda: ");
                scanf("%lf", &latitude);

                printf("\t Masukkan longitude posisi Anda: ");
                scanf("%lf", &longitude);

                // Mencari bengkel terdekat untuk service mobil standard
                double jarakTerdekat = INFINITY;
                int indexTerdekat;
                for (int i = 14; i < 18; i+=1) {
                double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
                if (jarak < jarakTerdekat) {
                jarakTerdekat = jarak;
                indexTerdekat = i;}}

    // Output the nearest workshop information
    printf("\n======================================== *** REKOMENDASI *** ======================================================\n");
    printf("\n\t Bengkel terdekat untuk Service Mobil Listrik adalah %s dengan jarak %.2f km \n", bengkel[indexTerdekat].nama, jarakTerdekat);
    printf("\t Nama Bengkel: %-50s \n", bengkel[indexTerdekat].nama);
    printf("\t Merk Mobil: %-20s    \n", MerkMobilListrik);
    printf("\t Jenis Service: %-20s \n\n", bengkel[indexTerdekat].jenis);
    printf("===================================================================================================================\n");

    // Daftar terdekat Mobil Listrik
     printf("\n\t ***** Daftar Bengkel Mobil Listrik terdekat lainnya adalah:  ******\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 14; i < 18; i+=1) {
        if (i == indexTerdekat) continue;  // Skip the nearest workshop
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        printf("\t Nama Bengkel: %s\n", bengkel[i].nama);
        printf("\t Jarak: %.2f km\n", jarak );
        printf("-------------------------------------------------------------------------------------------------------------------\n");}
        break;}
                 case 5: // Service Mobil hybrid
                {
                printf("\t Masukkan Merk Mobil Hybrid: ");
                char MerkMobilHybrid[20];
                scanf("%s", MerkMobilHybrid);

                double latitude, longitude;

                printf("\t Masukkan latitude posisi Anda: ");
                scanf("%lf", &latitude);

                printf("\t Masukkan longitude posisi Anda: ");
                scanf("%lf", &longitude);

                // Mencari bengkel terdekat untuk service mobil Hybrid
                double jarakTerdekat = INFINITY;
                int indexTerdekat;
                for (int i = 18; i < 21; i+=1) {
                double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
                if (jarak < jarakTerdekat) {
                jarakTerdekat = jarak;
                indexTerdekat = i;}}

    printf("\n======================================== *** REKOMENDASI *** ======================================================\n");
    printf("\n\t Bengkel terdekat untuk Service Mobil Hybrid adalah %s dengan jarak %.2f km \n", bengkel[indexTerdekat].nama, jarakTerdekat);
    printf("\t Nama Bengkel: %-50s \n", bengkel[indexTerdekat].nama);
    printf("\t Merk Mobil: %-20s    \n", MerkMobilHybrid);
    printf("\t Jenis Service: %-20s \n\n", bengkel[indexTerdekat].jenis);
    printf("===================================================================================================================\n");

    // Daftar Bengkel Mobil Hybrid
   printf("\n\t ***** Daftar Bengkel Mobil Hybrid terdekat lainnya adalah:  ******\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 18; i < 21; i+=1) {
        if (i == indexTerdekat) continue;  // Skip the nearest workshop
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        printf(" \t Nama Bengkel: %s\n", bengkel[i].nama);
        printf(" \t Jarak: %.2f km\n", jarak );
        printf("-----------------------------------------------------------------------------------------------------\n");}
        break;}

                case 6: // Service Sepeda Listrik
                {
                printf("\t Masukkan merk Sepeda Listrik: ");
                char MerkSepedaListrik[20];
                scanf("%s", MerkSepedaListrik);

                double latitude, longitude;

                printf("\t Masukkan latitude posisi Anda: ");
                scanf("%lf", &latitude);

                printf("\t Masukkan longitude posisi Anda: ");
                scanf("%lf", &longitude);

                // Mencari bengkel terdekat untuk service sepeda listrik
                double jarakTerdekat = INFINITY;
                int indexTerdekat;
                for (int i = 21; i < 24; i+=1) {
                double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
                if (jarak < jarakTerdekat) {
                jarakTerdekat = jarak;
                indexTerdekat = i;}}
// Output Bengkel Sepeda Listrik Terdekat Lainnya
     printf("\n======================================== *** REKOMENDASI *** ======================================================\n");
    printf(" \n\t Bengkel terdekat untuk Service Sepeda Listrik adalah %s dengan jarak %.2f km \n", bengkel[indexTerdekat].nama, jarakTerdekat);
    printf(" \t Nama Bengkel: %-50s \n", bengkel[indexTerdekat].nama);
    printf(" \t Merk Sepeda: %-20s    \n", MerkSepedaListrik);
    printf(" \t Jenis Service: %-20s \n\n", bengkel[indexTerdekat].jenis);
    printf("===================================================================================================================\n");

    // Output Bengkel sepeda listrik Terdekat Lainnya
   printf("\n\t ***** Daftar Bengkel Sepeda Listrik terdekat lainnya adalah:  ******\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 21; i < 24; i+=1) {
        if (i == indexTerdekat) continue;  // Skip the nearest workshop
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        printf(" \t Nama Bengkel: %s\n", bengkel[i].nama);
        printf(" \t Jarak: %.2f km\n", jarak );
        printf("-------------------------------------------------------------------------------------------------------------------\n");}
        break;}

                case 7: // Service Sepeda listrik
                {
                printf("\t Masukkan Merk Sepeda Standard: ");
                char MerkSepedaStandard[20];
                scanf("%s", MerkSepedaStandard);

                double latitude, longitude;

                printf("\t Masukkan latitude posisi Anda: ");
                scanf("%lf", &latitude);

                printf("\t Masukkan longitude posisi Anda: ");
                scanf("%lf", &longitude);

                // Mencari bengkel terdekat untuk service sepeda standard
                double jarakTerdekat = INFINITY;
                int indexTerdekat;
                for (int i = 24; i < 28; i+=1) {
                double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
                if (jarak < jarakTerdekat) {
                jarakTerdekat = jarak;
                indexTerdekat = i;}}

    // Output Bengkel sepeda standar terdekat
    printf("\n======================================== *** REKOMENDASI *** ======================================================\n");
    printf(" \n\tBengkel terdekat untuk Service Sepeda Standard adalah %s dengan jarak %.2f km \n", bengkel[indexTerdekat].nama, jarakTerdekat);
    printf("\t Nama Bengkel: %-50s \n", bengkel[indexTerdekat].nama);
    printf("\t Merk Sepeda: %-20s    \n", MerkSepedaStandard);
    printf("\t Jenis Service: %-20s \n\n", bengkel[indexTerdekat].jenis);
    printf("===================================================================================================================\n\n\n");

   //Output Bengkel sepeda standard lainnya
    printf("\n\t ***** Daftar Bengkel Sepeda Standard terdekat lainnya adalah:  ******\n");
    printf("---------------------------------------------------------------------------------------------\n");
    for (int i = 24; i < 28; i+=1) {
        if (i == indexTerdekat) continue;
        double jarak = sqrt(pow((bengkel[i].latitude - latitude), 2) + pow((bengkel[i].longitude - longitude), 2));
        printf(" \t  Nama Bengkel: %s                          \n", bengkel[i].nama);
        printf(" \t  Jarak: %.2f km                           \n", jarak );
        printf("---------------------------------------------------------------------------------------------\n");}
        break;}

            case 8: // Keluar
                printf("\t Terima kasih telah menggunakan layanan kami. Sampai jumpa lagi!\n");
                break;
            default:
                printf("\t Opsi yang Anda masukkan tidak valid. Silakan coba lagi.\n");}}
    while (pilihan != 8);
    return 0;
    }

