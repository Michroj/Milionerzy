#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include<vector>
#include <locale.h>
#include <windows.h>

using namespace std;

struct pyt //struktura pytan
{
    string tresc;
    string odpA;
    string odpB;
    string odpC;
    string odpD;
    string popodp;
    void info();
};

void pyt::info() //funkcja struktury wypisujaca pytanie
{
    cout<<tresc<<endl<<endl<<"a)"<<odpA<<endl<<"b)"<<odpB<<endl<<"c)"<<odpC<<endl<<"d)"<<odpD<<endl;
}

void pomoce(bool j,bool k,bool l) //funkcja informujaca o dostepnych kolach
{
    if(j)
        cout<<" 1 - pytanie do publicznosci"<<endl<<endl;
    if(k)
        cout<<" 2 - telefon do przyjaciela"<<endl<<endl;
    if(l)
        cout<<" 3 - 50/50"<<endl<<endl;

        cout<<" x - rezygnuje"<<endl;
}

void pomoc1(int szansa,int publicznosc[4],string dobra)// funkcja do kola pytanie do publicznosci
{
   szansa=rand()%100+1;
                if(szansa<=70)
                {
                    if(dobra=="a")
                        {
                            publicznosc[0]=47;
                            publicznosc[1]=25;
                            publicznosc[2]=17;
                            publicznosc[3]=11;
                        }
                    if(dobra=="b")
                        {
                            publicznosc[1]=47;
                            publicznosc[0]=25;
                            publicznosc[2]=17;
                            publicznosc[3]=11;
                        }
                    if(dobra=="c")
                        {
                            publicznosc[2]=47;
                            publicznosc[1]=25;
                            publicznosc[0]=17;
                            publicznosc[3]=11;
                        }
                    if(dobra=="d")
                       {
                            publicznosc[3]=47;
                            publicznosc[1]=25;
                            publicznosc[2]=17;
                            publicznosc[0]=11;
                        }

                }
                else
                {
                       if(dobra=="a")
                        {
                            publicznosc[1]=47;
                            publicznosc[0]=25;
                            publicznosc[2]=17;
                            publicznosc[3]=11;
                        }
                    if(dobra=="b")
                        {
                            publicznosc[0]=47;
                            publicznosc[1]=25;
                            publicznosc[2]=17;
                            publicznosc[3]=11;
                        }
                    if(dobra=="c")
                        {
                            publicznosc[1]=47;
                            publicznosc[2]=25;
                            publicznosc[0]=17;
                            publicznosc[3]=11;
                        }
                    if(dobra=="d")
                       {
                            publicznosc[1]=47;
                            publicznosc[3]=25;
                            publicznosc[2]=17;
                            publicznosc[0]=11;
                        }
                }


                cout<<endl<<endl<<"Publicznosc juz zaglosowala. Oto wyniki glosowania: "<<endl<<endl;
                cout<<"Odp a - "<<publicznosc[0]<<"%"<<endl;
                cout<<"Odp b - "<<publicznosc[1]<<"%"<<endl;
                cout<<"Odp c - "<<publicznosc[2]<<"%"<<endl;
                cout<<"Odp d - "<<publicznosc[3]<<"%"<<endl;

}

void pomoc2(int szansa,string dobra)//funkcja do kola telefon do przyjaciela
{
    szansa = rand()%100+1;
        if(szansa<=65)
        {
           if(dobra=="a")
                cout<<"Mam zagwostke, ale raczej to odpowiedz a jest poprawna. :)";
           if(dobra=="b")
                cout<<"Mam zagwostke, ale raczej to odpowiedz b jest poprawna. :)";
            if(dobra=="c")
                cout<<"Mam zagwostke, ale raczej to odpowiedz c jest poprawna. :)";
            if(dobra=="d")
                cout<<"Mam zagwostke, ale raczej to odpowiedz d jest poprawna. :)";
        }
        else
        {
            if(dobra=="a")
                cout<<"Mam zagwostke, ale raczej to odpowiedz d jest poprawna. :)";
           if(dobra=="b")
                cout<<"Mam zagwostke, ale raczej to odpowiedz a jest poprawna. :)";
            if(dobra=="c")
                cout<<"Mam zagwostke, ale raczej to odpowiedz b jest poprawna. :)";
            if(dobra=="d")
                cout<<"Mam zagwostke, ale raczej to odpowiedz c jest poprawna. :)";
        }


}

