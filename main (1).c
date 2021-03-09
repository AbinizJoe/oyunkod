#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include <time.h>
void
delay (int number_of_seconds)
{
int milli_seconds = 1000 * number_of_seconds;
clock_t start_time = clock ();
while (clock () < start_time + milli_seconds);

};





int
main ()
{

int x;

int y;
srand(time(NULL));
int zaman = rand()%9 + 4;
int dolmus = rand()%2 + 1;
int sapik = rand()%2 + 1;
int kuzey;
int kahve;
int dolmusin;
int a;
int alet=1;
int karakter;
int ders;
int event;
int kiz;
int turhan;
int agresif;
int cay;
int counter = 1;
int gong;
int korona=1;




printf ("ABINIZJOE GAMES\n\n");

printf("MORT HIKAYESI DAHA YAPIM ASAMASINDA\n\n");


printf ("Karakterini Sec\n\n1. Mort\n2. Fulya\n\n");

scanf ("%d", &karakter);


if(karakter == 2 ){
    printf("Merhaba Fulya! Bugun saat %d'da uyandin\n", zaman);
    delay(1);
    if(zaman <= 8 ){
        printf("Saat 9'da dersin var. Koronadan sonra ilk defa okula gidiceksin.\nDerse gitmek istiyor musun?\n\n1. Evet\n2. Hayir\n\n");
        scanf("%d", &ders);
        if(ders == 1){
        printf("Yanina ne almak istiyorsun?\n\n1. Ayna\n2. Bicak\n3. Biber Gazi\n");
        scanf("%d", &alet);
        printf("Dolmusla mi taksiyle mi gitmek istiyorsun?\n1. Dolmus\n2. Taksi\n");
        scanf("%d", &dolmus);
        delay(1);
        if(ders == 1){
            if (dolmus == 1){
                printf("\nDolmus ile gitmeye karar verdin.\n");
                delay(2);
                if(sapik == 1){
                    printf("Dolmusta yanina degisik bi herif oturdu.\nPis kokuyor ve garip garip bakiyor. Ne yapmak istiyorsun?\n\n1. Dolmustan in\n2.Gormezden gel.\n");
                    scanf("%d", &dolmusin);
                    delay(1);

                    if(dolmusin == 2){
                        agresif = rand()%2+1;
                        if(agresif == 1 && alet == 2){
                            printf("Yanina oturan adam senden bir lira istedi. Sabah sabah senle mi ugrasicam diyerek adamin boynuna bicak sapladin.\nAdam oldu.\n");
                            delay(2);
                            printf("Dolmuscu kizim bunlar boyle iste bu devirde gote mukayet olmak lazim dedi ve seni okula birakti.\n");
                        }
                        if(agresif == 1 && alet == 3){
                            printf("Yanina oturan adam senden bir lira istedi. Sabah sabah senle mi ugrasicam diyerek adama biber gazi siktin.\n\n");
                            delay(2);
                            printf("Tutuklandin.\n");
                            delay(50);
                            return 0;
                    }
                     if(agresif == 1 && alet == 1){
                                printf("Adam senden bir lira istedi. Yok deyince seni bicakladi.\n");
                     delay(2);
                     printf("Oldun.");
                     delay(50);
                     return 0;
                    }
                    if(agresif == 2){
                        printf("Dolmusa vericek bozuk paran cikmadi. Yanindaki adam senin parani odedi.\n");
                        delay(2);
                        printf("Onyarginin kotu bir sey oldugunu dusundun ve kendinden utandin.\n");

                    }
                }
            }
            if("sapik == 2"){
                printf("\nHic bir sikinti olmadan okula ulastin.\n");
            }
        }
        if(dolmusin == 1){
            dolmus = 2;
        }
        if(dolmus == 2){
            printf("Taksi ile gitmeye karar verdin.\n");
            sapik = rand()%5+1;
            delay(2);
            if(sapik == 1){
                printf("\nTaksici kral adam cikti. Sikinti olmadan okula ulastin.\n");
            }
            if(sapik >= 2){
                printf("\nTaksici aynadan garip garip bakmaya basladi. Baktin ki normalde gitmesi gereken yoldan farkli gidiyor.\n");
                delay(1);
                printf("Taksiciye neden farkli yoldan gittigini sordun. Taksici kendisinin orospu cocugu oldugunu ve kendini kontrol edemedigini soyledi.\n");
                delay(2);
                if(alet == 1){
                    printf("\nTaksici bi anda arabayi durdurup trafigin onune atladi.\n");
                    delay(1);
                    printf("\nOrospu cocuguydu zaten diyerek arabasini alip okula devam ettin.\n");
                }
                if(alet == 2){
                    printf("\nCebindeki bicagi cikarip taksiciye sapladin. Sonra taksicinin arabasini alarak yoluna devam ettin.\n");
                }
                if(alet == 3){
                    printf("\nTaksiciye biber gazi siktin. Taksici aci cekerek arabadan atladi ve taksiciye araba carpti.\n");
                    delay(2);
                    printf("\nTaksicinin arabasini alarak okula gittin.\n");
                }
            }
        }
        printf("\nOkula ulastin. Kuzeyi aramak istiyor musun?\n\n1. Evet\n2. Hayir\n");
        scanf("%d", &kuzey);
        while(kuzey==1){
            printf("\nKuzey'i ariyorsun\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf("Kuzey telefonu acmadi. Tekrar denemek istiyor musun?\n\n1. Evet\n2. Hayir\n");
            scanf("%d", &kuzey);
        }
        printf("\nOkula erken geldin. Dersten once kahve almak istiyor musun?\n\n1. Evet\n2. Hayir\n");
        scanf("%d", &kahve);
        delay(1);
        if(kahve == 1){
            printf("\nKahve almaya giderken Irmak'i gordun. Ne yapicaksin?\n\n1. Gormezden gel\n2. Gormezden gel\n3. Gormezden gel\n");
            scanf("%d", &event);
            delay(1);
            printf("\nKahve almaya geldin. Onundeki herif iced americano aldi aklina Kuzey geldi. Aramak istiyor musun?\n\n1. Evet\n2. Hayir\n");
            scanf("%d", &kuzey);
            while(kuzey==1){
            printf("\nKuzey'i ariyorsun\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf("Kuzey telefonu acmadi. Tekrar denemek istiyor musun?\n\n1. Evet\n2. Hayir\n");
            scanf("%d", &kuzey);
        }
        printf("\nIced Latte aldin. Ice Latte alinca aklina Turhan geldi ve ne kral herif oldugunu dusunup ona kiz bulman gerektigini anladin.\n ");
        delay(1);
        printf("\nDersine dogru yola ciktin.\n");

        }
        if(kahve == 2){
            printf("\nKahve almaktan vazgecip dersine dogru yola ciktin.\n");
            delay(1);
             printf("\nDersine giderken Irmak'i gordun. Ne yapicaksin?\n\n1. Gormezden gel\n2. Gormezden gel\n3. Gormezden gel\n");
            scanf("%d", &event);
        }
        delay(1);
        if(event==1){
            printf("\nDerse girdin. Sag onundeki cocuk bilgisayarindan Among Us oynuyor.\n");
            delay(1);
            if(alet == 2){
                printf("\nAmong Us izlemeye daldin ve o sirada cebindeki bicak dustu. Sag tarafindaki kiz ciglik atmaya basladi ve ne yapicagini sasirdin.\n");
                delay(1);
                printf("\nKiz bicagi alip Among Us oyniyan cocugu ikiye boldu. Kiza yardim ve yataklik yapmaktan tutuklandin.\n\nSon\n");
                delay (50);
                return 0;
            }
            if(alet == 1){
                printf("\nAmong us izlemeye daldin ve o sirada cebindeki ayna dustu.\nYanindaki kiz aynayi yerden alip sana verirken vay be ne guzel kizim dedi ve arkadas oldunuz.\n");
                kiz = 1;

        }if(alet == 3){
        printf("\nHoca ders anlatirken bir anda BENI SIKEN YOK MU diye bagirmaya basladi.\n");
        delay(1);
        printf("\nCebindeki biber gazini hocaya sikarak okulu kurtardin. Herkes senin kahraman olugunu dusunuyor artik.\n");


        }


    }if(event == 2){
         printf("\nDerse girdin. Sag arkandaki bi cocuk gong yiyerek sana garip garip bakiyor.\nNe yapicaksin?\n\n1. Gormezden gel\n2. Efecan mi acaba diyerek selam ver\n3. Saldir\n");
            scanf("%d", &agresif);
            delay(1);
            if(agresif == 1){
                printf("\nCocuk ders boyunca sana bakarak gong yedi ve gitti.\n");
            }
            if(agresif == 2){
                printf("\nKendisini nerden tanidigini sordu. Kuzeyin sevgilisi oldugunu soyleyince sana gong ikram edip gitti.\n(Mort bundan hoslanmadi)\n");
            }
            if(agresif == 3){
                if(alet==1){
                    printf("\nGong yiyen cocuga saldirdin. Cocuk sana ucan tekme atti.\n\nOldun\n");
                    delay(50);
                    return 0;
                }
                if(alet==2){
                    printf("\nCebinden bicagini cikarip gong yiyen cocuga sapladin.\n");
                    delay(1);
                    printf("\nButun gonglar etrafa sacildi ve cocugun bogazina gong kactigi icin oldu.\n");
                    delay(1);
                    printf("\nMort senin yerine sucu ustlendi ve hapse girdi.\n");
                }
                if(alet == 3){
                    printf("\nGong yiyen cocuga biber gazini siktin. Cocuk etrafa gong firlatmaya basladi ve cok guzel bir kizi oldurdu.\n");
                    delay(1);

                }
            }


    }
    if(event==3){
        printf("\nTelefonundan dersinin hangi sinifta olduguna baktin. Haritayi takip ederek gittin ve ITU'de oldugunu fark ettin.\n\nTurhan'i aradin.\n");
        delay(1);
        printf("\nTurhan neden ITU'de oldugunu soruyor. Ne cevap vericeksin?\n\n1. Ziyaret etmeye geldigini soyle\n2. Gercegi soyle\n3. Ona kiz buldugunu soyle\n");
        scanf("%d", &turhan);
        delay(1);
        if(turhan==1){
            printf("\nTurhan seni kahve icmeye davet etti.\nTurhan ile kahve icerken ona kiz ayarlicagini soyledin. Turhan mutlu oldu.\n");
            }
            if(turhan==2){
                printf("\nTuthan senle dalga gecti.\nCok sinirlendin\nNe yapicaksin?\n\n1. Saldir\n2. Bosver\n");
                scanf("%d", &agresif);
                delay(1);
                if(agresif==1){
                    printf("\nTurhan sana bu oyunu kendisinin yazdigini hatirlatti.\n\nOldun.\n");
                    delay(50);
                    return 0;
                }
                if(agresif==2){
                    printf("\nBi cocugun Iced Americano ictigini gordun ve aklina Kuzey'i aramak geldi.\nKuzeyi aramak istiyor musun?\n\n1. Evet\n2. Hayir\n");
                    scanf("%d", &kuzey);
        while(kuzey==1){
            printf("\nKuzey'i ariyorsun\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf(".\n");
            delay(1);
            printf("Kuzey telefonu acmadi. Tekrar denemek istiyor musun?\n\n1. Evet\n2. Hayir\n");
            scanf("%d", &kuzey);
        }
                }

            }
            if(turhan==3){
                printf("\nTurhan cok heyecanlanip oldu.\n");
            }
        }
    }

}}
printf("\nOkul bitti.\n");
       }
if(karakter == 1 ){
     printf("\nMerhaba Mort! Bugun saat %d'da uyandin\n", zaman);
    delay(1);
    if(zaman <=8){
        printf("\nDaha okula var. Cay mi icmek istersin kahve mi?\n\n1. Cay\n2. Kahve\n");
        scanf("%d", &cay);
        if(cay == 1){
            while(alet==1){
                printf("\nCay ictin bir tane daha icmek ister misin?\n\n1. Evet\n2. Hayir\n");
                scanf("%d", &alet);
                counter++;
            }
        }
        if(cay==2){
            printf("\nKahve ictin.\n");
        }
        delay(1);
            if(counter>=6){
                    delay(1);
                printf("\nHazirlanirken masada gong gordun. Yemek ister misin?\n\n1. Evet\n2. Hayir\n");
                scanf("%d", &gong);
                printf("\n\n\n");
                if(gong==1){
                    printf("H");
                    delay(1);
                    printf("A");
                    delay(1);
                    printf("T");
                    delay(1);
                    printf("A\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    printf("YENIDEN BASLATILIYOR\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    printf(".\n");
                    delay(1);
                    system("cls");
                    delay(1);


                    printf("\nMerhaba EFECAN! Bugun saat %d'da uyandin\n\nKahvaltida ne yemek istersin?\n\n1. Gong\n", zaman);
                    scanf("%d", &gong);
                    delay(1);
                    while(gong == 1){
                        printf("\nGong yedin biraz daha yemek ister misin?\n\n1. Evet\n2. Hayir\n\n");
                        scanf("%d", &gong);
                        korona++;
                    }
                    if(korona>=5){
                        delay(1);
                        printf("\nMidende garip bir agri var. Neden oldugunu bilmiyorsun.\nYine de okula gitmek ister misin?\n\n1. Evet\n2. Hayir\n\n");
                        scanf("%d", &ders);
                        delay(1);}
                        else{
                            printf("\nOkula gitmek istiyor musun?\n\n1. Evet\n2. Hayir\n\n");
                            scanf("%d", &ders);
                        }
                        if(ders==1){
                                printf("Yanina ne almak istiyorsun?\n\n1. Gong\n2. Bicak\n3. Biber Gazi\n");
        scanf("%d", &alet);
        printf("Dolmusla mi taksiyle mi gitmek istiyorsun?\n1. Dolmus\n2. Taksi\n");
        scanf("%d", &dolmus);
        delay(1);
        if(ders == 1){
            if (dolmus == 1){
                printf("\nDolmus ile gitmeye karar verdin.\n");
                delay(2);
                if(sapik == 1){
                    printf("Dolmusta yanina degisik bi herif oturdu.\nPis kokuyor ve garip garip bakiyor. Ne yapmak istiyorsun?\n\n1. Dolmustan in\n2.Gormezden gel.\n");
                    scanf("%d", &dolmusin);
                    delay(1);

                    if(dolmusin == 2){
                        agresif = rand()%2+1;
                        if(agresif == 1 && alet == 2){
                            printf("Yanina oturan adam senden bir lira istedi. Sabah sabah senle mi ugrasicam diyerek adamin boynuna bicak sapladin.\nAdam oldu.\n");
                            delay(2);
                            printf("Dolmuscu kizim bunlar boyle iste bu devirde gote mukayet olmak lazim dedi ve seni okula birakti.\n");
                        }
                        if(agresif == 1 && alet == 3){
                            printf("Yanina oturan adam senden bir lira istedi. Sabah sabah senle mi ugrasicam diyerek adama biber gazi siktin.\n\n");
                            delay(2);
                            printf("Tutuklandin.\n");
                            delay(50);
                            return 0;
                    }
                     if(agresif == 1 && alet == 1){
                                printf("Adam senden bir lira istedi. Yok deyince seni bicakladi.\n");
                     delay(2);
                     printf("Oldun.");
                     delay(50);
                     return 0;
                    }
                    if(agresif == 2){
                        printf("Dolmusa vericek bozuk paran cikmadi. Yanindaki adam senin parani odedi.\n");
                        delay(2);
                        printf("Onyarginin kotu bir sey oldugunu dusundun ve kendinden utandin.\n");

                    }
                }
            }
            if("sapik == 2"){
                printf("\nHic bir sikinti olmadan okula ulastin.\n");
            }
        }
        if(dolmusin == 1){
            dolmus = 2;
        }
        if(dolmus == 2){
            printf("Taksi ile gitmeye karar verdin.\n");
            sapik = rand()%5+1;
            delay(2);
            if(sapik == 1){
                printf("\nTaksici kral adam cikti. Sikinti olmadan okula ulastin.\n");
            }
            if(sapik >= 2){
                printf("\nTaksici aynadan garip garip bakmaya basladi. Baktin ki normalde gitmesi gereken yoldan farkli gidiyor.\n");
                delay(1);
                printf("Taksiciye neden farkli yoldan gittigini sordun. Taksici kendisinin orospu cocugu oldugunu ve kendini kontrol edemedigini soyledi.\n");
                delay(2);
                if(alet == 1){
                    printf("\nTaksici bi anda arabayi durdurup trafigin onune atladi.\n");
                    delay(1);
                    printf("\nOrospu cocuguydu zaten diyerek arabasini alip okula devam ettin.\n");
                }
                if(alet == 2){
                    printf("\nCebindeki bicagi cikarip taksiciye sapladin. Sonra taksicinin arabasini alarak yoluna devam ettin.\n");
                }
                if(alet == 3){
                    printf("\nTaksiciye biber gazi siktin. Taksici aci cekerek arabadan atladi ve taksiciye araba carpti.\n");
                    delay(2);
                    printf("\nTaksicinin arabasini alarak okula gittin.\n");
                }
            }
        }
        }
                        }
                    }}


                }
            }





    delay(1);
    if(zaman> 8){
        printf("\nCok gec uyandin. dersini Kacirdin.\n");
    }
printf ("\n\nNereye gidiyorsun?\n\n1. Kadikoy\n2. Nfes\n3. Besiktas\n");

scanf ("%d", &x);

if (x == 1)//kadikoye gitme

    {

printf
	("\n*Kuzey Isil 15 dakikaya gelicegini soyledi\n\n1. Beklerken kahve al\n2. Bi masaya oturup bekle\n3. Beklerken bira gom\n");

scanf ("%d", &y);

if (y == 1)

	{

printf
	    ("Starbucktan kendine latte ve Kuzey'e buzlu americano aldin.\n.\n.\n.\n.\nKahven bitti.\n");

delay (2);

printf
	    ("Bir masa bulup oturdun ve Kuzey balonun orada oldugunu ve park yeri aradigini soyledi.\n");

delay (2);

printf
	    ("E iyi beklemicem cok diye dusundun ve kahveni icmeye basladin.\n");

delay (1);

printf (".\n");

delay (1);

printf (".\n");

delay (1);

printf (".\n");

delay (1);

printf (".\n");

delay (1);

printf (".\n");

delay (5);

int i;

for (i = 3; i < 5000; i++)

	    {

		// delay of one second
		delay (1);

printf ("%d saat gecti\n", i + 1);

}


}

if (y == 2)
	{

printf ("Bos bir masa buldun ve beklemeye basladin.\n");

delay (1);

printf
	    ("Kuzey balonun ordaki park yerinde arabayi park edicek yer aradigini soyledi.\n");



int i;

delay (5);

for (i = 0; i < 5000; i++)

	    {

		// delay of one second
		delay (4);

printf ("%d saat gecti\n", i + 1);

}

}

if (y == 3)
	{

printf ("Kuzeyi beklerken bira icmeye karar verdin.\n");

delay (2);

printf
	    ("Kuzey balonun ordaki park yerinde arabayi park edicek yer aradigini soyledi.\n");

delay (2);

printf ("Bir bira icmeye daha karar verdin\n");

delay (2);

printf ("Oldun\n");
delay(40);

return 0;


}
    }
if (x == 2)//nfes
	{

printf ("Turhan'i arayip Nfes'e gelmesini soyledin.\n");

delay (1);

printf
	    ("Turhan artik nargile icmedigini ve nfesin kapandigini soyledi.\n");

delay (1);

printf ("Bridge'ye gidip nargile icmeye basladiniz.\n");

delay (1);

printf ("\n*Vahsi bir Ege Unal spawnlandi.\n\n");

delay (1);
if(kiz == 1){
    printf("\nOkeye 4. cagirmaya karar verdiniz. Bugun okulda tanistigin guzel kizi cagiricagini soyledin.\nKizi Turhana ayarladin ve mutlu mesut yasadilar.\n\n(GIZLI MUTLU SON)\n");
    delay(50);
    return 0;
}
if (kiz != 1){
printf
	    ("Ege Unal pokerden zengin oldugunu soyledi ve okeye 4. cagirmaya karar verdiniz.\n\n1. Kuzey'i cagir\n2. Berkay'i cagir\n3. Kubilayi cagir. \n");

scanf ("%d", &a);

if (karakter == 1)
	    {

if (a == 1)
		{

printf ("Kuzey 5 dakikaya gelecegini soyledi.\n");

delay (1);

printf ("Kuzey'i beklemeye basladiniz.\n");

delay (5);

int i;

for (i = 3; i < 5000; i++)

		    {

			// delay of one second
			delay (1);

printf ("%d saat gecti\n", i + 1);

}
		}

if (a == 2)
		{

printf
		    ("Berkay cok yogun oldugunu ve derslerinin oldugunu soyledi\n5 dakika sonra Irmak ile oldugunu ogrendiniz.\n");

delay (1);

printf
		    ("Nargile icip eve donup dota oynamaya karar verdiniz");
		    delay(40);

return 0;

}

if (a == 3)
		{

printf
		    ("Kubilay geldi ve Ingiltere'de surekli ot ictigini anlatti.\n");

delay (1);

printf
		    ("Turhan cok cay ictigini soyleyip tuvalete gitti.\n");

delay (1);

printf ("Kubilay oldu\n");
delay(50);

return 0;

}}

if (karakter == 2)
		{

if (a == 1)
		    {

printf ("Kuzey 5 dakikaya gelecegini soyledi.\n");

delay (1);

printf ("Kuzey'i beklemeye basladiniz.\n");

delay (5);

int i;

for (i = 3; i < 5000; i++)

			{

			    // delay of one second
			    delay (1);

printf ("%d saat gecti\n", i + 1);

}
		    }

if (a == 2)
		    {

printf
			("Berkay cok yogun oldugunu ve derslerinin oldugunu soyledi\n5 dakika sonra Irmak ile oldugunu ogrendiniz.\n");

delay (1);

printf ("Nargile icip eve donmeye karar verdiniz");
delay(40);

return 0;

}

if (a == 3)
		    {

printf
			("Kubilay geldi ve Ingiltere'de surekli ot ictigini anlatti.\n");

delay (1);

printf
			("Kubilay cok iyi bir mal buldugunu ve su anda kafasinin cok iyi oldugunu soyledi.\n");

delay (1);

printf ("Kubilay durduk yere oldu\n");
delay(40);

return 0;


}

}}

}

if (x == 3)//besiktas
	    {

printf ("Besiktasa gitmeye karar verdiniz.\n");

delay (1);

printf ("Turhan Besiktas'a laf etti.\n");

delay (1);

printf
		("Mort'un evine gidip bir seyler izlediniz.\nGece 1 gibi dagildiniz gayet iyi bir geceydi.");
		delay(40);

return 0;

}
delay(40);
return 0;
}



