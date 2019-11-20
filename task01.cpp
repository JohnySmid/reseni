#include <cstdio>
#include <string.h>


//zkontroluje 1. písmeno, pak se posune na další písmeno

char s[100];

const char* toUpper(const char* y) {
	int i;
	
	for (i = 0; *y!='\0'; i++) {
	   if(*y >= 'a' && s[i] <= 'z') {
       s[i] = *y - 32;     //udělá z malého pís. velké
     }
     else {
       s[i] = *y;  //nechává tak
     } 
     y++;
  }
  return s;
}

int main() {
	const char* y = "Hello, World!"; //určíme si zde y
	puts(toUpper(y)); // should print HELLO, WORLD!
}
