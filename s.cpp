#include<iostream>
#include<fstream>
#include<cctype>
#include <graphics.h>
#include<conio.h>
#include<windows.h>
using namespace std;

class password
{
  private:
      char username [30];
      char pass [12];
  public:
    void get_fix();

};
void password::get_fix()
{
    cout<<"Input User name: ";
    cin>>username;
    cout<<"Enter User Password: ";
    char ch;
    int i=0;
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            pass[i]='\0';
            break;
        }
        else if(ch==8)
        {
            if(i>0)
            {
                i--;
                cout<<"\b \b";
            }
        }
        else if(ch==32||ch==9)
        {
            continue;
        }
        else
        {
            pass[i]=ch;
            i++;
            cout<<"*";
        }
    }
    pass[i]='\0';
    cout<<"\n";
    if((strcmp(username,"sumaiya")==0)&&(strcmp(pass,"17203029")==0))
    {
        cout<<"";
    }
    else
    {
        cout<<"\n\n !!Sorry Try Again.....\n"<<endl;
        getch();
        system("cls");
        get_fix();
    }
}
   class Artist
    {
public:
    string Nativename;
    string Bron;
    string Died;
    string Nationality  ;
    string Education;
    string Occupation;
    string Notablework;
    string Awards;
    string ZainulAbedin;
string ZainulAbedinBiography();
string ZainulAbedinArt();

};Artist r;


class admin
{
public:
    string ID;
    string pass;
};

class Biography
{
public:
    string name;
    string birthdate;
    string deathdate;
    string nationality;
    string edu;
    string occu;
};

void editArtistInfo(string s)
{
    Biography b;
    b.name=s;
    cout<<"Enter artist's birth date : ";
    cin>>b.birthdate;
    cout<<"Enter artist's death date : ";
    cin>>b.deathdate;
    cout<<"Enter artist's nationality :";
    cin>>b.nationality;
    cout<<"Enter artist's edu :";
    cin>>b.edu;
    cout<<"Enter artist's occu :";
    cin>>b.occu;
}






void admin()
{
    cout<<"Do you want to edit artist info?"<<endl;
    cout<<"Insert your option (Y/N) : ";
    char n;
    cin>>n;
    if(n=='Y' || n=='y')
    {
        cout<<"Enter Artist name : ";
        string s;
        cin>>s;
        getchar();

    }
    else
    {
        system("cls");
        cout<<"Press enter to go back."<<endl;
        cin.get();
    }
}




void ArtistInfo()
{
    system("Cls");
    cout<<"Artist Nativename: "<<r.Nativename<<endl;
    cout<<"Artist Bron: "<<r.Bron<<endl;
    cout<<"Artist Died: "<<r.Died<<endl;
    cout<<"Artist Nationality : "<<r.Nationality<<endl;
    cout<<"Artist Education: "<<r.Education<<endl;
    cout<<"Artist Occupation: "<<r.Occupation<<endl;
    cout<<"Artist Notablework: "<<r.Notablework<<endl;
    cout<<"Artist Awards: "<<r.Awards<<endl;
    cout<<"Artist ZainulAbedin: "<<r.ZainulAbedin<<endl;
    cout<<"Artist Awards: "<<r.Awards<<endl;
    int n;
    cin>>n;
}
void insertArtistInfo()
{
    system("Cls");
    cout<<"Enter Artist Nativename: ";
    cin>>r.Nativename;
    cout<<"Enter Artist Bron: ";
    cin>>r.Bron;
cout<<"Enter Artist Died: ";
    cin>>r.Died;
cout<<"Enter Artist Nationality: ";
    cin>>r.Nationality;
cout<<"Enter Artist Education: ";
    cin>>r.Education;
cout<<"Enter Artist Occupation: ";
    cin>>r.Occupation;
cout<<"Enter Artist Notablework: ";
    cin>>r.Notablework;

cout<<"Enter Artist Awards: ";
    cin>>r.Awards;

    cout<<"Thank You.\nPress Enter to go back to main page."<<endl;
    cin.get();



}



void ZainulAbedin();
void ZainulAbedinBiography();
void ZainulAbedinArt();
void TheStruggle();
void Rebelcow();
void Faminepaintings();
void Nobanno();
void StudyofaCrow();
void admin();
void Rebelcowcodenumber1102();
void Nobannocodenumber1104();
void StudyofaCrowcodenumber1105();



void SafiuddinAhmed();
void SafiuddinAhmedBiography();
void SafiuddinAhmedArt();
void TheSoundofthewater();
void Onthewaytothefair();
void ViewfromSantiniketan();
void BoatandTree();
void Composition();
void AbookstallinParis();

void ShahabuddinAhmed();
void ShahabuddinAhmedBiography();
void ShahabuddinAhmedArt();
void Gandhi();
void Bangabandhu();
void TheFreedonFighter();

void MurtozaBashir();
void MurtozaBashirBiography();
void MurtozaBashirArt();
void Bangladesh();
void NakhsiKatha();
void MyLady();

void ArtistInfo();
void insertArtistInfo();

void ShishirBhattacharjee();
void ShishirBhattacharjeeBiography();
void ShishirBhattacharjeeArt();
void Comeandseethegame() ;
void GalleryOldham();
void FORBUY();
void BuyArt();
void codenumber11();
void codenumber12();
void codenumber13();
void codenumber14();
void codenumber15();

void TheStrugglecodenumber1101();
void Faminepaintingscodenumber1103();
void TheSoundofthewatercodenumber1201();
void Onthewaytothefaircodenumber1202();
void ViewfromSantiniketancodenumber1203();
void BoatandTreecodenumber1204();
void Compositioncodenumber1205();
void AbookstallinPariscodenumber1206();
void Gandhicodenumber1301();
void Bangabandhucodenumber1302();
void TheFreedomFightercodenumber1303();

void Bangladeshcodenumber1401();
void NakhsiKathacodenumber1402();
void MyLadycodenumber1403();
void Comeandseethegamecodenumber1501();
void GalleryOldhamcodenumber1502();


int main();





