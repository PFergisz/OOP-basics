// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku Main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
// - co to znaczy? 
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem, np. lab01/
// * archiwum nie powinno zawierać katalogu build/
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/

#include "MyLibrary.h"

int main() {
  PrintName("Patryk");
  const char* path = PROJECTPATH;
  PrintInfo(PROJECTPATH);
  return 0;
}
/** Wynik dzialania programu:
[INFO]:: Name: Patryk
[INFO]:: /home/pfergisz/Desktop/studia/2 rok/semestr 3/C++/lab01
*/
// Oczywiście, ścieżka do projektu będzie się różnić.
