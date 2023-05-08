#include <iostream>
#include <cmath>

using namespace std;

int main() {
   double derece, radyan, sin_degeri, cos_degeri, tan_degeri;

   cout << "Lutfen derece cinsinden bir aci giriniz: ";
   cin >> derece;

   radyan = M_PI * derece / 180.0;

   sin_degeri = sin(radyan);
   cos_degeri = cos(radyan);
   tan_degeri = tan(radyan);

   cout << "Sinus degeri: " << sin_degeri << endl;
   cout << "Kosinus degeri: " << cos_degeri << endl;
   cout << "Tanjant degeri: " << tan_degeri << endl;

   return 0;
}