void VISITGALLERY()
{
    system("Cls");
     cout<<"\n\t\t\t\t\t\t\t ...::::\xB2\xB2  List of Bangladeshi painters \xB2\xB2:::::....\n\n\n";

    cout<<"\t\t\t\t\t\t\t\t (1)Zainul Abedin\n\n";
    cout<<"\t\t\t\t\t\t\t\t (2)Safiuddin Ahmed\n\n";
    cout<<"\t\t\t\t\t\t\t\t (3)Shahabuddin Ahmed\n\n";
    cout<<"\t\t\t\t\t\t\t\t (4)Murtoza Bashir\n\n";
    cout<<"\t\t\t\t\t\t\t\t (5)Shishir Bhattacharjee\n\n";
    cout<<"\t\t\t\t\t\t\t\t (6)Previous Page\n\n";
    cout<<"\n\n\t\t\t\t\t\t (0)EXIT";



    cout<<"\n\n\t\t\t\t\t\t Enter Your Choice:";



int ch;
		cin>>ch;
while(1)
switch(ch)
		{
		case '1':
			cout<<"\n\tZainul Abedin\n";
			ZainulAbedin();
			break;
        case '2':

           cout<<"\n\t\tSafiuddin Ahmed\n";
           SafiuddinAhmed();
			break;
        case '3':
            cout<<"\n\t\tShahabuddin Ahmed\n";
            ShahabuddinAhmed();
			break;
         case '4':
            cout<<"\n\t\tMurtoza Bashir\n";
            MurtozaBashir();
			break;
			case '5':
            cout<<"\n\t\tShishir Bhattacharjee\n";
            ShishirBhattacharjee();
			break;
			case '6':
            cout<<"\n\t\tPrevious Page\n";
            main();
			break;
			case '0':
            cout<<"\n\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

}

void ZainulAbedin()
{
    system("Cls");
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(1)Zainul Abedin BIOGRAPHY";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(2)Zainul Abedin ART ";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(3)Previous Page \n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t(4) EXIT";
		cout<<"\n\n\t\t\tEnter Your Choice:";
		char ch;
		cin>>ch;

switch(ch)
		{
		case '1':
			cout<<"\n\tZainul Abedin Biography\n";
            ZainulAbedinBiography();
			break;
        case '2':
            cout<<"\n\t\tZainul Abedin  Art\n";
			ZainulAbedinArt();
			break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           VISITGALLERY();
		break;
		case '4':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";
}
system("Cls");
}





void ZainulAbedinBiography()
{

    system("Cls");


cout<<"\t\t\t\t\t\tNative name  :	Zainul Abedin\n\n";
cout<<"\t\t\t\t\t\tBron         :29 December 1914 Kishoreganj, East Bengal, British India\n\n";
cout<<"\t\t\t\t\t\t\t\t\(now Bangladesh)\n\n";
cout<<"\t\t\t\t\t\tDied	        :28 May 1976 (aged 61)Dhaka, Bangladesh\n\n";
cout<<"\t\t\t\t\t\tNationality  :	Bangladeshi\n\n";
cout<<"\t\t\t\t\t\tEducation	:Government Art School, Calcutta Art School, London\n\n";
cout<<"\t\t\t\t\t\tOccupation	:Painting, drawing\n\n";
cout<<"\t\t\t\t\t\tNotable work	:The Struggle,Rebel cow,Famine paintings, Nobanno,\n\n\t\t\t\t\t\t\t\t\t\t\Study of a Crow,Two faces\n\n";
cout<<"\t\t\t\t\t\tAwards	    :Painting, drawing\n\n";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("a.JPEG",0,0,300,300);
delay(1000);
readimagefile("a.JPEG",0,0,300,300);
delay(1500);
readimagefile("a.JPEG",0,0,300,300);
delay(1500);
readimagefile("a.JPEG",0,0,300,300);
delay(1500);
readimagefile("a.JPEG",300,300,0,0);
delay(1500);
readimagefile("a.JPEG",0,0,300,300);
delay(1500);
readimagefile("a.JPEG",0,0,300,300);
delay(1500);
readimagefile("a.JPEG",0,0,300,300);
delay(1500);
readimagefile("z7.JPEG",0,0,300,300);
delay(1500);





cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
           ZainulAbedin();
		break;
		case '0':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";

}
getche();
}
}

void ZainulAbedinArt()
 {
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1)The Struggle\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)Rebel cow\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)Famine paintings\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(4)Nobanno\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(5)Study of a Crow\n\n";
cout<<"\n\n\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
while(1)
switch(ch)
		{
		case '1':
			cout<<"\n\tThe Struggle\n";
            TheStruggle();
			break;
        case '2':

			cout<<"\n\t\tRebel cow\n";
			Rebelcow();

			break;
			case '3':

			cout<<"\n\t\tFamine paintings\n";
			Faminepaintings();

			break;
		case '4':

			cout<<"\n\t\tNobanno\n";
			Nobanno();

			break;
		case '5':

			cout<<"\n\t\tStudy of a Crow\n";
			StudyofaCrow();

			break;



			break;
        case '0':
           cout<<"\n\n\t\t\tPrevious Page \n\n";
           ZainulAbedin();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
system("Cls");
 }
