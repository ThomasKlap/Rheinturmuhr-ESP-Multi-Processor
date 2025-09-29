#  Rheinturmuhr (LIchtzeitpegel) Düsseldorf  

Lichtzeitpegel ist die Bezeichnung der Uhrenlichtskulptur des Künstlers Horst H. Baumann am Düsseldorfer Rheinturm. Sie wurde am 24. November 1981 in Betrieb genommen und ist gemäß dem Guinness-Buch der Rekorde die größte dezimale „Zeitskala“ der Welt. Die Uhr wird auch als Dezimaluhr bezeichnet, obwohl der „Lichtzeitpegel“ die klassische 24-Stunden-Uhrzeit anzeigt und die Ziffern im Unärsystem dargestellt werden.  
[Quelle: Wikipedia, [Lichtzeitpegel]( de.wikipedia.org/wiki/Lichtzeitpegel )] 

![Bild](https://github.com/ThomasKlap/Rheinturmuhr-ESP8266-ESP32/blob/main/Rheinturm_v19.png)

Die Bauteile, als .stl Files für den 3D Druck, liegen im Ordner Parts.  
Ich habe den Turm schon mehrfach in unterschiedlichen Farben PLA gedruckt.
Das Fenster oben im Restaurant sollte transparent gedruckt werden, da es von innen beleuchtet werden kann.
Zusätzlich zu den gedruckten Teilen wird eine Gewindestange M3x565 und zwei Gewindeeinsätze M3 benötigt, um den Turm zusammen zu halten.
Alternativ kann auch eine M4 Gewindestange direkt in die Kunststoffteile eingeschraubt werden.

Es wird ein 62 Elemente langer Neopixel Streifen, mit einer Dichte von 144px/m, verwendet.  
Dieser kann komplett in die Aufnahme innerhalb des Schaftes eingeführt werden.
Weitere Neopixel können oberhalb für das Restaurant verwendet werden.  
Die Positionsleuchten ringsum sind für 2mm Leds vorgesehen, welche dort eingeklebt werden.
Ich verwende für die Projekte einen Wemos D1mini mit ESP8266 Prozessor.  
Für den Anschluss wird ein 470 Ohm Widerstand empfohlen, um die Neopixel vor Spannungsspitzen zu schützen.

![Schaltplan](https://github.com/ThomasKlap/Rheinturmuhr-ESP8266-ESP32/blob/main/wiring%20WemosD1-mini.png)

Das Programm ist für einen Wemos D1 Mini kompiliert und kann aus dem Browser [Google Chrome oder Microsoft Edge] mittels ESP-WebTools installiert werden.  
[Link zu Web-Installation, mit ESP Web-Tools]( https://thomasklap.github.io/Rheinturmuhr-ESP8266-ESP32/flash.html )

Nach der Installation ist die Uhr als WLAN-Hotspot [Rheintrumuhr-VX_xxxx] verfügbar.  
Mit dem Kennwort [123456789] kann man sich mit Hotspot verbinden. Dann im Browser über die Adresse 192.168.4.1 des Parametermenue aufrufen und die lokalen WLAN Zugangsdaten eingeben. Ab dann bezieht die Uhr Ihrer Zeit selbständig via WLAN vom NTP Server [de.pool.ntp.org] 