# Random-LED-Colors
Dieser Sketch steuert einen Stripe mit 10 LEDs (WS2812) so an, dass zufällige Farben angezeigt werden.

Der Sketch ist kommentiert, sodass viele Parameter den eigenen Bedürfnissen angepasst werden können,
z.B. Anzahl der LEDs, prozentuale Helligkeit pro Farbe, die Umschaltgeschwindigkeit und natürlich auch
der Pin des Arduino, der dem Stripe die Steuerbefehle übermittelt. 

Zum Betrieb wird noch die Adafruit_Neopixel.h Library benötigt. 

Bitte bedenken, dass so ein Stripe mit 10 LEDs 600mA an Strom ziehen kann, wenn alle LEDs mit voller
Helligkeit betrieben werden !!!!
Das kann im Zufallsmodus passieren.

Ich betreibe den Stripe direkt (experimentell) an einem Arduino Mega und beziehe auch den Strom von diesem, daher habe 
ich die Helligkeit als Grundeinstellung im Programm auf 20 % gesetzt. Will man diesen Stripe mit voller Leistung betreiben, oder einen längeren mit mehr LEDs verwenden, kann eine Voll-Aussteuerung der LEDs den Arduino zerstören !!!!!

Verwendet in jedem Falle ein separates Netzteil, welches Euren Stripe mit Strom versorgt !
