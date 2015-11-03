# Ceas digital(afisaj cu tuburi)
----
###Functii
* Afisaj ora/data
* Afisaj temperatura
* Conectare usb

---
###Status
- [ ] Hardware
  - [x] Schema logica
  - [x] Layout
  - [x] Schema simulare
  - [ ] Implementare
- [ ] Software
  - [x] Adunare resurse
  - [x] Functii de baza
  - [ ] Software matur
  
  ---
###Descriere hardware

-  Afisajul consta in 4 tuburi rusesti de tip IV-9 numitron: 2 pentru ora si 2 ore pentru minute. Fiecare tub are un afisaj cu 7 segmente de tip filament. Acestea se alimenteaza la tensiuni joase si are nevoie de aproximativ 20 mA pentru a lumina. 
- MAX7219 – driver-ul care controleaza afisajele cu 7 segmente; are cate o iesire pentru fiecare digit in parte; comunica cu uC prin interfata SPI
- DS1307 – Real time clock (RTC) – ne da ora in format BCD ; Datele si adresele sunt transmise prin protocolul I2C
- LM75 – senzor IC  digital de temperatura; comunica cu uC prin protocolul I2C; senzorul masoara temperatura materialului semiconductor din interior
- HC-SR505 – sensor PIR (passive infrared sensor; masoara cantitatea de lumina IR radiata de obiectele din jurul sau. 
- uC – ATMEGA328P – uC pe 8 biti cu 32 pini
- MICRO-USB – (tip B) 
- 3 butoane: pentru functie (ceas/temperatura), ora si minute
In layout am folosit un conector de 8 pini la care vor fi legate ulterior segmentele afisajelor si un conector de 4 pini pentru digiti. Am adoptat aceasta abordare pentru a ocupa cat mai putin spatiu pe placa avand in vedere ca elementele de afisaj sunt legate in paralel. Electronica se va afla in interiorul unei carcase.

----

###Referinte:
- [Biblioteca LedControl](http://playground.arduino.cc/Main/LedControl)
- [Biblioteca RTC](https://github.com/adafruit/RTClib)
- [Biblioteca LM75](https://github.com/thefekete/LM75)
- TBA

----

###Evolutie
 > TBA