void TheStruggle()
{
     system("Cls");
cout<<"\t\t\t\t\t\t\t\tyear :1976 \n\n";
cout<<"\t\t\t\t\t\t\t\tthecinque  :Oil on Canvas\n\n";
cout<<"\t\t\t\t\t\t\t\tdimention: -x-  cm";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("o3.JPEG",0,0,300,300);
delay(1500);
readimagefile("o4.JPEG",0,0,300,300);
delay(1500);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ZainulAbedinArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
void Rebelcow()
{
     system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("o.JPEG",0,0,300,300);
delay(500);
readimagefile("o2.JPEG",0,0,300,300);
delay(1000);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ZainulAbedinArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}

void Faminepaintings()
{
system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("f.JPEG",0,0,300,300);
delay(1000);
readimagefile("f1.JPEG",0,0,300,300);
delay(1000);
readimagefile("f2.JPEG",0,0,300,300);
delay(1000);
readimagefile("f3.JPEG",0,0,300,300);
delay(1000);
readimagefile("f4.JPEG",0,0,300,300);
delay(1000);
readimagefile("f5.JPEG",0,0,300,300);
delay(1000);
readimagefile("f6.JPEG",0,0,300,300);
delay(1000);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ZainulAbedinArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}


void Nobanno()
{system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("n2.JPEG",0,0,300,300);
delay(1000);
readimagefile("n1.JPEG",0,0,300,300);
delay(1000);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ZainulAbedinArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}



 void StudyofaCrow()
    {
        system("cls");
        cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("cr.JPEG",0,0,300,300);
delay(1000);
readimagefile("cr1.JPEG",0,0,300,300);
delay(1000);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ZainulAbedinArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
void SafiuddinAhmed()
{
    system("Cls");
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(1)Safiuddin Ahmed BIOGRAPHY";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(2)Safiuddin Ahmed Abedin ART ";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(3)Previous Page \n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t(4) EXIT";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tEnter Your Choice:";
		char ch;
		cin>>ch;

switch(ch)
		{
		case '1':
			cout<<"\n\tSafiuddin Ahmed Biography\n";
            SafiuddinAhmedBiography();
			break;
        case '2':
            cout<<"\n\t\tSafiuddin Ahmed  Art\n";
			SafiuddinAhmedArt();
			break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           VISITGALLERY();
		break;
		case '4':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";
}
system("Cls");
}
void SafiuddinAhmedBiography()
{
    system("Cls");


cout<<"\t\t\t\t\t\tNative name  :Safiuddin Ahmed\n\n";

cout<<"\t\t\t\t\t\tBron   : 	23 June 1922 Calcutta, Bengal Presidency, British India\n\n";
cout<<"\t\t\t\t\t\t\t\t(now Bangladesh)\n\n";
cout<<"\t\t\t\t\t\tDied	        :20 May 2012 (aged 89)Dhaka, Bangladesh\n\n";
cout<<"\t\t\t\t\t\tNationality     :	Bangladeshi\n\n";
cout<<"\t\t\t\t\t\tEducation	:Alma mater	Government School of Art, London\n\n";
cout<<"\t\t\t\t\t\tOccupation	:Artist\n\n";
cout<<"\t\t\t\t\t\tNotable work	:On the way to the fair,Boat and Tree, Composition\n\n";
cout<<"\t\t\t\t\t\tAwards	    :Independence Day Award (1996) ,Ekushey Padak (1978)\n\n";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("sa1.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa4.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa2.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa3.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa1.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa2.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa3.JPEG",0,0,300,300);
delay(1500);
readimagefile("sa4.JPEG",0,0,300,300);
delay(1500);





cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
           SafiuddinAhmed();
		break;
		case '0':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";

}
getche();
}
}

void SafiuddinAhmedArt ()
 {
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1)The Sound of the water\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)On the way to the fair\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)View from Santiniketan\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(4)Boat and Tree\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(5)Composition\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(6)A bookstall in Paris\n\n";

cout<<"\n\n\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
while(1)
switch(ch)
		{
		case '1':
			cout<<"\n\tThe Sound of the water\n";
            TheSoundofthewater();
			break;
        case '2':

			cout<<"\n\t\tOn the way to the fair\n";
			Onthewaytothefair();

			break;
			case '3':

			cout<<"\n\t\tView from Santiniketan\n";
			ViewfromSantiniketan();

			break;
		case '4':

			cout<<"\n\t\tBoat and Tree\n";
			BoatandTree();

			break;
		case '5':

			cout<<"\n\t\tComposition\n";
			Composition();

			break;

case '6':

			cout<<"\n\t\tA bookstall in Paris\n";
			AbookstallinParis();

			break;


			break;
        case '0':
           cout<<"\n\n\t\t\tPrevious Page \n\n";
           SafiuddinAhmed();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
system("Cls");
 }
