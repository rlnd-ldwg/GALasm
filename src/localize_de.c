/******************************************************************************
** localize.h
*******************************************************************************
**
** description:
**
** Error strings.
**
******************************************************************************/




char *ErrorArray[] =
{
"",
"Kann die Datei nicht finden!",
"Nicht genug freier Speicher!",
"Kann die Datei nicht laden!",
"Datei ist leer!",
"Fehler in der JEDEC-Datei!",
"Unmöglicher Fehler: GAL ist nicht leer!",
"Keine Pinnamen gefunden.",
"Datei kann nicht geschlossen werden!",
"Falscher GAL-Typ ausgewählt!",
"Unmöglicher Fehler: Can't load 's:GALer.config'!",
"Unmöglicher Fehler: Kann 's:GALer.config' nicht speichern!",
"Unmöglicher Fehler: Fenster kann nicht geöffnet werden!",
"Datei kann nicht gespeichert werden!",
};

char *AsmErrorArray[] = 
{
"Fehler in Quelldatei gefunden",
"Zeile 1: Typ der GAL erwartet",
"Unerwartetes Ende der Datei",
"Pinname wird nach '/' erwartet",
"max. Länge des Pinnamens ist 8 Zeichen",
"Unzulässiges Zeichen in der Pin-Deklaration",
"illegale VCC/GND-Zuweisung",
"Pin-Deklaration: VCC am VCC-Pin erwartet",
"Pin-Deklaration: erwarteter GND am GND-Pin",
"Pinname zweimal definiert",
"illegale Verwendung von '/'",
"unbekannter Pinname",
"NC (Not Connected) ist in logischen Gleichungen nicht erlaubt",
"unbekanntes Suffix gefunden",
"'=' erwartet",
"dieser Pin kann nicht als Ausgang verwendet werden",
"gleicher Pin ist mehrfach als Ausgang definiert",
"vor der Verwendung von .E muss der Ausgang definiert werden",
"GAL22V10: AR und SP ist als Pinname nicht erlaubt",
".E, .CLK, .ARST und .APRST dürfen nicht negiert werden",
"Modus 2: Pins 12, 19 können nicht als Eingang verwendet werden",
"Modus 2: Pins 15, 22 können nicht als Eingang verwendet werden", "Modus 2: Pins 15, 22 können nicht als Eingang verwendet werden",
"Tristate-Steuerung ist doppelt definiert",
"GAL16V8/20V8: tri. Steuerung für reg. Ausgang ist nicht erlaubt",
"Tristate-Steuerung ohne vorheriges '.T'",
"GND, VCC anstelle von /VCC, /GND verwenden",
"Modus 3: Pins 1,11 sind für 'Clock' und '/OE' reserviert",
"Modus 3: Pins 1,13 sind für 'Clock' und '/OE' reserviert",
"Die Verwendung von VCC und GND ist in Gleichungen nicht erlaubt",
"nur ein Produktbegriff erlaubt (kein ODER)",
"zu viele Produktbegriffe",
"die Verwendung von AR und SP ist in Gleichungen nicht erlaubt",
"Negation von AR und SP ist nicht erlaubt",
"keine Gleichungen gefunden",
".CLK ist nicht erlaubt, wenn dieser Typ von GAL verwendet wird",
".ARST ist nicht erlaubt, wenn dieser Typ von GAL verwendet wird",
"APRST ist nicht erlaubt, wenn dieser GAL-Typ verwendet wird",
"GAL20RA10: Pin 1 kann nicht in Gleichungen verwendet werden",
"GAL20RA10: Pin 13 kann nicht in Gleichungen verwendet werden",
"AR, SP: kein Suffix erlaubt",
"AR oder SP ist doppelt definiert",
"fehlende Taktdefinition (.CLK) des registrierten Ausgangs",
"vor der Verwendung von .CLK muss der Ausgang definiert werden",
"vor der Verwendung von .ARST muss der Ausgang definiert sein",
"vor der Verwendung von .APRST muss der Ausgang definiert werden", "vor der Verwendung von .APRST muss der Ausgang definiert werden",
"mehrere .CLK-Definitionen für denselben Ausgang gefunden",
"mehrere .ARST-Definitionen für denselben Ausgang gefunden", "mehrere .ARST-Definitionen für denselben Ausgang gefunden",
"mehrere .APRST-Definitionen für denselben Ausgang gefunden",
"Verwendung von .CLK, .ARST, .APRST nur für registrierte Auchar *ErrorArray[] ="
};
