#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void tervetuloa_ruutu();
void syotapin_ruutu();
void pinoikein_ruutu();
void pinvaarin_ruutu();
void toimintovalikko_ruutu();
void otto_ruutu();
void saldo_ruutu();
void tapahtumat_ruutu();
void liittymanlataus_ruutu();
void tilinlataus_ruutu();
void tapahtumat_kuitille();
void tapahtumat_naytolle();
void rahattulossa_ruutu();
void otarahat_ruutu();
void kiitos_ruutu();
void naytatilinsaldolopuksi_ruutu(double);
void vahennaSaldosta(double);
void vahennaSaldostaMuuSumma();
void setelijakaja(int);
void keskeytys_ruutu();

void delay(int);
void clear_screen();
void clearBuffer();
int tarkista_pin();

double _saldo = 1000; //laitetaan saldoksi 1000 euroa
int nosta50seteli = 0;
int nosta20seteli = 0;
int nostettavaSumma = 0;
char accountNumber[256];
FILE *pFile;
char pinkoodi[256];
char tarkistusPin[256];

int main()
{


    tervetuloa_ruutu();
    syotapin_ruutu();

    //tarkistetaan pin ja päätetään toiminta
    if (tarkista_pin() != 0)
    {
        pinvaarin_ruutu();
        exit(0);
    }

    pinoikein_ruutu(); //onkohan tarpeellinen
    toimintovalikko_ruutu();

    return 0;

}






void tervetuloa_ruutu()
{
    printf("#######################\nTervetuloa!\nSyötä tilinumero, ole hyvä\n#######################\n");
    printf("Tilinumero > ");
    fgets(accountNumber, 256, stdin);

    if (accountNumber[strlen(accountNumber)-1] == '\n')
        accountNumber[strlen(accountNumber)-1] = '\0';
    else
        clearBuffer();
    strcat(accountNumber, ".tili");

    clear_screen();
}

void syotapin_ruutu()
{

    printf("#######################\nNäppäile PIN\nLopuksi paina Enter\n#######################\n");
    fgets(pinkoodi, 256, stdin);

    if (pinkoodi[strlen(pinkoodi) - 1] == '\n')
        pinkoodi[strlen(pinkoodi) - 1] = '\0';
    else
        clearBuffer();

    clear_screen();


}
void pinoikein_ruutu()
{
    clear_screen();
    printf("Pin oikein!\n");
    delay(1);
    clear_screen();

}

void pinvaarin_ruutu()
{
    clear_screen();
    printf("Pin väärin!\n");
}

void toimintovalikko_ruutu()
{
    int valinta = 0;
    clear_screen();
    printf("#######################\nValitse toiminto\n1. Otto\n2. Saldo\n3. Tapahtumat\n4. Liittymän lataus\n(5. Tilin valinta)\n6. Keskeytä\n\n#######################\n");
    printf("Valinta > ");
    scanf("%d",&valinta);

    switch(valinta)
    {

    case 1:
        otto_ruutu();
    case 2:
        saldo_ruutu(_saldo);
    case 3:
        tapahtumat_ruutu();
    case 4:
        liittymanlataus_ruutu();
    case 5:
        tilinlataus_ruutu(); // ei käytössä todennäköisesti, koska ei ole demossakaan
    case 6:
        keskeytys_ruutu();
    default:
        toimintovalikko_ruutu(); //loopataan jos väärä


    }


}


void otto_ruutu()   //tällä hetkellä 8 palauttaa toimintovalikkoon, hyväksyy kaiken muun nostoksi
{
    clear_screen();
    printf("#######################\n");
    printf("		Otto\n");
    printf("1. 20 euroa\n2. 40 euroa\n3. 60 euroa\n4. 90 euroa\n5. 140 euroa\n6. 240 euroa\n7. Muu summa (max 1000e)\n8. Alkuun\n");
    printf("#######################\n");
    int valinta = 0;
    printf("Valinta > ");
    scanf("%d",&valinta);
    switch(valinta)
    {
    case 1:
        vahennaSaldosta(20);
        break;
    case 2:
        vahennaSaldosta(40);
        break;
    case 3:
        vahennaSaldosta(60);
        break;
    case 4:
        vahennaSaldosta(90);
        break;
    case 5:
        vahennaSaldosta(140);
        break;
    case 6:
        vahennaSaldosta(240);
        break;
    case 7:
        vahennaSaldostaMuuSumma();
        break;
    case 8:
        toimintovalikko_ruutu();
        break;
    default:
        otto_ruutu();
    }
    rahattulossa_ruutu();
    otarahat_ruutu();
    setelijakaja(nostettavaSumma);
    naytatilinsaldolopuksi_ruutu(_saldo);
    kiitos_ruutu();

    exit(0); //lopetetaan suoritus

}

void saldo_ruutu(double saldo)
{
    clear_screen();
    printf("#######################\n");
    printf("		Saldo\n");
    printf("Tilin saldo:   %0.2lf\n",saldo);
    printf("Tililtä nostettavissa: %02.lf\n",saldo);
    printf("Käteisnostovara: %0.2lf\n\n",saldo);
    printf("1. Lopeta\n");
    printf("#######################\n");
    int valinta = 0;
    printf("Valinta > ");
    scanf("%d",&valinta); //getchar ei toimi koska newlinet

    if (valinta == 1)
    {
        toimintovalikko_ruutu();
    }
    else
    {
        saldo_ruutu(_saldo);
    }
}


