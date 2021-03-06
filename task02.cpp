/*
Decode the task02.dat file and find out the birth dates of John Doe and Sam Sepiol.
format: N records of 6 bytes:
  byte 1-2: birth date yyyyyyyd ddddmmmm (year of birth LSB - 1900)
  byte 3-6: height (float LSB)
separator 0xFF (after N records)
name1|name2|...|nameN|
*/


#include <cstdio>
#define byte unsigned char

byte data[8];

byte flipBits(byte number){
	byte result = 0;
	for(int i=0; i<8; ++i) {
		bool bit = number & (1<<i); // 1 nebo 0
		result |= bit<<(7-i); //i se navýší vždy o 1, pak se posune doleva
	}
	return result;
}

void readDate(int* y, int* m, int* d, byte b1, byte b2) {
	*m = b2 & 0b1111; //měsíc
    *d = b2>>4 | ((b1 & 0b1)<<4); //den
    *y = flipBits(b1>>1)>>1; //rok
}

int main()
{
    FILE * fd = fopen("task02.dat", "rb");

//1
    fread(data, 8, 1, fd);
   // printf("%X %X %X %X %X\n", data[0], data[1], data[2], data[3], data[4]);
   	int y, m, d;
   	readDate(&y, &m, &d, data[0], data[1]);
    printf ("John Doe je narozen: %d.%d.%d\n", d, m, y+1900);

//2.
    fread(data, 8, 1, fd);
    readDate(&y, &m, &d, data[0], data[1]);
    printf ("Sam Sepiol je narozen: %d.%d.%d\n", d, m, y+1900);
}
