#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tervetuloa_ruutu();
int syotapin_ruutu();
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

void delay(int);
void clear_screen();
int tarkista_pin();

int main()
{
    tervetuloa_ruutu();
    int pin = syotapin_ruutu();

    //tarkistetaan pin ja päätetään toiminta
    if (tarkista_pin(pin) != 0) {
        pinvaarin_ruutu();
    }

    pinoikein_ruutu(); //onkohan tarpeellinen
    toimintovalikko_ruutu();

    return 0;

}






void tervetuloa_ruutu() {
printf("#######################\nTervetuloa!\nSyötä kortti, ole hyvä\n(Paina enter)\n#######################\n");
getchar(); //odotetaan syötettä
clear_screen();
}

int syotapin_ruutu() {
printf("#######################\nNäppäile PIN\nLopuksi paina Enter\n#######################\n");
    int pin = 0;
    scanf("%d",&pin);
    return pin;

}
void pinoikein_ruutu() {
clear_screen();
printf("Pin oikein!");

}

void pinvaarin_ruutu() {
clear_screen();
printf("Pin väärin!");
}

void toimintovalikko_ruutu() {
int valinta = 0;
clear_screen();
printf("#######################\nValitse toiminto\n1. Otto\n2. Saldo\n3. Tapahtumat\n4. Liittymän lataus\n(5. Tilin valinta)\n\n#######################\n");
printf("Valinta > ");
scanf("%d",&valinta);

switch(valinta) {

	case 1:
		otto_ruutu();
	case 2:
		saldo_ruutu();
	case 3:
		tapahtumat_ruutu();
	case 4:
		liittymanlataus_ruutu();
	case 5:
		tilinlataus_ruutu(); // ei käytössä todennäköisesti, koska ei ole demossakaan
	default:
		toimintovalikko_ruutu(); //loopataan jos väärä


}


}


void otto_ruutu() { //tällä hetkellä 8 palauttaa toimintovalikkoon, hyväksyy kaiken muun nostoksi
clear_screen();
printf("#######################\n");
printf("		Otto\n");
printf("1. 20 euroa\n2. 40 euroa\n3. 60 euroa\n4. 90 euroa\n5. 140 euroa\n6. 240 euroa\n7. Muu summa (max 1000e)\n8. Alkuun\n");
printf("#######################\n");
int valinta = 0;
printf("Valinta > ");
scanf("%d",&valinta);
if(valinta == 8) {
    toimintovalikko_ruutu();
}
rahattulossa_ruutu();
otarahat_ruutu();
kiitos_ruutu();

exit(0); //lopetetaan suoritus

}

void saldo_ruutu() {
clear_screen();
printf("#######################\n");
printf("		Saldo\n");
printf("Tilin saldo:   xyz\n");
printf("Tililtä nostettavissa: xyz\n");
printf("Käteisnostovara: xyz\n\n");
printf("1. Lopeta\n");
printf("#######################\n");
int valinta = 0;
printf("Valinta > ");
scanf("%d",&valinta); //getchar ei toimi koska newlinet

if (valinta == 1) {
    toimintovalikko_ruutu();
}
else {
    saldo_ruutu();
}
}


void tapahtumat_ruutu() {
clear_screen();
printf("#######################\n");
printf("Haluatko tiedot?\n");
printf("1. Näytölle\n");
printf("2. Kuitille\n");
printf("#######################\n");
int valinta = 0;
printf("Valinta > ");
scanf("%d",&valinta);

switch (valinta) {
        case 1:
            tapahtumat_naytolle();
        case 2:
            tapahtumat_kuitille();
        default:
            tapahtumat_ruutu();
}

}

void tapahtumat_naytolle() {
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();

}

void tapahtumat_kuitille() {
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();

}

void liittymanlataus_ruutu() {
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();
}

void tilinlataus_ruutu() {
    clear_screen();
    printf("\n===NOT IMPLEMENTED===\n");
    delay(1);
    toimintovalikko_ruutu();
}

void rahattulossa_ruutu() {
    clear_screen();
    printf("#######################\n");
    printf("Ota kortti, ole hyvä\n");
    printf("Rahat tulossa\n");
    printf("#######################\n");
    delay(3);

}

void otarahat_ruutu() {
    clear_screen();
    printf("#######################\n");
    printf("Ota rahat, ole hyvä\n");
    printf("#######################\n");
    delay(3);

}

void kiitos_ruutu() {
    clear_screen();
    printf("#######################\n");
    printf("Kiitos käynnistä\n");
    printf("Tervetuloa uudelleen.\n");
    printf("#######################\n");
    delay(3);
}



int tarkista_pin(int pin) {
    //dummy funktio atm
    if (pin == pin) {
        return 0;
    }
    return -1;

}



// stackoverflowista löydetty
void clear_screen() {
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
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}


