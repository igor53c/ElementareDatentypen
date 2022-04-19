// ElementareDatentypen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

/*
	Was ist ein Datentyp ?

	1. Zum Rechnen mit veränderlichen Daten werden Variablen benötigt.
	2. Variablen werden im Speicher abgelegt.
	3. Die Größe des Speichers für eine Variable muß festgelegt werden.
	4. Der Datentyp bestimmt, wie Daten im Speicher abgelegt werden.
	5. Variablen werden über Datentyp und Namen definiert.
*/

/*
	Wesentliche Gruppen von Datentypen sind:
	Arithmetische Typen (ganze Zahlen, auch integrale Typen genannt,
	Fließkommazahlen und Unicode-Zeichen, Wahrheitswerte für die Zustände
	'wahr' oder 'falsch'.
*/

/* Elementare Datentypen

   Datentyp   			  Größe		Wertebereich 					 Beschreibung
   ------------			  -------	---------------------------		 -----------------
   bool		 			   8 Bit	true / false 					 Boolescher Wahrheitswert
   char          		   8 Bit 	-128 bis 127					 Zeichen
   unsigned char  		   8 Bit 	0  bis 255						 Zweierkomplement-Wert
   signed char  		   8 Bit 	wie char
   short				  16 Bit	-32.768 bis 32.767 				 Zweierkomplement-Wert
   unsigned short		  16 Bit	0 bis 65.535 					 Zweierkomplement-Wert
   signed short			  16 Bit	wie short
   int 					  32 Bit	-2.147.483.648 ...
									2.147.483.647					 Zweierkomplement-Wert
   unsigned int			  32 Bit	0 bis 4.294.967.295              Zweierkomplement-Wert
   signed int			  32 Bit	wie int
   long		 			  32 Bit	wie int
   signed long			  32 Bit	wie signed int
   unsigned long		  32 Bit	wie unsigned int
   long long 			  64 Bit    -9.223.372.036.854.775.808 ...   Zweierkomplement-Wert
									9.223.372.036.854.775.807
   signed long long		  64 Bit    wie long long
   unsigned long long	  64 Bit	0 ... 18.446.744.073.709.551.615 Zweierkomplement-Wert
   float 				  32 Bit 	1.2E-38 ... 3.4E+38				 Gleitkommazahl mit
																	 6-stelliger Genauigkeit.
																	 Ungeeignet für
																	 kaufmännische und genaue
																	 wissenschaftliche
																	 Berechnungen.
   double 	   			  64 Bit 	2.3E-308 ... 1.7E+308			 Gleitkommawert mit
																	 doppelter Genauigkeit
																	 (15-stellig)
   long double 			  80 Bit 	wie double, aber mit bis zu 19 Dezimalstellen Genauigkeit.
   wchar_t				  16 Bit    wie short int                    Unicode Zeichen
 */

 /*
	 C++ unterteilt den verfügbaren Speicher in vier Bereiche. Diese sind der

			 - Programmspeicher,
			 - globaler Speicher für globale Variablen,
			 - Haldenspeicher (Heap) für die dynamische Speicherverwaltung, und
			 - Stapelspeicher (statische Speicherverwaltung).

	 Der Programmspeicher beinhaltet, wie der Name schon verrät, das Programm.
	 In zahlreichen Sprachen ist er strikt vom Datenspeicher getrennt. Manche Sprachen erlauben
	 aus programmiertechnischen Gründen keine globalen Variablen. Bei C++ sind diese zwar
	 erlaubt, es wird aber zwischen Programm- und Datenspeicher grundsätzlich unterschieden.

	 Neben dem Speicher für globale Variable bleiben noch zwei Bereiche für die Daten.
	 Einer dieser Bereiche wird als Stapel (stack) bezeichnet, den zweiten Speicherbereich
	 bezeichnet man als Halde (heap). Er dient der dynamischen Speicherverwaltung.

	 Für den Stapelspeicher gilt immer: Was zuletzt angefordert wurde, muss auch als erstes
	 wieder freigegeben werden (LIFO: Last In – First Out). Wenn man innerhalb eines logischen
	 Blocks {;;;} Variablen anlegt, werden diese auf dem Stack angelegt. Am Ende des Blocks
	 verliert die Variable ihre Gültigkeit und der Speicher wird wieder freigegeben. Wenn nun
	 eine Funktion aufgerufen wird, wird die aktuelle Programmadresse (also die Stelle im
	 Programm, an der die Funktion aufgerufen wurde als „Rücksprungadresse“ auf dem Stapel
	 abgelegt. Innerhalb der Funktionen werden möglicherweise auch Variablen angelegt, die
	 wiederum auf dem Stapel landen. Dass dies so geschehen soll, wird vom Compiler zur
	 Übersetzungszeit festgelegt und ist somit eine statische Speicherverwaltung.
	 Am Ende der Funktion werden die Speicherbereiche der Variablen wieder freigegeben und das
	 Programm springt zur Rücksprungadresse, die jetzt wieder oben auf dem Stapel liegt.
	 Somit befindet es sich jetzt wieder an der Stelle, an der die Funktion aufgerufen wurde.
 */


