#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <conio.h>
using namespace std;
int main()
{
	for (;;)
	{
		char w;
		SetConsoleTitleA("Generator liczb TAB | Autor: Bealang | Strona: bealang.tk");
		system("cls");
		cout<< "                                TAB - Animations.yml"<<endl;
		cout<<endl;
		cout<<"                        Q - Przejdz do generowania liczb"<<endl;
		cout<<"                        W - Moja strona ktora pomaga w serwerach MC"<<endl;
		cout<<"                        E - Generowanie animowanych gradientow"<<endl;
		cout<<"                        ESC - Wyjscie";
		w = getch();
		switch (w)
		{
			case 'Q':
			case 'q':
			{
				system("cls");

				int i, change;
				string name;


				cout<<"                        Podaj ile chcesz liczb: ";
				cin>>i;

				cout<<"                        Podaj nazwe animacji: ";
				cin>>name;

				cout<<"                        Podaj co ile ma byc zmiana (1000 = 1 sekunda): ";
				cin>>change;
				system("cls");
				cout<<name<<": "<<endl;
				cout<<"  change-interval: "<<change<<endl;
				cout<<"  texts: "<<endl;
				for(int n = 1; n <= i; n++)
				{
					cout<<"  - '"<<n<<"'"<<endl;
				}
				cout<<"Wklej powyzszy tekst do animations.yml - plugin TAB"<<endl;
				cout<<"Nacisnij dowolny przycisk aby kontynuowac";
				getch();
				system("cls");
			}
			break;
			case 'W':
			case 'w':
				ShellExecute(0, 0, "https://bealang.tk", 0, 0 ,   SW_SHOW );
			break;
			case 'E':
			case 'e':
				ShellExecute(0, 0, "https://simplymc.art/AnimTab", 0, 0 ,   SW_SHOW );
			break;		
		}
	}
}
