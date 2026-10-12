#include <stdio.h>

int main() {
    int urun_tutari, odenen_para;

    // Kullanýcýdan ürün tutarý ve ödenen parayý alma
    printf("Urun tutarini giriniz (TL): ");
    scanf("%d", &urun_tutari);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%d", &odenen_para);

    // Para üstünü kuruþ cinsine çevirme (1 TL = 100 kuruþ)
    int para_ustu_tl = odenen_para - urun_tutari;
    int toplam_kurus = para_ustu_tl * 100;

    // Aritmetik operatörler (/ ve %) kullanarak banknot ve madeni para hesaplama
    int k_200 = toplam_kurus / 20000;
    int kalan = toplam_kurus % 20000;

    int k_100 = kalan / 10000;
    kalan = kalan % 10000;

    int k_50 = kalan / 5000;
    kalan = kalan % 5000;

    int k_20 = kalan / 2000;
    kalan = kalan % 2000;

    int k_10 = kalan / 1000;
    kalan = kalan % 1000;

    int k_5 = kalan / 500;
    kalan = kalan % 500;

    int k_1 = kalan / 100;
    kalan = kalan % 100;

    int m_50 = kalan / 50;
    kalan = kalan % 50;

    int m_25 = kalan / 25;
    kalan = kalan % 25;

    int m_10 = kalan / 10;
    kalan = kalan % 10;

    int m_5 = kalan / 5;
    kalan = kalan % 5;

    int m_1 = kalan / 1;

    // Toplam banknot ve madeni para sayýsýný toplama operatörü (+) ile hesaplama
    int toplam_banknot = k_200 + k_100 + k_50 + k_20 + k_10 + k_5 + k_1 + m_50 + m_25 + m_10 + m_5 + m_1;

    // Sonuçlarý ekrana yazdýrma
    printf("\n--- PARA USTU DETAYI ---\n");
    printf("Toplam Para Ustu: %d kurus\n", toplam_kurus);
    printf("200 TL'lik Banknot: %d\n", k_200);
    printf("100 TL'lik Banknot: %d\n", k_100);
    printf("50 TL'lik Banknot: %d\n", k_50);
    printf("20 TL'lik Banknot: %d\n", k_20);
    printf("10 TL'lik Banknot: %d\n", k_10);
    printf("5 TL'lik Banknot: %d\n", k_5);
    printf("1 TL'lik: %d\n", k_1);
    printf("50 Kurus: %d\n", m_50);
    printf("25 Kurus: %d\n", m_25);
    printf("10 Kurus: %d\n", m_10);
    printf("5 Kurus: %d\n", m_5);
    printf("1 Kurus: %d\n", m_1);
    printf("----------------------------------------\n");
    printf("Verilen Toplam Banknot ve Madeni Para Sayisi: %d\n", toplam_banknot);

    return 0;
}