void pomoc3(string dobra)// funkcja do kola 50/50
{
    if(dobra=="a")
            cout<<"Po uzyciu kola pozostaly nam odpowiedzi a i d.";
    if(dobra=="b")
            cout<<"Po uzyciu kola pozostaly nam odpowiedzi b i c.";
    if(dobra=="c")
            cout<<"Po uzyciu kola pozostaly nam odpowiedzi b i c.";
    if(dobra=="d")
            cout<<"Po uzyciu kola pozostaly nam odpowiedzi a i d.";
}

string ktore_pyt(int pytanie,string nazwapliku)//funkcja dobierajaca pytania do odpowiedniej rundy
{
            if(pytanie==1)
            {
                nazwapliku="pytania1.txt";
            }
            if(pytanie==2)
            {
                nazwapliku="pytania2.txt";
            }
            if(pytanie==3)
            {
                nazwapliku="pytania3.txt";
            }
            if(pytanie==4)
            {
                nazwapliku="pytania4.txt";
            }
            if(pytanie==5)
            {
                nazwapliku="pytania5.txt";
            }
            if(pytanie==6)
            {
                nazwapliku="pytania6.txt";
            }
            if(pytanie==7)
            {
                nazwapliku="pytania7.txt";
            }
            if(pytanie==8)
            {
                nazwapliku="pytania8.txt";
            }
            if(pytanie==9)
            {
                nazwapliku="pytania9.txt";
            }
            if(pytanie==10)
            {
                nazwapliku="pytania10.txt";
            }
            if(pytanie==11)
            {
                nazwapliku="pytania11.txt";
            }
            if(pytanie==12)
            {
                nazwapliku="pytania12.txt";
            }

    return nazwapliku;
}

