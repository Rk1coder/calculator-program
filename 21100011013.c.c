#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int taban,us,sonuc,komut=1;
    int isaret,mod,secim;
    float s,sayi2,sayi1,ksayi;

    while(komut)
    {
        printf("\n^^^^^^^^^^^^^^^^^^\n");
        printf("------MENU------\n");
        printf("^^^^^^^^^^^^^^^^^^\n");
        printf("HESAP MAKINESI:1\n");
        printf("CIKIS:2\n");
        printf("Secimi yap bakalim->");
        scanf("%d",&secim);
        if(secim==1)
        {
            printf("----------------\n HESAP MAKINESI \n----------------\n");
            printf("1=Basit\n2=Gelismis\n");
            scanf("%d",&mod);
            if (mod==1)
            {
                printf("Sayilari giriniz...\n");
                printf("1.sayi:");
                scanf("%f",&sayi1);
                printf("2.sayi:");
                scanf("%f",&sayi2);
                printf("İslem secin\n");
                printf(" 1.TOPLAMA\n 2.CIKARMA\n 3.BOLME\n 4.CARPMA\n");
                scanf("%d",&isaret);
                switch(isaret)
                {
                case 1 :
                    s=sayi1+sayi2;
                    break;
                case 2:
                    s=sayi1-sayi2;
                    break;
                case 3:
                    s=sayi1/sayi2;
                    break;
                case 4:
                    s=sayi1*sayi2;
                    break;
                }
                printf("Sonucunuz:%.2lf\n",s);
            }

            else if(mod==2)
            {
                printf("islem secin\n");
                printf("----NOT:Us alma isleminde 1.sayi taban 2.sayi us seklinde alinir----\n----NOT:Logaritma isleminde log ussu sayi1 log tabani sayi2 olarak alinir----\n");
                printf("1=TOPLAMA\n2=CIKARMA\n3=BOLME\n4=CARPMA\n5=Mod alma\n6=Us alma\n7=Logaritma\n8=Karekök\n");

                scanf("%d",&isaret);
                switch(isaret)
                {
                case 1 :
                    printf("sayilari giriniz...\n");
                    printf("1.sayi=");
                    scanf("%f",&sayi1);
                    printf("2.sayi=");
                    scanf("%f",&sayi2);
                    s=sayi1+sayi2;
                    printf("sonucunuz-->%.2lf",s);
                    break;
                case 2:
                    printf("sayilari giriniz...\n");
                    printf("1.sayi=");
                    scanf("%f",&sayi1);
                    printf("2.sayi=");
                    scanf("%f",&sayi2);
                    s=sayi1-sayi2;
                    printf("sonucunuz-->%.2lf",s);
                    break;
                case 3:
                    printf("sayilari giriniz...\n");
                    printf("1.sayi=");
                    scanf("%f",&sayi1);
                    printf("2.sayi=");
                    scanf("%f",&sayi2);
                    s=sayi1/sayi2;
                    printf("sonucunuz-->%.2lf \n",s);
                    break;
                case 4:
                    printf("sayilari giriniz...\n");
                    printf("1.sayi=");
                    scanf("%f",&sayi1);
                    printf("2.sayi=");
                    scanf("%f",&sayi2);
                    s=sayi1*sayi2;
                    printf("sonucunuz-->%.2lf\n",s);
                    break;

                case 5:
                    printf("sayilari giriniz...\n");
                    printf("Modu alınan sayi=");
                    scanf("%f",&sayi1);
                    printf("Mod=");
                    scanf("%f",&sayi2);
                    if (mod>0)
                    {
                    printf("Kalan %.2lf/ %.2lf \n= %.2lf \n",sayi1,sayi2,fmod(sayi1,sayi2));
                    }
                    else
                    printf("Lutfen moda pozitif deger giriniz ");

                    break;
                case 6:
                    printf("taban giriniz:");
                    scanf("%d",&taban);
                    printf("us giriniz:");
                    scanf("%d",&us);

                    for(int i=0; i<us; i++)
                    {
                        sonuc=sonuc*taban;
                    }
                    printf("%d uzeri %d = %d \n",taban,us,sonuc);
                    break;
                case 7:
                    printf("ust sayiyi giriniz=");
                    scanf("%f",&sayi1);
                    printf("alt taban sayiyi giriniz=");
                    scanf("%f",&sayi2);
                    s=log10(sayi1)/log10(sayi2);
                    printf("log sonucunuz=%.2lf\n",s);
                    break;
                case 8:
                    printf("sayi girin...\n");
                    scanf("%f",&ksayi);
                    s=sqrt(ksayi);
                    printf("karekoku->%.2lf\n",sqrt(ksayi));
                    break;
                }
            }
        }
        else if(secim==2)
        {
            printf("Cikis yapiliyor....\n------Cikis yaptiniz------\n");
            komut=0;
        }
        else
            printf("Bilinmeyen komut\n Lutfen geçerli komutu gir...\n");
    }
    return(0);
}
