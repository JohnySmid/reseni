#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
FILE *f;  
char buff[10];  
scanf("%s",buff);  
f = fopen ("path/to/file.ext", "w");  
fprintf (f, "%s", buff);  
fclose (f)

return 0;
}