void TheSoundofthewater()
{
     system("Cls");
cout<<"\t\t\t\t\t\t\t\tyear :1985 \n\n";
cout<<"\t\t\t\t\t\t\t\tthecinque  :Etching\n\n";
cout<<"\t\t\t\t\t\t\t\tdimention: 64 X32 cm";
initwindow(300,300,"insert image");

readimagefile("ts.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            SafiuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}

void Onthewaytothefair()
{
     system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :, 1947 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Wood Engraving\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65-x-32  cm";
initwindow(300,300,"insert image");
readimagefile("on.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
        SafiuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}


void ViewfromSantiniketan()
{
system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear : 1945\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Dry-point\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 20 x 11cm   ";
initwindow(300,300,"insert image");

readimagefile("sn.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            SafiuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}



void BoatandTree ()
{
    system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1966 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Charcoal and Crayon\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm";
initwindow(300,300,"insert image");

readimagefile("bt.JPEG",0,0,300,300);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            SafiuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}




 void Composition()
    {
        system("cls");
        cout<<"\t\t\t\t\t\t\t\t\tyear :1958\n\n";

cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Engraving Aquatint\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm";
initwindow(300,300,"insert image");
readimagefile("co.JPEG",0,0,300,300);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            SafiuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
void AbookstallinParis()
    {
        system("cls");
        cout<<"\t\t\t\t\t\t\t\t\tyear : 1960\n\n";

cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Oil\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm";
initwindow(300,300,"insert image");
readimagefile("ab.JPEG",0,0,300,300);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            SafiuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
void ShahabuddinAhmed()
{
    system("Cls");
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(1)Shahabuddin Ahmed BIOGRAPHY";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(2)Shahabuddin Ahmed  ART ";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(3)Previous Page \n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t(4) EXIT";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tEnter Your Choice:";
		char ch;
		cin>>ch;

switch(ch)
		{
		case '1':
			cout<<"\n\tShahabuddin Ahmed Biography\n";
            ShahabuddinAhmedBiography();
			break;
        case '2':
            cout<<"\n\t\tShahabuddin Ahmed  Art\n";
			ShahabuddinAhmedArt();
			break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           VISITGALLERY();
		break;
		case '4':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";
}
system("Cls");
}
void ShahabuddinAhmedBiography()
{
    system("Cls");


cout<<"\t\t\t\t\t\tNative name  :Shahabuddin Ahmed\n\n";

cout<<"\t\t\t\t\t\tBron   : 	11 September 1950 (age 67)Dhaka,East Bengal,Dominion of Pakistan\n\n";
cout<<"\t\t\t\t\t\t\t\t(now Bangladesh)\n\n";
cout<<"\t\t\t\t\t\tDied	        :20 May 2012 (aged 89)Dhaka, Bangladesh\n\n";
cout<<"\t\t\t\t\t\tNationality     :	Bangladeshi\n\n";
cout<<"\t\t\t\t\t\tEducation	:Alma mater	University of Dhaka\n\n";
cout<<"\t\t\t\t\t\tOccupation	:Painter\n\n";
cout<<"\t\t\t\t\t\tNotable work	: Sheikh Mujibur Rahman and Mahatma Gandhi\n\n";
cout<<"\t\t\t\t\t\tAwards:2014 : Chevalier de l'ordre des Arts et des Lettres \n\n\t\t\t\t\t\t\t(Knight in the order of Art & Literature) Paris, France.\n\n";
cout<<"\t\t\t\t1992 :Olympiad of Arts Master Painters of Contemporary Art”Barcelona,Spain\n\n";
cout<<"\t\t\t\t\t\t1982 : Best Award in painting,Young Artists Art Exhibition \n\n\t\t\t\t\tBangladesh Shilpakala Academy, Dhaka, Bangladesh\n\n";
cout<<"\t\t\t\t\t\t1981 : Gold Medal, Salon du Printemps, Paris, France\n\n";

initwindow(300,300,"insert image");
while(1)
{
readimagefile("ah1.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah2.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah3.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah4.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah5.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah6.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah7.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah8.JPEG",0,0,300,300);
delay(1500);
readimagefile("ah2.JPEG",0,0,300,300);
delay(1500);





cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
           ShahabuddinAhmed();
		break;
		case '0':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";

}
getche();
}
}

void ShahabuddinAhmedArt ()
 {
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1) Gandhi\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)Bangabandhu\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)TheFreedom Fighter\n\n";

cout<<"\n\n\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
while(1)
switch(ch)
		{
		case '1':
			cout<<"\n\t Gandhi \n\n";
            Gandhi();
			break;
        case '2':

			cout<<"\n\tBangabandhu\n\n";
			Bangabandhu();
			break;
			case '3':

			cout<<"\n\tTheFreedom Fighter\n\n";
			TheFreedonFighter();

			break;

        case '0':
           cout<<"\n\n\t\t\tPrevious Page \n\n";
           ShahabuddinAhmed();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
system("Cls");
 }
void Gandhi()
{
     system("Cls");
cout<<"\t\t\t\t\t\t\t\tyear :1994 \n\n";
cout<<"\t\t\t\t\t\t\t\tthecinque  :acrylic on canvas\n\n";
cout<<"\t\t\t\t\t\t\t\tdimention: 34 x 29in. (91.2 x 75cm.)";
initwindow(300,300,"insert image");

readimagefile("ga.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ShahabuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}

void Bangabandhu()
{
     system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :2009 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :oil paint\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65-x-32  cm";
initwindow(300,300,"insert image");
while(1)
{

readimagefile("ban.JPEG",0,0,300,300);
delay(1000);
readimagefile("ban1.JPEG",0,0,300,300);
delay(1000);
readimagefile("ban2.JPEG",0,0,300,300);
delay(1000);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
        ShahabuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}


void TheFreedonFighter()
{
system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear : 2006\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :water color\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 20 x 11cm   ";
initwindow(300,300,"insert image");

readimagefile("fr.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ShahabuddinAhmedArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}


void MurtozaBashir()
{
    system("Cls");
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(1)Murtoza Bashir BIOGRAPHY";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(2)Murtoza Bashir  ART ";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(3)Previous Page \n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t(4) EXIT";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tEnter Your Choice:";
		char ch;
		cin>>ch;

switch(ch)
		{
		case '1':
			cout<<"\n\tMurtoza Bashir Biography\n";
            MurtozaBashirBiography();
			break;
        case '2':
            cout<<"\n\t\tMurtoza Bashir  Art\n";
			MurtozaBashirArt();
			break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           VISITGALLERY();
		break;
		case '4':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";
}
system("Cls");
}
void MurtozaBashirBiography()
{
    system("Cls");


cout<<"\t\t\t\t\t\tNative name  :Murtoza Bashir\n\n";

cout<<"\t\t\t\t\t\tBron    : 	August 17, 1932 Dacca, Bengal Presidency (now Dhaka, Bangladesh)\n\n";
cout<<"\t\t\t\t\t\tNationality     :	Bangladeshi\n\n";
cout<<"\t\t\t\t\t\tEducation	:Alma mater	Government Institute of Arts and Crafts, \n\n\t\t\t\t\t\t(now Faculty of Fine Arts, University of Dhaka)\n\n";
cout<<"\t\t\t\t\t\tOccupation	:Painter\n\n";
cout<<"\t\t\t\t\t\tNotable work	: Bangladesh, Martyrs Tree, Wing-2\n\n";
cout<<"\t\t\t\t\t\tAwards       : 	Ekushey Padak 1980";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("mu.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu2.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu3.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu4.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu5.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu6.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu1.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu2.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu3.JPEG",0,0,300,300);
delay(1500);





cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
           MurtozaBashir();
		break;
		case '0':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";

}
getche();
}
}

void MurtozaBashirArt ()
 {
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1) Bangladesh\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)Nakhsi Katha\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)My Lady\n\n";

cout<<"\n\n\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
while(1)
switch(ch)
		{
		case '1':
			cout<<"\n\t Bangladesh\n\n";
            Bangladesh();
			break;
        case '2':

			cout<<"\n\tNakhsiKatha\n\n";
			NakhsiKatha();
			break;
			case '3':

			cout<<"\n\tMy Lady\n\n";
			MyLady();

			break;

        case '0':
           cout<<"\n\n\t\t\tPrevious Page \n\n";
           MurtozaBashir();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
system("Cls");
 }
void Bangladesh ()
{
     system("Cls");
cout<<"\t\t\t\t\t\t\t\tyear :1967 \n\n";
cout<<"\t\t\t\t\t\t\t\tthecinque  :Oil on canvas\n\n";
cout<<"\t\t\t\t\t\t\t\tdimention: 103 × 154.5 cm";
initwindow(300,300,"insert image");

readimagefile("bn.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            MurtozaBashirArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}

void NakhsiKatha()
{
     system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1994\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  : Oil on canvas \n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65-x-32  cm";
initwindow(300,300,"insert image");

readimagefile("na.JPEG",0,0,300,300);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
        MurtozaBashirArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}


void MyLady()
{
system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear : 2000\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  : Oil on canvas\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 20 x 11cm   ";
initwindow(300,300,"insert image");

readimagefile("my.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            MurtozaBashirArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}


void ShishirBhattacharjee()
{
    system("Cls");
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(1)Shishir Bhattacharjee BIOGRAPHY";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(2)Shishir Bhattacharjee  ART ";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t(3)Previous Page \n\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t(4) EXIT";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tEnter Your Choice:";
		char ch;
		cin>>ch;

switch(ch)
		{
		case '1':
			cout<<"\n\tShishir Bhattacharjee Biography\n";
            ShishirBhattacharjeeBiography();
			break;
        case '2':
            cout<<"\n\t\tShishir Bhattacharjee  Art\n";
			ShishirBhattacharjeeArt();
			break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           VISITGALLERY();
		break;
		case '4':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";
}
system("Cls");
}
void ShishirBhattacharjeeBiography()
{
    system("Cls");


cout<<"\t\t\t\t\t\tNative name  :Shishir Bhattacharjee\n\n";
cout<<"\t\t\t\t\t\tBron    : 	1960 (age 57–58)\n\n";
cout<<"\t\t\t\t\t\tNationality     :	Bangladeshi\n\n";
cout<<"\t\t\t\t\t\tEducation	: University of Dhaka\n\n";
cout<<"\t\t\t\t\t\tOccupation	:Painter,cartoonist\n\n";
cout<<"\t\t\t\t\t\tNotable work	: Bangladesh, Martyrs Tree, Wing-2\n\n";
cout<<"\t\t\t\t\t\tAwards       : 	Ekushey Padak 1980";
initwindow(300,300,"insert image");
while(1)
{
readimagefile("sh.JPEG",0,0,300,300);
delay(1500);
readimagefile("sh1.JPEG",0,0,300,300);
delay(1500);
readimagefile("mu3.JPEG",0,0,300,300);
delay(1500);
readimagefile("sh2.JPEG",0,0,300,300);
delay(1500);
readimagefile("sh4.JPEG",0,0,300,300);
delay(1500);
readimagefile("sh3.JPEG",0,0,300,300);
delay(1500);





cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
           ShishirBhattacharjee();
		break;
		case '0':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";

}
getche();
}
}

void ShishirBhattacharjeeArt ()
 {
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1) Come and see the game \n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)GalleryOldham\n\n";

cout<<"\n\n\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
while(1)
switch(ch)
		{
		case '1':
			cout<<"\n\t Come and see the game , 1993\n\n";
            Comeandseethegame ();
			break;
        case '2':

			cout<<"\n\tGallery Oldhame\n\n";
			GalleryOldham();
			break;

        case '0':
           cout<<"\n\n\t\t\tPrevious Page \n\n";
           ShishirBhattacharjee();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
system("Cls");
 }
void Comeandseethegame ()
{
     system("Cls");
cout<<"\t\t\t\t\t\t\t\tyear : 1996 \n\n";
cout<<"\t\t\t\t\t\t\t\tthecinque  :oil and canvas \n\n";
cout<<"\t\t\t\t\t\t\t\tdimention: 65 x 109  cm";
initwindow(300,300,"insert image");

readimagefile("cooo.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
            ShishirBhattacharjee();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}

void GalleryOldham  ()
{
     system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1999\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  : water clour \n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 60-x-30  cm";
initwindow(300,300,"insert image");

readimagefile("g.JPEG",0,0,300,300);

cout<<"\n\n\t\t\t\t\t(1)Previous Page \n\n";
cout<<"\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{

       case '1':
           cout<<"\n\n\t\t\t(1)Previous Page \n\n";
        ShishirBhattacharjeeArt();
		break;
		case '2':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
void FORBUY()
{
    system("Cls");

cout<<"\n\n\t\t\t\t\t\t\t\t\t(1)Buy Art ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t(2)Previous Page \n\n";
cout<<"\t\t\t\t\t\t\t\t\t(0) EXIT";
cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
switch(ch)
		{
        case '1':
            cout<<"\n\n\t\t\t(1)Buy Art \n\n";
            BuyArt();
            break;

       case '2':
           cout<<"\n\n\t\t\t(2)Previous Page \n\n";
        main();
		break;
		case '0':

		cout<<"\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
}
void BuyArt()

{
    system("Cls");
   cout<<"\t\t\t\t\t\t\t\t\t(1)Zainul Abedin code number -11\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t(2)Safiuddin Ahmed code number -12\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t(3)Shahabuddin Ahmed code number -13\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t(4)Murtoza Bashir code number -14\n\n";
   cout<<"\t\t\t\t\t\t\t\t\t(5)Shishir Bhattacharjee code number -15\n\n";
   initwindow(300,300,"insert image");
while(1)
{
readimagefile("z1.JPEG",0,0,300,300);
delay(500);
readimagefile("sa.JPEG",0,0,300,300);
delay(500);
readimagefile("ah.JPEG",0,0,300,300);
delay(500);
readimagefile("mu2.JPEG",0,0,300,300);
delay(500);
readimagefile("sh4.JPEG",0,0,300,300);
delay(500);


   cout<<"\t\t\t\t\t\t\t\t\t(6)Previous Page\n\n";
   cout<<"\t\t\t\t\t\t\t\t\t(0) EXIT";
   cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Your code:";
char ch;
		cin>>ch;
while(1)
switch(ch)
		{
		case '1':
			cout<<"\n\t\t(1)Zainul Abedin code number-11\n";
			codenumber11();
			break;
        case '2':

           cout<<"\n\t\t(2)Safiuddin Ahmed code number-12\n";
           codenumber12();
			break;
        case '3':
            cout<<"\n\t\t(3)Shahabuddin Ahmed\n";
            codenumber13();
			break;
         case '4':
            cout<<"\n\t\t(4)Murtoza Bashir\n";
           codenumber14();
			break;
			case '5':
            cout<<"\n\t\t(5)Shishir Bhattacharjee\n";
           codenumber15();
			break;
			case '6':
            cout<<"\n\t\tPrevious Page\n";
             FORBUY();
			break;
			case '0':
            cout<<"\n\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}
}
getche();
}


void codenumber11()
{
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1)The Struggle code number-1101\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)Rebel cow code number-1102\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)Famine paintings code number-1103\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(4)Nobanno code number-1104\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(5)Study of a Crow code number-1105\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
switch(ch)
		{
		case '1':
			cout<<"\n\t(1)The Struggle code number-1101\n";
            TheStrugglecodenumber1101();
			break;
        case '2':

			cout<<"\n\t\t(2)Rebel cow code number-1102\n";
			Rebelcowcodenumber1102();

			break;
			case '3':

			cout<<"\n\t\t(3)Famine paintings code number-1103\n";
			Faminepaintingscodenumber1103();

			break;
		case '4':

			cout<<"\n\t\t(4)Nobanno code number-1104\n";
			Nobannocodenumber1104();

			break;
		case '5':

			cout<<"\n\t\t(5)Study of a Crow code number-1105\n";
			StudyofaCrowcodenumber1105();

			break;



			break;
        case '0':
           cout<<"\n\n\t\t\t(0)Previous Page \n\n";
           BuyArt();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
}

void Rebelcowcodenumber1102()

{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 30-x- 50 cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :200$";

initwindow(300,300,"insert image");
readimagefile("o.JPEG",0,0,300,300);

cout<<"\n\n\t\t\t\t\t\t\t\t\t\t Brought 1102 ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t (1)yes ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t (2)no";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t (3)Previous Page";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("sd3.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Rebelcowcodenumber1102();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You";
           initwindow(300,300,"insert image");
           readimagefile("sd2.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Rebelcowcodenumber1102();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber11();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void TheStrugglecodenumber1101()
{

system("Cls");
cout<<"\t\t\t\t\t\t\t\tyear :1976 \n\n";
cout<<"\t\t\t\t\t\t\t\tthecinque  :Oil on Canvas\n\n";
cout<<"\t\t\t\t\t\t\t\tdimention: -x-  cmn\n\n";
cout<<"\t\t\t\t\t\t\t\tprice    :300$";

initwindow(300,300,"insert image");
readimagefile("o3.JPEG",0,0,300,300);
delay(1500);
cout<<"\n\n\t\t\t\t\t\t Brought 1101/n/n ";
cout<<"\n\n\t\t\t\t\t\t (1)yes ";
cout<<"\n\n\t\t\t\t\t\t (2)no";
cout<<"\n\n\t\t\t\t\t\t (3)Previous Page";
cout<<"\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\n\n\t\t\t\t\t\tEnter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("im.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           TheStrugglecodenumber1101();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd1.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           TheStrugglecodenumber1101();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber11();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void Faminepaintingscodenumber1103()


{

system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 56-x- 70 cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice    :300$";
initwindow(300,300,"insert image");
readimagefile("f.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t\t\t\t\t Brought 1103 ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)yes ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (2)no";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (3)Previous Page";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("im.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Faminepaintingscodenumber1103();

           case '0':
            cout<<"\n\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)no\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You";
           initwindow(300,300,"insert image");
           readimagefile("sd.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Faminepaintingscodenumber1103();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber11();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void Nobannocodenumber1104()
{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 50-x-60  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice    :300$\n\n";

initwindow(300,300,"insert image");
readimagefile("n2.JPEG",0,0,300,300);
cout<<"\t\t\t\t\t\t\t\t\t Brought 1104\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("tha.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Nobannocodenumber1104();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd4.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Nobannocodenumber1104();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber11();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void StudyofaCrowcodenumber1105()
{
    {

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear :1951 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :watercolor\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 50-x-60  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice    :400$\n\n";

initwindow(300,300,"insert image");
readimagefile("cr.JPEG",0,0,300,300);
cout<<"\t\t\t\t\t\t\t\t\t Brought 1105\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("taa.gif",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           StudyofaCrowcodenumber1105();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd5.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
                  StudyofaCrowcodenumber1105();;

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber11();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
}
void codenumber12()
{
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1)The Sound of the water code number-1201\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)On the way to the fair code number-1202\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3) View from Santiniketan code number-1203\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(4)Boat and Tree code number-1204\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(5)Composition code number-1205\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(6)A bookstall in Paris code number-1206\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
switch(ch)
		{
		case '1':
			cout<<"\n\t(1)The Sound of the water code number-1201\n";
            TheSoundofthewatercodenumber1201();
			break;
        case '2':

			cout<<"\n\t\t(2)On the way to the fair code number-1202\n";
			Onthewaytothefaircodenumber1202();

			break;
			case '3':

			cout<<"\n\t\t(3)View from Santiniketan code number-1203\n";
			ViewfromSantiniketancodenumber1203();

			break;
		case '4':

			cout<<"\n\t\t(4)Boat and Tree code number-1204\n";
			BoatandTreecodenumber1204();

			break;
		case '5':

			cout<<"\n\t\t(5)Composition code number-1205\n";
			Compositioncodenumber1205();

			break;
			case '6':

			cout<<"\n\t\t(5)A bookstall in Paris code number-1206\n";
			AbookstallinPariscodenumber1206();

			break;




			break;
        case '0':
           cout<<"\n\n\t\t\t(0)Previous Page \n\n";
           BuyArt();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
}

void TheSoundofthewatercodenumber1201()

{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       :1985 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Etching\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 64 X32 cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :300$\n\n";
initwindow(300,300,"insert image");

readimagefile("ts.JPEG",0,0,300,300);


cout<<"\t\t\t\t\t\t\t\t\t Brought 1102\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t(1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("ta1.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           TheSoundofthewatercodenumber1201();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd6.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           TheSoundofthewatercodenumber1201();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber12();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void Onthewaytothefaircodenumber1202()
{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       : 1947 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Wood Engraving\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65-x-32  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :300$\n\n";
initwindow(300,300,"insert image");
readimagefile("on.JPEG",0,0,300,300);

cout<<"\t\t\t\t\t\t\t\t\t Brought 1202\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t  Enter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("ta.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Onthewaytothefaircodenumber1202();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd7.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Onthewaytothefaircodenumber1202();


           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber12();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void ViewfromSantiniketancodenumber1203()


{

system("Cls");


cout<<"\t\t\t\t\t\t\t\t\tyear : 1945\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Dry-point\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 20 x 11cm\n\n   ";
cout<<"\t\t\t\t\t\t\t\t\tprice    :400$";
initwindow(300,300,"insert image");
readimagefile("sn.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t\t\t\t\t Brought 1203 ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)yes ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (2)no";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (3)Previous Page";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th3.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           ViewfromSantiniketancodenumber1203();

           case '0':
            cout<<"\n\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)no\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You";
           initwindow(300,300,"insert image");
           readimagefile("sd8.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           ViewfromSantiniketancodenumber1203();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber12();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void BoatandTreecodenumber1204()
{

  system("Cls");

cout<<"\t\t\t\t\t\t\t\t\tyear :1966 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Charcoal and Crayon\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice    :300$\n\n";
initwindow(300,300,"insert image");

readimagefile("bt.JPEG",0,0,300,300);
cout<<"\t\t\t\t\t\t\t\t\t Brought 1204\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th4.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           BoatandTreecodenumber1204();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd9.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
        BoatandTreecodenumber1204();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber12();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void AbookstallinPariscodenumber1206()
{
    system("cls");
cout<<"\t\t\t\t\t\t\t\t\tyear : 1960\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Oil\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice    :200$\n\n";
initwindow(300,300,"insert image");
readimagefile("ab.JPEG",0,0,300,300);

cout<<"\t\t\t\t\t\t\t\t\t Brought 1206\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("ta4.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           AbookstallinPariscodenumber1206();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd10.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
            AbookstallinPariscodenumber1206();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber12();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void Compositioncodenumber1205()
{
    system("cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       :1958\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Engraving Aquatint\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : -x-  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :400$\n\n";
initwindow(300,300,"insert image");
readimagefile("co.JPEG",0,0,300,300);

cout<<"\t\t\t\t\t\t\t\t\t Brought 1205\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("ta4.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Compositioncodenumber1205();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd10.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
                  Compositioncodenumber1205();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber12();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void codenumber13()
{
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1) Gandhi code number-1301\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)Bangabandhu code number-1302\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3) The Freedom Fighter code number-1303\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
switch(ch)
		{
		case '1':
			cout<<"\n\t(1)Gandhi code number-1301\n\n";
			Gandhicodenumber1301();
			break;
        case '2':

			cout<<"\n\t\t(2)\n)Bangabandhu code number-1302";
			Bangabandhucodenumber1302();

			break;
			case '3':

			cout<<"\n\t\t(3)TheFreedom Fighter code number-1303";
			TheFreedomFightercodenumber1303();




			break;
        case '0':
           cout<<"\n\n\t\t\t(0)Previous Page \n\n";
           BuyArt();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
}

void Gandhicodenumber1301()

{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       :1994 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :acrylic on canvas\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 91.2 x 75cm \n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :1000$\n\n";
initwindow(300,300,"insert image");

readimagefile("ga.JPEG",0,0,300,300);


cout<<"\t\t\t\t\t\t\t\t\t Brought 1301\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t(1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("ta1.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Gandhicodenumber1301();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd6.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Gandhicodenumber1301();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber13();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void Bangabandhucodenumber1302()
{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       : 2009 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :oil paint\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65-x-32  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :1000$\n\n";
initwindow(300,300,"insert image");
readimagefile("ban.JPEG",0,0,300,300);

cout<<"\t\t\t\t\t\t\t\t\t Brought 1302\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t  Enter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th5.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Bangabandhucodenumber1302();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd11.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
        Bangabandhucodenumber1302();


           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber13();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void TheFreedomFightercodenumber1303()


{

system("Cls");


cout<<"\t\t\t\t\t\t\t\t\tyear : 2006\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :water color\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 20 x 11cm\n\n   ";
cout<<"\t\t\t\t\t\t\t\t\tprice    :800$";
initwindow(300,300,"insert image");
readimagefile("fr.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t\t\t\t\t Brought 1203 ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)yes ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (2)no";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (3)Previous Page";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th7.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           TheFreedomFightercodenumber1303();

;

           case '0':
            cout<<"\n\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)no\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("th6.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           TheFreedomFightercodenumber1303();



           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber13();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void codenumber14()
{
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1) Bangladesh code number-1401\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)Nakhsi Katha code number-1402\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3) My Lady code number-1403\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
switch(ch)
		{
		case '1':
			cout<<"\n\t(1) Bangladesh code number-1401\n\n";
			Bangladeshcodenumber1401();
			break;
        case '2':

			cout<<"\n\t\t(2)Nakhsi Katha code number-1402";
			NakhsiKathacodenumber1402();

			break;
			case '3':

			cout<<"\n\t\t(3)My Lady code number-1403";
			MyLadycodenumber1403();




			break;
        case '0':
           cout<<"\n\n\t\t\t(0)Previous Page \n\n";
           BuyArt();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
}

void Bangladeshcodenumber1401()

{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       :1967  \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Oil on canvas\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 103 X 154.5  \n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :400$\n\n";
initwindow(300,300,"insert image");

readimagefile("bn.JPEG",0,0,300,300);


cout<<"\t\t\t\t\t\t\t\t\t Brought 1401\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t(1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th8.PNG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Bangladeshcodenumber1401();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd6.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Bangladeshcodenumber1401();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber14();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void NakhsiKathacodenumber1402()
{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       : 1994 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :oil on canvas \n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65-x-32  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :1000$\n\n";
initwindow(300,300,"insert image");
readimagefile("na.JPEG",0,0,300,300);

cout<<"\t\t\t\t\t\t\t\t\t Brought 1402\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t  Enter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th9.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           NakhsiKathacodenumber1402();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd12.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           NakhsiKathacodenumber1402();


           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber14();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void MyLadycodenumber1403()


{

system("Cls");


cout<<"\t\t\t\t\t\t\t\t\tyear : 2006\n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :water color\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 20 x 11cm\n\n   ";
cout<<"\t\t\t\t\t\t\t\t\tprice    :800$";
initwindow(300,300,"insert image");
readimagefile("my.JPEG",0,0,300,300);


cout<<"\n\n\t\t\t\t\t\t\t\t\t Brought 1203 ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (1)yes ";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (2)no";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (3)Previous Page";
cout<<"\n\n\t\t\t\t\t\t\t\t\t (0) EXIT";
cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th10.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           MyLadycodenumber1403();



           case '0':
            cout<<"\n\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)no\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd13.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           MyLadycodenumber1403();



           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber14();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void codenumber15()
{
      system("Cls");
cout<<"\t\t\t\t\t\t\t\t\t(1) Come and see the game code number-1501\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2) Gallery Old ham code number-1502\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(0)Previous Page \n\n";
cout<<"\t\t\t\t\t\t\t\t\tEnter Your Choice:";
char ch;
		cin>>ch;
switch(ch)
		{
		case '1':
			cout<<"\n\t(1)Come and see the game  code number-1501\n\n";
			Comeandseethegamecodenumber1501();
			break;
        case '2':

			cout<<"\n\t\t(2)Gallery Old ham code number-1502";
			GalleryOldhamcodenumber1502();

			break;

        case '0':
           cout<<"\n\n\t\t\t(0)Previous Page \n\n";
           BuyArt();
		break;

			default :
            cout<<"\n\t\tUploading...\n";


 }
}

void Comeandseethegamecodenumber1501()

{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       :1966  \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :Oil on canvas\n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65 X 109  \n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :400$\n\n";
initwindow(300,300,"insert image");

readimagefile("cooo.JPEG",0,0,300,300);


cout<<"\t\t\t\t\t\t\t\t\t Brought 1501\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t(1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t(2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t(3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t Enter Your Choice:";

char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th14.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Comeandseethegamecodenumber1501();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("SD14.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           Comeandseethegamecodenumber1501();

           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber15();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}
void GalleryOldhamcodenumber1502()
{

system("Cls");
cout<<"\t\t\t\t\t\t\t\t\tyear       : 1999 \n\n";
cout<<"\t\t\t\t\t\t\t\t\tthecinque  :water clour \n\n";
cout<<"\t\t\t\t\t\t\t\t\tdimention  : 65-x-32  cm\n\n";
cout<<"\t\t\t\t\t\t\t\t\tprice      :1000$\n\n";
initwindow(300,300,"insert image");
readimagefile("g.JPEG",0,0,300,300);

cout<<"\t\t\t\t\t\t\t\t\t Brought 1402\n\n ";
cout<<"\t\t\t\t\t\t\t\t\t (1)yes \n\n";
cout<<"\t\t\t\t\t\t\t\t\t (2)no\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (3)Previous Page\n\n";
cout<<"\t\t\t\t\t\t\t\t\t (0) EXIT\n\n";
cout<<"\t\t\t\t\t\t\t\t\t  Enter Your Choice:";



char ch;
cin>>ch;
while(1)
switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)yes \n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You! for your bought the Art";
           initwindow(300,300,"insert image");
           readimagefile("th15.JPEG",0,0,300,300);


           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           GalleryOldhamcodenumber1502();

           case '0':
            cout<<"\n\t\tExit\n";

			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
case '2':

           cout<<"\n\n\t\t\t(2)No\n\n";
           system("cls");
           cout<<"\t\t\t\t\t\t\t\tThank You!!!";
           initwindow(300,300,"insert image");
           readimagefile("sd14.JPEG",0,0,300,300);

           cout<<"\n\n\t\t\t\t\t\t\t\t (1)Previous Page";
           cout<<"\n\n\t\t\t\t\t\t\t\t (0) EXIT";
           cout<<"\n\n\t\t\t\t\t\t\t\t Enter Your Choice:";
{
           char ch;
             cin>>ch;
           switch(ch)
		{
		    case '1':
           cout<<"\n\n\t\t\t(1)Previous Page\n\n";
           GalleryOldhamcodenumber1502();


           case '0':
            cout<<"\n\t\t\t\tExit\n";
			break;
		 default :
            cout<<"\n\t\tUploading...\n";
		}

		break;
       case '3':
           cout<<"\n\n\t\t\t(3)Previous Page \n\n";
           codenumber15();
		break;
		case '0':

		cout<<"\n\n\t\t\t(0) EXIT";
		break;

default :
            cout<<"\n\t\tUploading...\n";



}
getche();
}
}
}




//class Artist
//{


//class Artist
//{
//public:
   // string ZainulAbedin;
    //string SafiuddinAhmed;
    //string ShahabuddinAhmed;
    //string MurtozaBashir;
    //string ShishirBhattacharjee;
    //void ADMIN();

//};

int main()
{

    system("Cls");




        cout<<"\n\t\t\t\t\t ...::::\xB2\xB2  WELCOME TO ART GALLERY \xB2\xB2:::::....\n\n\n";
		cout<<"\n\t\t\t\t\t\t      MAIN MENU\n\n\n";



		cout<<"\t\t\t\t\t\t\t(1)VISIT GALLERY";
		cout<<"\n\n\t\t\t\t\t\t\t(2)FOR BUY";
		cout<<"\n\n\t\t\t\t\t\t\t(3) ADMIN";
        cout<<"\n\n\t\t\t\t\t\t\t(4) EXIT";


    cout<<"\n\n\t\t\t\t\t\t\tEnter Your Choice:";

        int ch;
		cin>>ch;


		switch(ch)
		{
		case 1:
			VISITGALLERY();
			break;
        case 2:
             FORBUY();
			break;
       case 3:
           admin();
			break;
        case '4':

			break;

		 default :
            cout<<"\n\t\tUploading...\n";


		}


}