int main()
{

    srand(time(NULL));
    pyt cos;
    pyt lista[10];
    bool pub,tel,pol,gra,gramyczyniegramy;
    string imie,pom,iprzyjaciela,nazwapliku,pomocnik,dobra,odpowiedz;// deklaracja wszystkich potrzebych zmiennych
    int los,pytanie,pomo,przyjaciel,szansa,j,linie=60,licznik,i;
    int publicznosc[4]{};
    char wybor,gram;
    long long int tab[10];
    string nick[10];
    double kwoty[13]{0,500,1000,2000,5000,10000,20000,40000,75000,125000,250000,500000,1000000};
    fstream plik;
    fstream pliczek;

    i=0;

    plik.open("TablicaWynikow.txt",ios::in);
    while(plik>>pom>>pomo)
    {
        tab[i]=pomo;
        nick[i]=pom;
        i++;
    }

    plik.close();

    while(true)
    {
    cout<<"||    || || ||    || |||||| ||   || |||| ||||  |||| ||   ||"<<endl;  //Wyswietlane menu
    cout<<"|||  ||| || ||    || ||  || |||  || ||   || ||   ||  || ||"<<endl;  //Wyswietlane menu
    cout<<"|| || || || ||    || ||  || || | || |||| ||||   |     ||"<<endl;   //Wyswietlane menu
    cout<<"||    || || ||    || ||  || ||  ||| ||   |||   ||     ||"<<endl;  //Wyswietlane menu
    cout<<"||    || || ||||  || |||||| ||   || |||| | ||  ||||   ||"<<endl;  //Wyswietlane menu

    cout<<endl<<endl<<"1) Start"<<endl;  //Wyswietlane menu
    cout<<"2) Instrukcja"<<endl;  //Wyswietlane menu
    cout<<"3) Tabela wynikow"<<endl;  //Wyswietlane menu
    cout<<"4) Wyjdz z gry"<<endl<<endl;  //Wyswietlane menu

    cin>>wybor;

    switch(wybor) //switch do menu do wtbrania odpowiedniej opcji
    {
    case '1': //wybor gry
        system("cls");
        cout<<"Wprowadz swoja nazwe gracza:"<<endl; //personalizajca gry wprowadzenie nicku gracza
        cin>>imie;
        system("cls");
        cout<<"Witam Cie "<<imie<<". Nazywam sie Hubert Urbanski a to sa Milionerzy"<<endl;
        cout<<"Przed rozpoczeciem gry przedstawie Ci po krotce zasady gry."<<endl;
        cout<<"Przed toba droga do miliona skladajaca sie z 12 pytan."<<endl;
        cout<<"Mamy 2 kwoty gwarantowane 1000 PLN i 40 000 PLN."<<endl;
        cout<<"Do dyspozycji masz 3 kola ratunkowe: pytanie do publicznosci, telefon do przyjaciela,50/50."<<endl;
        cout<<"Przed odpwiedzeniem na pytanie mozesz zrezygnowac i zabrac ze soba dotychczas wygrana sume pieniedzy."<<endl; // Po krotce przedstawienie zasad

        cout<<endl<<endl<<"Nacisnij dowolny klawisz aby rozpoczac gre";
        getch();
        system("cls");

        gra = true; pub = true; tel = true; pol = true; pytanie = 1; // ustawienie kol ratunkowych na dostepne i poziomu pytania na 1

        while(gra)
        {

            nazwapliku=ktore_pyt(pytanie,pomocnik);
            pliczek.open(nazwapliku,ios::in);

            i=0;
            j=0;

           while(j!=linie) //wprowadzenie pytan do tablicy z pliku txt
                {
                    getline(pliczek,cos.tresc);
                    j++;
                    getline(pliczek,cos.odpA);
                    j++;
                    getline(pliczek,cos.odpB);
                    j++;
                    getline(pliczek,cos.odpC);
                    j++;
                    getline(pliczek,cos.odpD);
                    j++;
                    getline(pliczek,cos.popodp);
                    j++;
                    lista[i].tresc=cos.tresc;
                    lista[i].odpA=cos.odpA;
                    lista[i].odpB=cos.odpB;
                    lista[i].odpC=cos.odpC;
                    lista[i].odpD=cos.odpD;
                    lista[i].popodp=cos.popodp;
                    i++;
                }

            cout<<"Oto nasze "<<pytanie<<" pytanie w dzisiejszej rozgrywce Milionerow: "<<endl<<endl;
            los=rand()%10; //losowanie pytania
            lista[los].info(); //losowanie pytania
            dobra = lista[los].popodp;
            cout<<endl<<endl;
            pomoce(pub,tel,pol);

            cout<<endl<<endl<<"Jaka jest twoja odpowiedz :"<<endl;
            cin>>gram;
            cout<<endl;

            gramyczyniegramy = true;

        while(gramyczyniegramy)//zabezpieczenie przed zle wprowadzona wartoscia
        {

            if(gram!='a' && gram!='b' && gram!='c' && gram!='d' && gram!='1' && gram!='2' && gram!='3' && gram!='x')  //zabezpieczenie przed zle wprowadzona wartoscia
            {
              cout<<endl<<"Zle podana wartosc, podaj odpowiedz jeszcze raz"<<endl;
            }
            else
            {
            switch (gram) //switch wyboru odpowiedzi i kol
            {
            case 'a':
                system("cls");
                cout<<"Po moich pewnych przemysleniach wybieram ostatecznie odpowiedz a. :)"<<endl;
                system("cls");
                gramyczyniegramy=false;
                odpowiedz="a";
                break;
            case 'b':
                system("cls");
                cout<<"Jestem prawie pewny/a ze to odpowiedz b. Prosze o zaznaczenie tej odpowiedzi. :)"<<endl;
                system("cls");
                gramyczyniegramy=false;
                odpowiedz="b";
                break;
            case 'c':
                system("cls");
                cout<<"Intuicja mi podpowiada, ze to odpowiedz c jest prawidlowa i prosze o zaznaczenie tej odpowiedzi. :)"<<endl;
                system("cls");
                gramyczyniegramy=false;
                odpowiedz="c";
                break;
            case 'd':
                system("cls");
                cout<<"Droga wykluczen i dedukcji wybieram odpowiedz d. :)"<<endl;
                system("cls");
                gramyczyniegramy=false;
                odpowiedz="d";
                break;
            case '1':
                if(pub)  //zabezpieczenie przed powtornym uzyciem kola
                {
                cout<<endl<<"Chce uzyc kola pytanie do publicznosci. :)";
                cout<<endl<<endl<<"Drodzy panstwo "<<imie<<" prosi was o pomoc. Prosze wybrac odpowiedz ktora wedlug panstwa jest poprawna"<<endl;
                pomoc1(szansa,publicznosc,dobra);
                }
                else
                {
                cout<<endl<<"Wykorzystales juz to kolo. Jesli nie podasz teraz poprawnej odpowiedzi zostanie ona uznana za zla :("<<endl;
                }
                cout<<endl<<endl<<"Jaka jest twoja odpowiedz "<<imie<<" ?"<<endl;;
                cin>>odpowiedz;
                pub=false;
                system("cls");
                gramyczyniegramy=false;
                break;
            case '2':
                if(tel)  //zabezpieczenie przed powtornym uzyciem kola
                {
                cout<<endl<<"Chce uzyc kola telefon do przyjaciela. :)";
                cout<<endl<<endl<<"Jak sie nazywa twoj przyjaciel ?"<<endl;
                cin>>iprzyjaciela;
                system("cls");
                cout<<"Takze dzwonimy do "<<iprzyjaciela<<"."<<endl<<endl;
                cout<<"Czesc "<<iprzyjaciela<<". Z tej strony Hubert Urbanski Milionerzy."<<endl;
                cout<<imie<<" postanowil/a wybrac kolo ratunkowe telefon do przyjaciela."<<endl;
                cout<<"Za chiwle przeczytam Ci pytanie a ty sprobujesz pomoc "<<imie<<" w drodze po milion PLN!!!"<<endl;
                cout<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                getch();
                system("cls");
                cout<<iprzyjaciela<<" oto pytanie:"<<endl<<endl;
                lista[los].info();
                pomoc2(szansa,dobra);
                }
                else
                {
                cout<<endl<<"Wykorzystales juz to kolo. Jesli nie podasz teraz poprawnej odpowiedzi zostanie ona uznana za zla :("<<endl;
                }
                cout<<endl<<endl<<"Jaka jest twoja odpowiedz "<<imie<<" ?";
                cin>>odpowiedz;
                tel=false;
                system("cls");
                gramyczyniegramy=false;
                break;
            case '3':
                if(pol) //zabezpieczenie przed powtornym uzyciem kola
                {
                cout<<"Chce uzyc kola 50/50. :)";
                pomoc3(dobra);
                }
                else
                {
                cout<<endl<<"Wykorzystales juz to kolo. Jesli nie podasz teraz poprawnej odpowiedzi zostanie ona uznana za zla :("<<endl;
                }
                cout<<endl<<endl<<"Jaka jest twoja odpowiedz "<<imie<<" ?";
                cin>>odpowiedz;
                pol=false;
                system("cls");
                gramyczyniegramy=false;
                break;
            case 'x':
                cout<<"Nie znam odpowiedzi chce zrezygnowac";
                cout<<endl<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                gra=false;
                getch();
                system("cls");
                gramyczyniegramy=false;
                break;
            }
            }

            if(gramyczyniegramy==true)
                cin>>gram;
        }

        // komunikaty wszystkich dostepnych mozliwosci w grze po udzieleniu odpowiedzi:

            if(odpowiedz==dobra && gra==true && pytanie==12)
            {
                cout<<"GRATULACJE "<<imie<<" JESTES NASZYM DZISIEJSZYM ZWYCIEZCA"<<endl<<"WYGRALES 1 000 000 PLN !!!";
                gra=false;
                cout<<endl<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                getch();
            }


            if(dobra==odpowiedz && gra==true && pytanie!=12)
            {
                cout<<"Gratulacje zdobywasz "<<kwoty[pytanie]<<" PLN";
                cout<<endl<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                pytanie++;
                getch();
                system("cls");
            }

            if(gra==false && gram=='x')
            {
                cout<<"Dziekujemy za udzial w programie wygrywasz "<<kwoty[pytanie-1]<<" PLN !!!"<<endl<<"GRATULACJE";
                cout<<endl<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                pytanie--;
                getch();
                system("cls");
            }

            if(dobra!=odpowiedz && gra==true)
            {
                cout<<"Niestety odpowiedz jest nieprawidlowa. :("<<endl;

                if(pytanie>2 && pytanie<8)
                    {
                        cout<<"Wygrales 1000 PLN !!! Gratulacje";
                        pytanie=2;
                        cout<<endl<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                        getch();
                    }

                if(pytanie>7)
                    {
                        cout<<"Wygrales 40 000 PLN !!! Gratulacje";
                        pytanie=7;
                        cout<<endl<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                        getch();
                    }

                if(pytanie<2)
                    {
                        cout<<"W dzisiejszym programie niestety nic nie wygrales. :("<<endl<<"Moze nastepnym razem sie uda. :)";
                        pytanie=0;
                        cout<<endl<<endl<<"Kliknij dowolny klawisz aby kontynuowac";
                        getch();
                    }

                gra=false;
            }



            if(gra==false) //wprowadzenie wyniku do tablicy najlepszych wynikow i posortowanie jej
            {
            if(tab[9]<kwoty[pytanie])
            {
                tab[9]=kwoty[pytanie];
                nick[9]=imie;
            }

            for(licznik=8;licznik>-1;licznik--)
            {
                if(tab[licznik+1]>tab[licznik])
                    {
                        swap(tab[licznik],tab[licznik+1]);
                        swap(nick[licznik],nick[licznik+1]);

                    }

            }



            plik.open("TablicaWynikow.txt",ios::out);

            for(i=0;i<10;i++)
                plik<<nick[i]<<" "<<tab[i]<<endl;

            plik.close();


            }
        pliczek.close();
        }
        system("cls");
        break;

    case '2': // wybor instrukcji w menu
        system("cls");
        cout<<"Witaj w grze Milionerzy. W grze chodzi o to aby wygrac milion zlotych,"<<endl<<"aby to zrobic musisz odpowiedziec prawidlowo na 12 pytan."<<endl;
        cout<<"Kazde pytanie ma 4 odpwiedzi w wariancie a,b,c,d; gdzie jedna odpowiedz jest prawidlowa."<<endl;
        cout<<"Z kazde pytanie czeka Cie odpowiednia kwota."<<endl<<"Mamy 2 kwoty gwarantowane  1000 PLN i 40 000 PLN odpowiednio za 2 i 7 pytanie."<<endl;
        cout<<"Podczas rozgrywki masz do dyspozycji 3 kola ratunkowe: pytanie do publicznosci - 1, telefon do przyjaciela - 2"<<endl;
        cout<<"50/50 - 3. Przed odpwiedzeniem na pytanie mozesz zrezygnowac i zabrac ze soba dotychczas wygrana sume pieniedzy."<<endl<<"Zycze ci milej zabawy i miliona PLN !!! :D"<<endl<<endl;
        cout<<"Aby wrocic do menu kliknij dowolny klawisz";
        getch();
        system("cls");
        break;

    case '3': //wybor tablicy wynikow w menu
        system("cls");
        cout<<"Tablica wynikow :"<<endl<<endl;
        for(i=0;i<10;i++)
            cout<<i+1<<"\t"<<nick[i]<<"\t"<<tab[i]<<" PLN"<<endl;

        cout<<endl<<endl<<"Aby wrocic do menu kliknij dowolny klawisz";
        getch();
        system("cls");
        break;

    case '4': //wybor wylaczenie programu w menu
        system("cls");
        cout<<"Dziekuje za skorzystanie z mojej gry i zapraszam ponownie :D"<<endl<<endl<<endl;
        cout<<"Created by : Michal Rojczyk"<<endl;
        exit(0);
        break;
    default:
        system("cls");
        continue;
        break;

    }
    }
}

