#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <queue>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
using namespace std;
 
int main(int argc, char** argv) {
	
	 cout << "Content-type: text/html\n\n"
         "<html>"
          "<head>"
           "<title>Zmienne POST-GET</title>"
           "<body>";
           
           
    queue < string > kolejkaLiczb;
 
        string input;
        fstream plik;

   plik.open("a.txt");  //otwarcie pliku

   if(plik.good())  //sprawdzenie czy plik istnieje
            while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
        {



                getline(plik,input);

                kolejkaLiczb.push( input );

		    cout<< "\n";
			cout<< "[ \n ";
		   	cout<<"["<<"{"<<input<<"}"<<"]"<< "\n";;
		    cout<< "]";


        }


                   plik.close();  //zamkniecie pliku tekstowego
 
cout<<endl;

 return 0;
}
