#include <iostream>
#include <string>
#include "Auto_script.h"

using namespace std;

int main() {
   AutoData Car;
   
   Car.set_name();
   Car.get_name();
   Car.set_model();
   Car.get_model();
   Car.set_date();
   Car.get_date();
   Car.set_color();
   Car.get_color();
   Car.set_volume();
   Car.get_volume();
   Car.set_doors();
   Car.get_doors();
   Car.data();

   cin.get();
   return 0;
}