void tapahtumat_ruutu()
{
    clear_screen();
    printf("#######################\n");
    printf("Haluatko tiedot?\n");
    printf("1. Näytölle\n");
    printf("2. Kuitille\n");
    printf("#######################\n");
    int valinta = 0;
    printf("Valinta > ");
    scanf("%d",&valinta);

    switch (valinta)
    {
    case 1:
        tapahtumat_naytolle();
    case 2:
        tapahtumat_kuitille();
    default:
        tapahtumat_ruutu();
    }

}



void tapahtumat_naytolle()
{
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();

}

void tapahtumat_kuitille()
{
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();

}

void liittymanlataus_ruutu()
{
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();
}

void tilinlataus_ruutu()
{
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();
}

void rahattulossa_ruutu()
{
    clear_screen();
    printf("#######################\n");
    printf("Ota kortti, ole hyvä\n");
    printf("Rahat tulossa\n");
    printf("#######################\n");
    delay(3);

}

void otarahat_ruutu()
{
    clear_screen();
    printf("#######################\n");
    printf("Ota rahat, ole hyvä\n");
    printf("#######################\n");
    delay(3);

}
void naytatilinsaldolopuksi_ruutu(double saldo)
{
    clear_screen();
    printf("#######################\n");
    printf("		Saldo\n");
    printf("Tilin saldo:   %0.2lf\n",saldo);
    printf("Tililtä nostettavissa: %0.2lf\n",saldo);
    printf("Käteisnostovara: %0.2lf\n\n",saldo);
    printf("#######################\n");
    delay(3);

}

void kiitos_ruutu()
{
    clear_screen();
    printf("#######################\n");
    printf("Kiitos käynnistä\n");
    printf("Tervetuloa uudelleen.\n");
    printf("#######################\n");
    delay(3);
}

void keskeytys_ruutu()
{
    clear_screen();
    printf("#######################\n");
    printf("Käyttäjä keskeytti palvelun\n");
    printf("#######################\n");
    delay(3);
    kiitos_ruutu();
    exit(0);


}



int tarkista_pin()
{
    int tilinSaldo;

    int oikeaPin; //0 = oikein, 1 = väärin


    if ((pFile = fopen(accountNumber, "r")) != NULL)
    {

        if(pinkoodi[strlen(pinkoodi) - 1] == '\n')
        {
            pinkoodi[strlen(pinkoodi) - 1] = '\0';
        }
        else
        {

            clearBuffer();
        }

        fgets(tarkistusPin, 256, pFile);



        if(tarkistusPin[strlen(tarkistusPin) - 1] == '\n')
            tarkistusPin[strlen(tarkistusPin) - 1] = '\0';

        //Windows \r korjaukset
        if(tarkistusPin[strlen(tarkistusPin) - 1] == '\r')
            tarkistusPin[strlen(tarkistusPin) - 1] = '\0';

        if ((oikeaPin = strcmp(pinkoodi, tarkistusPin)) == 0)
        {
            fscanf(pFile, "%d", &tilinSaldo);
            _saldo = tilinSaldo;
            return 0; // oikea pin
        }
        else
        {

            printf("Väärä PIN-koodi, yritä uudelleen.\n");
        }
    }
    else
    {
        printf("Virhe avattaessa tilitiedostoa.");
        delay(2);
    }
    return 1;
}

//Nosto-funktiot
void vahennaSaldosta(double vahennettava)
{
    _saldo = _saldo - vahennettava;
    //printf("Saldo on nyt: %02.lf",_saldo);
    nostettavaSumma = (int)vahennettava;


}
void vahennaSaldostaMuuSumma()
{
    double summa = 0;
    clear_screen();
    printf("#######################\n");
    printf("Syotä nostettava summa\n");
    printf("#######################\n");
    printf("> ");
    scanf("%lf",&summa);
    if(_saldo - summa < 0)
    {
        nostettavaSumma = _saldo;
        _saldo = 0;
    }
    else
    {
        _saldo = _saldo - summa;
        nostettavaSumma = summa;

    }


}
//setelijakaja, 50e vai 20e jne
//pakko olla jaollinen 50 ja/tai 20
void setelijakaja(int summa)
{

    if (summa > 1000)
    {
        summa = 1000; //voi nostaa max 1000
    }
    while(summa > 0)
    {

        if(summa % 50 == 0)
        {
            nosta50seteli++;
            summa = summa - 50;
        }
        else
        {
            nosta20seteli++;
            summa = summa - 20;
        }

    }
    printf("\nDEBUG: Nostettiin 50e: %d kpl ja 20e: %d kpl\n",nosta50seteli,nosta20seteli);
    delay(3);

}


// stackoverflowista löydetty
void clear_screen()
{
#ifdef _WIN32
    system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
    system("clear");
//add some other OSes here if needed
#else
#error "OS not supported."
    //you can also throw an exception indicating the function can't be used
#endif
}
//https://www.geeksforgeeks.org/time-delay-c/
void delay(int number_of_seconds) //Jostain syystä linux skippaa tämän??
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
// Esimerkkikoodista
void clearBuffer(void)
{
    printf("Jos näet tämän, paina Enter. clearBuffer ei jostain syystä toimi kunnolla/oikein?");
    while (fgetc(stdin) != '\n');

}


