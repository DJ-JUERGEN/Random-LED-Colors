#include <Adafruit_NeoPixel.h>

// Welcher Ausgangspin steuert die LEDs ?
#define PIN            21  //MEGA

// Wieviele LEDs werden vom Arduino gesteuert ? 
#define NUMPIXELS      10

// Initialisierung der LED-Kette
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);



// Lichtmuster 1
// Bilder Definitionen auf einem 10-LED-Stripe
int ledsA[] = {0,1,2,3,4,5,6,7,8,9};
int pincountA = 10;       

int i       =0;


//Farbgruppe 1
int Rot1    =0;
int Gruen1  =0;
int Blau1   =0;

//Farbzwischenspeicher
int Rot3    =0;
int Gruen3  =0;
int Blau3   =0;

//Helligkeit der einzelnen Farben
float Rot2    =0.20; // Helligkeit 20 Prozent, max 100 Prozent (1.00)
float Gruen2  =0.20; // Helligkeit 20 Prozent, max 100 Prozent (1.00)
float Blau2   =0.20; // Helligkeit 20 Prozent, max 100 Prozent (1.00)


void setup() {
  pixels.begin(); // NeoPixel library initialisieren
}

void loop() {

 for(i=0; i< pincountA; i++)   {

   QA();    //Ansprechen Muster A

 }
  RANDOM(); // Funktion zur Farbberechnung
  
   delay(999);

}


// Unterprogramme für unterschiedliche Funktionen

// LED aus Lichtmuster 1 einschalten
void QA()
{

    pixels.setPixelColor(ledsA[i], pixels.Color(Rot1,Gruen1,Blau1)); // Lichtfarbe setzen

    pixels.show(); // LED mit neuer Lichtfarbe einschalten

}


  // Zufällige Farberzeugung
void RANDOM()
{

  
randomSeed(analogRead(0));
Rot3  = Rot1;   
Rot1  = Rot2   * random(0, 255); //Farbmodulator Rot 
randomSeed(analogRead(1));
Gruen3= Gruen1;
Gruen1= Gruen2 * random(0, 255); //Farbmodulator Gruen
randomSeed(analogRead(2));
Blau3 = Blau1;
Blau1 = Blau2  * random(0, 255); //Farbmodulator Blau


}
