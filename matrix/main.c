#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* ptr;
    char ch;
    int ts = 0;
    int a;
    int b;
    int mtrx[22][32];
    char deger;
    int xnyet;
    int ynyet;
    int x1;
    int x2;
    int y1;
    int y2;
    // Xniyet



   // int x;
    ptr = fopen("yol.txt", "r");
    /*while(ts<671){
    ch = fgetc(ptr);
    printf("%c",ch);*/
    for(a=0 ; a<22 ; a++){
            for(b=0 ; b<32 ; b++){
                    ch = fgetc(ptr);
                    //x=(int)ch;
                    mtrx[ a ][ b ] = (ch);

                    printf("%c",ch);
            }

    }
    printf("\n merhaba\n");
     for( a = 0; a < 22 ; a++ ){
       for( b = 0; b < 32 ; b++ ){

           printf( "%c", mtrx[ a ][ b ] );

   }
}
 printf( "\nustteki txt den alttaki direkt matrixten okunuyo\n");
 printf( "%c", mtrx[ 0 ][ 0 ] );
 printf( "%c", mtrx[ 0 ][ 1 ] );
 deger = mtrx[0][0];
 printf("%c",deger);


//çok güzel matrixler 0 dan saymaya baþliyormuþ
    if(deger==('1')){
        printf("\ngörebiliyorum sonunda \n");
    }
    else{
        printf("\ngöremiyorum göremiyorum \n");
    }

 char str1[20];
 printf("ornek 3,5 LUTFEN SADECE SAYIVIRGULSAYI GIRINIZ    x,y   BASLANGIC NOKTASI: ");
   gets(str1);
 printf("ornek 3,5 LUTFEN SADECE SAYIVIRGULSAYI GIRINIZ    x,y  BITIS NOKTASI: ");
 char str2[20];
   gets(str2);

x1=(int)(str1[0]);
x2=(int)(str2[0]);
xnyet=(x2-x1);
printf("\n%d",xnyet);

y1=(int)(str1[2]);
y2=(int)(str2[2]);
ynyet=(y2-y1);
printf("\n%d",ynyet);


 /*  printf("%s", str1);
   printf("aradaki fark mediamakrt"); //char boyutunu 3 veya 5 gibi küçük birşey yapica ilk değeri hiç yazdirmiyor niye anlamadim
   printf("%s", str2);
   printf( "%c", str1[ 0 ]);
   printf( "\n");
   printf( "%c", str2[ 0 ]);*/ //input u cahr da nasil alabilşrim ansil okurum onu denedim şimdi sıra asil işte



                //bu baakma kontrol etme işini hepsini tek seferde kontrol edip her bi karakterde tek seferde yapmam lazim
                //opsiyonlarim neler olduğunu kontrol etmem lazim sonrada mantikli olani seçmem lazim
                //tek tek ifleye ifleye değil ozaman mantikli yollari bulma kısmında pek iyi olmaz


/*if(str1[0]<str2[0]){
        //aşağıyı kontrol et aşağı giden fonk yazaşaği gidemiyorsan sağ sol bak
    if(mtrx[ str1[0]+1 ][ str1[2] ]=='1'){
            //aşaği devam serbest

    }
    else{
                //aşaği serbest değil sağa sola  ve yukarıya bak
                //bu baakma kontrol etme işini hepsini tek seferde kontrol edip her bi karakterde tek seferde yapmam lazim
                //opsiyonlarim neler olduğunu kontrol etmem lazim sonrada mantikli olani seçmem lazim
                //tek tek ifleye ifleye değil ozaman mantikli yollari bulma kısmında pek iyi olmaz
                if(str1[2]<str2[2]){
                        //sağa mi gitmem lazim solami kontrol ediyorum şimdi sağa
                        if(mtrx[ str1[0] ][ str1[2]+1 ]=='1'){
                        //sağ serbest devam
                        }//burda kafam karıştı ifleri yukarı aşağı yı once kontrol edicek sonrada o matrixi değiştir temiz kafayla bak
                        }
                        else{//sağa gidemiyorum solu kontrolet
                                if(mtrx[ str1[0] ][ str1[2]+1 ]=='1'){
                        //sağ serbest devam
                        }

                        }
{

}                else{
                        if(mtrx[ str1[0] ][ str1[2]-1 ]=='1'){
                //sol serbest devam

                }

                }


    }
}
else{
    //yukarıyı kontrol etmem lazim yukari  giden fonk yaz
}

//sağa sola bakıp geçiş münkünmü mümkünsse yola devam edip matrixi okuyup marix değer ini haştag ile değiştirip ilerlemem lazim
//en sonunda adım sayısı en az olanı bulmak için her yol ayrımında farklı yolu seçen her adım sayısını kaydeden birşey b sayaç yazmam lazim.
 */   return 0;
}
