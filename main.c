#include <stdio.h>
#include <stdlib.h>

int main()
{
           int sayilar[] = { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 };
    int i,sayi,x;

    printf("sayi giriniz");
    scanf("%d",&sayi);

    for(i=0;i<=13;i++){
        if(sayi==sayilar[i]){
            printf("%d. sırada",i+1);
            x=1;
        }
    }
    if(x!=1){
        printf("Bu sayı dizide bulunmamaktadır");
    }

    return 0;
}
