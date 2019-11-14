#include <cstdio>
#define byte unsigned char



byte data[8];

int bit = 136;
int y;

byte flipBits(byte y){
	byte result = 0;
	for(int i=0; i<8; ++i) {
		bool bit = y & (0b1<<i);
		result |= bit<<(7-i);
	}
	return result;
}

int main() {
	FILE * fd = fopen("data1.txt", "rb");
	fread(data, 8, 1, fd);
	printf("136 = %c %c %c %c %c %c %c %c\n", data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7], data[8]);
	


printf("0 0 0 1 0 0 0 1 = %d", flipBits(bit));


}

/*

byte data[8];

int bit = 136;
int y;

byte flipBits7(byte y){
	byte result = 0;
	for(int i=0; i<7; ++i) {
		bool bit = y & (0b1<<i);
		
		result |= bit<<(6-i);
	}
	return result;
}

int main() {
	FILE * fd = fopen("data1.txt", "rb");
	fread(data, 8, 1, fd);
	printf("136 = %c %c %c %c %c %c %c %c", data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7], data[8]);
	


printf("%d", flipBits7(bit));


}

*/