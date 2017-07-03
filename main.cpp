#include <iostream>
#include <string>
#include "Auto_script.h"

using namespace std;

int main() {
   AutoData Car;
   
   Car.set_date();
   Car.get_date();
   Car.set_color();
   Car.get_color();
   Car.set_wheels();
   Car.get_wheels();
   Car.data();

   cin.get();
   return 0;
}