int main()
{

	//  Ganzzahl-Datentypen

	// Deklaration einer Variablen vom Typ 'short'
	short s;

	// Initialisierung
	s = 32000;

	cout << "Datentyp 'short' s = " << s << endl;							// 32000

	s = s + 768;
	cout << "Datentyp 'short' s = " << s << endl;							// -32768

	// 'unsigned short' (short) hat die Größe 2 Byte

	unsigned short us = 65535;

	cout << "Datentyp 'unsigned short' s = " << us << endl;					// 65535

	us = us + 1;
	cout << "Datentyp 'unsigned short' s = " << us << endl;					// 0

	// Deklaration und Initialisierung jewils in einer Zeile

	short s1, s2 , s3, s4;

	s1 = s2 = s3 = 0;
	cout << "s1: " << s1 << ", s2: " << s2 << ", s3: " << s3 << endl;

	s1 = 1, s2 = 2, s3 = 3;
	cout << "s1: " << s1 << ", s2: " << s2 << ", s3: " << s3 << endl;

	// Eine Variable muss mit einem Anfangswert initialisiert werden:
	// Runtime check failure.
	s4 = 42;
	cout << "s1: " << s1 << ", s2: " << s2 << ", s3: " << s3 << ", s4: " << s4 << endl;

	cout << endl;

	//  Gleitkomma-Datentypen: float (4-Bytes), double (8-Bytes) und long double (10 Bytes)
	//  Es wird der IEEE-Standard 754 (IEEE – Institute of Electrical and Electronics Engineers)
	//	verwendet.
	//	|------------------------------------------------------------------------------------|
	//	|Daten-	    |Bits		  |Vor-    | Mantisse | Vorzeichen | Exponent |Genauigkeit   |
	//	|typ	    |			  |zeichen |          | Exponent   |          |in Dez.Stellen|
	//	|------------------------------------------------------------------------------------|
	//	|float	    |32 (4 Bytes) | 1 Bit  | 23 Bits  | 1 Bit      | 7 Bits   | 6	         |
	//  |double	    |64 (8 Bytes) | 1 Bit  | 52 Bits  | 1 Bit      | 10 Bits  | 15           |
	//  |long double|80 (10 Bytes)| 1 Bit  | 64 Bits  | 1 Bit      | 14 Bits  | 19           |
	//  -------------------------------------------------------------------------------------|

	// Der Compiler nimmt hier standradmässig den Datentyp 'double' 
	double d = 3.142;
	cout << "Datentyp 'double' d = " << d << endl;

	// Eine evtl. Warnung: Kürzung von Double in Float kann durch eine sogenannte Literalkennung
	// verhindert werden (F/f = float).
	// Dadurch wird der Compiler den angegebenen Wert als Float-Wert interpretieren.
	float f = 3.142f;
	cout << "Datentyp 'float' d = " << f << endl;

	cout << endl;

	// 'unsigned char' (ASCII-Zeichen) hat die Größe 1 Byte
	// Der Wertebereich liegt zwischen 0 und 255.

	unsigned char c = 'c';
	cout << "Zeichen: " << c << endl;											// c

	c = c + 2;
	cout << "Zeichen: " << c << endl;											// e

	c = c - 32;
	cout << "Zeichen: " << c << endl;											// E

	// Typumwandlung von char -> int:
	// Reihenfolge: Zuerst wird 'char' in 'int' umgewandelt und dann ausgegeben.

	// Einfache Schreibweise.
	// Die einfache Schreibweise wird jedoch nicht empfohlen, weil sie in bestimmten 
	// Zusammenhängen unsicher ist. Ausserdem kann sie in Programmtexten leicher 
	// übersehen werden.
	cout << "Zeichen: " << (int)c << endl;										// 69

	// oder mit static_cast<>()
	cout << "Zeichen: " << static_cast<int>(c) << endl;							// 69

	cout << endl;

	// 'bool'  Logischer Datentyp: wird für Bedingungsauswertungen verwendet
	// (true oder false).

	bool wahrheitswert = true;
	cout << "Logisch: " << wahrheitswert << endl;								// 1

	wahrheitswert = false;
	cout << "Logisch: " << wahrheitswert << endl;								// 0

	// Der Datentyp bool wird an allen Stellen, die nicht ausdrücklich bool verlangen, 
	// nach int gewandelt. Dabei wird 'true' zu 1 und 'false' zu 0. 
	// Die umgekehrte Wandlung von int nach bool ergibt 'false' für 0 und 'true' für alle 
	// anderen int-Werte. 

	// Formatierte Ausgabe mit cout: 
	// ios ist eine Klasse
	// die statische Konstante boolalpha formatiert einen boolschen Wert 'true' oder 'false'.
	cout.setf(ios::boolalpha);

	// Zurücksetzen mit 
	// cout.unsetf(ios::boolalpha);

	wahrheitswert = 99;
	cout << "Logisch: " << wahrheitswert << endl;

	wahrheitswert = 0;
	cout << "Logisch: " << wahrheitswert << endl;

	cout << endl;

	// Das Schlüsselwort "auto"
	// Mit diesem Schlüsselwort überlassen wir dem Compiler die Bestimmung des Datentyps einer 
	// Variablen. Der Compilers ermittelt über den Ausdruck auf der rechten Seite den Datentyp.

	auto ai = 42;										// Der Typ ist 'int'
	auto aui = 9u;										// Mit Literalkennung. Der Typ ist 'unsigned int'.
	auto al = 9l;										// Mit Literalkennung. Der Typ ist 'long'.
	auto af = 3.14f;									// Mit Literalkennung. Der Typ ist 'float'.

	cout << endl;

	// Konstanten
	// In einem Programm kommen häufig Zahlen oder andere Datenstrukturen vor, die im Programmlauf
	// nicht verändert werden dürfen.
	// Eine Konstante besteht aus einem Namen und dem zugeordneten Wert, der nicht veränderbar ist.
	// Eines der Schlüsselwörter 'const' oder 'constexpr' leitet die Deklaration einer Konstanten
	// ein. 

	// Das Schlüsselwort 'const' wird verwendet, wenn der Wert nicht unbedingt schon zur 
	// Umwandlungszeit bestimmt werden kann. 

	// Beispiel:
	int a = 42;											// Der Wert von 'a' wird irgendwo im Programm ermittelt
					
	const int cb = a;									// 'cb' enthält jetztt den Wert von 'a', kann aber nicht mehr
														// verändert werden.

	//cb = 99;

	// Eine Zahl auf der rechten Seite zur Initialisierung einer Konstante heißt »Zahlliteral«, 
	// weil sie genau so in den Programmcode geschrieben wird. Die Auswertung geschieht nicht 
	// erst wenn das Programm läuft, sondern schon durch den Compiler. 
	// Ein Literal für eine ganze Zahl besteht nur aus einem optionalen Vorzeichen, gefolgt von 
	// Ziffern und möglicherweise einer Literalkennung, um den Typ zu spezifizieren, 
	// zum Beispiel l oder L für long-Zahlen.
	// Das Schlüsselwort 'constexpr' wird verwendet, wenn der Wert zur Compilationszeit bestimmt 
	// werden kann. Das ist bei Literalen der Fall.

	constexpr int anzahl = 1000;						// OK, Literal.
	//constexpr int cc = cb;							// Fehler! Nicht aus Literal ableitbar.

	const int cd = 42;									// OK, cd ist konstant.
	constexpr int ce = cd;								// OK, indirekt aus einem Zahlliteral ableitbar.
	cout << endl;



}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
