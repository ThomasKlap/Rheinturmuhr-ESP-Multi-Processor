#include <Arduino.h>
#include <WiFiManager.h>
#include <time.h>
#include <Adafruit_NeoPixel.h>


const char *apSsid = "RheinturmuhrV7"; // SSID for AP if WLAN failed ; replaced with PROGRAM_VERSION
const char *apPwd = "123456789"; // SSID for AP if WLAN failed and first setup


int lastMilis;
int temp;
unsigned long CycleMillis = 0; // milli secounds conuter for cyclic delay funtions
const char *NTP_SERVER = "de.pool.ntp.org";
const char *TZ_INFO = "CET-1CEST-2,M3.5.0/02:00:00,M10.5.0/03:00:00";

char wochentage[7][12] = {"Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"};
String monat[12] = {"Januar", "Februar", "März", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember"};

time_t now;
struct tm tm;

/*Farbendefinitionen für die Ausgabe zu Turm
Definition der Pixel:
Adresse 0-10 ohne Funktion, standard Gelb
Adresse 11-20 Sekunden 1" Stelle
.....
*/
int emptyR =7; //Leere Segmente
int emptyG =7;
int emptyB =0;

int spaceR =10; // Trenner
int spaceG =0;
int spaceB =0;

int countR =0; //Zaehler
int countG =0;
int countB =30;

int posR =50; //Positionslichter
int posG =0;
int posB =0;

int restR =00; //Restaurant
int restG =10;
int restB =10;

#define NeoPixelPin   2// 
#define PosLedPin     4 // GPIO  for Position LED 
#define NUMPIXELS 86 // how many neopixels where attached

unsigned long PosMillis = 0; // time counter for position lights with millis() function
const long intervalPosMillis = 900; // light intervall for the position lights

unsigned long RestMillis = 0; // time counter for position lights with millis() function
const long intervalRestMillis = 2000; // light intervall for the position lights

int tempNPX = 0; // temporary variable

Adafruit_NeoPixel pixels(NUMPIXELS, NeoPixelPin, NEO_GRB + NEO_KHZ800);