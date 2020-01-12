#include <iostream>
#include <string.h>

using namespace std;

struct Animal {

  const char* name;
  const char* say;
  char buffer[255];

    Animal(const char* name, const char* say){
    this->name = name; // nelze použít this.xxxx důvod pointeru
    this->say = say; // -||-
  }

  const char* whatDoesItSay(){
    strcpy(buffer, name);
    strcat(buffer, " says ");
    strcat(buffer, say);
    printf("%s\n", buffer);
    return 0;
  };
};

struct Dog : Animal {
  Dog(const char* name, const char* say) : Animal(name, say){}
};

struct Fox : Animal {
  Fox(const char* name, const char* say) : Animal(name, say){} 
};

int main() {
  
Animal* animals[] = {
    new Dog("dog", "woof"),
    new Fox("fox", "ringidingidingidingiding")
  };
  for(Animal* animal : animals) {
    animal->whatDoesItSay();
  }
}