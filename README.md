# Jan Šmíd

## task01

Zatím nic -> hotová, čeká na kontrolu

## task02

Příkazy jsou bitové operace. Pro převod lsb -> msb převádíme např. `01001` na `10010` (pětibitové číslo). Algoritmus je prostý:
 1. definuj výstup jako 0
 2. vezmi 1. bit vstupu (`bit = vstup & (1<<0)`) a zapiš ho jako 5. bit výstupu (`výstup|= bit<<4`)
 3. vezmi 2. bit vstupu (`bit = vstup & (1<<1)`) a zapiš ho jako 4. bit výstupu (`výstup|= bit<<3`)
 4. a tak dále pro všechny bity (pochopitelně to zapíšeme cyklem)

## task03

Zcela chybí testování parametrů programu -> rozpracovaný začátek
                                         -> bohužel přes víkend jsem se dostal pouze k task04

## task04

Hotový
