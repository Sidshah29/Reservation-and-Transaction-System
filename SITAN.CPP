#include<conio.h>
#include<process.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
/////////////////////////////////user classes///////////////////////////////
//global variables
char uname[20],upass[20];
class user
 {
  protected:
  char nuname[20];
  char nupass[20];
  char name[20];
  char nucon[10];
  char nuadd[100];
  char nueid[30];
  public:
  void start();
  void signup();
  void signgetdata();
  void login();
  void logingetdata();
  void logmenu();
  void upage();
 }q;
//
class com
 {
  public:
  char dep[15],arr[15];
  int dd,mm,yyyy;
  int npa;
  char cot[10];
  void book();
 }f;
//
class ind
 {
  public:
  char fdep[15],farr[15];
  int fdd,fmm,fyyyy;
  int fnpa;
  char fcot[10];
  char nat[20];
  char namp[40];
  int age;
  int bookno;
  char req;
  int ffhr,ffmin;
  int ffcost;
  char ffair[25];
  void bookp();
  void bookdatap();
  void uage();
  void allocate();
  void detdip();
  void display();
  void coordinator();
  void search();
  void modify();
  void del();
  void thanks();
}e;
//
class complement
{ public:
  int fhr,fmin;
  int fcost;
  char fair[25];
}c;
//
class air
{
  public:

  int rand;
  int refno;
  int hr;
  int min;
  int ccost;
  char cair[25];
  void flytable();
  void airtable();

}s;
////////////////////////////////ADMIN CLASSES////////////////////////////
class admin
 {
  protected:
  char ause[20],apass[20];
  public:
  void adminlog();
  void apage();
 }b;
//
class acom
 {
  public:
  char adep[15],aarr[15];
  int add,amm,ayyyy;
  int anpa;
  char acot[10];
  void abook();
 }af;
//
class aind
 {
  public:
  char afdep[15],afarr[15];
  int afdd,afmm,afyyyy;
  int afnpa;
  char afcot[10];
  char anat[20];
  char anamp[40];
  int aage;
  int abookno;
  char areq;
  int affhr,affmin;
  int affcost;
  char affair[25];
  void abookp();
  void abookdatap();
  void auage();
  void aallocate();
  void adetdip();
  void adisplay();
  void acoordinator();
  void asearch();
  void amodify();
  void adel();
 }ae;
//
class acomplement
 {
  public:
  int afhr,afmin;
  int afcost;
  char afair[25];
 }ac;
class aair
 {
  public:
  int arand;
  int arefno;
  int ahr;
  int amin;
  int accost;
  char acair[25];
  void aflytable();
  void aairtable();
 }as;
//
void BODY()

 {
  int gdriver = DETECT, gmode, errorcode;
  int midx, midy;
  int xradius = 100, yradius = 20;
  initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
  errorcode = graphresult();
  if (errorcode != grOk)
   {
    printf("Graphics error: %s\n", grapherrormsg(errorcode));
    printf("Press any key to halt:");
    getch();
    exit(1);
   }
  midx = getmaxx() / 2;
  midy = getmaxy() / 2;
  setcolor(RED);
  for(int t=0;t<=100;t++)
   {
    setfillstyle(SOLID_FILL,RED);
    line(midx+70,midy-5,midx+60,midy-35);
    line(midx+60,midy-35,midx+100,midy-15);
    line(midx+100,midy-15,midx+70,midy-5);
    floodfill(midx+70,midy-16,RED);

    setfillstyle(SOLID_FILL,RED);
    fillellipse(midx,midy,xradius,yradius);
    fillellipse(midx+20,midy-11,xradius,yradius);
    fillellipse(midx+30,midy-6,xradius-15,yradius);
    setfillstyle(SOLID_FILL,RED);
    line(midx-30,midy+20,midx,midy);
    line(midx-30,midy+20,midx+70,midy+80);
    line(midx,midy,midx+100,midy+90);
    line(midx+70,midy+80,midx+100,midy+90);
    floodfill(midx+70,midy+75,RED);

    line(midx-70,midy-20,midx-100,midy-70);
    line(midx-70,midy-20,midx,midy);
    line(midx,midy,midx-100,midy-90);
    line(midx-100,midy-70,midx-100,midy-90);
    floodfill(midx-70,midy-35,RED);

    line(midx+120,midy-11,midx+130,midy-55);
    line(midx+130,midy-55,midx+134,midy-55);
    line(midx+134,midy-55,midx+134,midy-58);
    line(midx+134,midy-58,midx+110,midy-58);
    line(midx+110,midy-58,midx+70,midy-5);
    line(midx+120,midy-11,midx+70,midy-5);
    floodfill(midx+125,midy-40,RED);

    line(midx+120,midy-11,midx+160,midy+15);
    line(midx+160,midy+15,midx+140,midy+10);
    line(midx+140,midy+10,midx+90,midy-10);
    line(midx+90,midy-10,midx+120,midy-11);
    floodfill(midx+120,midy-8,RED);
    delay(25);
   }

  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  for(int z=0;z<619;z+=20)
  {
   outtextxy(0+z,4,"");
   outtextxy(0+z,434,"");
  }

  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  for(int c=0;c<439;c+=4)
  {
   outtextxy(0,0+c,"");
   outtextxy(619,0+c,"");
  }

  settextjustify(CENTER_TEXT, CENTER_TEXT);
  for(int i=4*2;i<=4*3;i++)
  {
   setcolor(YELLOW);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,i);
   outtextxy(midx-255, midy+100, "S");
   delay(50);

   setcolor(CYAN);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,(i-2));
   outtextxy(midx-212, midy+105, "i");
   delay(50);

   setcolor(YELLOW);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,i);
   outtextxy(midx-155,midy+100, "T");
   delay(50);

   setcolor(CYAN);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,i);
   outtextxy(midx-115, midy+100, "a");
   delay(50);

   setcolor(CYAN);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,i);
   outtextxy(midx-30, midy+100, "N");
   delay(50);
  }
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(midx-212,310,15,15);

  for(int j=4;j<=6;j++)
   {
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx, midy+130, "A");
    delay(25);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx+40, midy+130, "I");
    delay(25);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx+75, midy+130, "R");
    delay(25);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx+120, midy+130, "L");
    delay(25);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx+160, midy+130, "I");
    delay(25);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx+195, midy+130, "N");
    delay(25);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx+240, midy+130, "E");
    delay(25);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,j);
    outtextxy(midx+280, midy+130, "S");
    delay(25);
   }
   delay(3000);
   closegraph();
  }
void user::start()
 {
  int dec;
  clrscr();
  cout<<"";
  gotoxy(22,4);
  cout<<"========"<<"     "<<"========"<<"  ====  "<<"==    =";
  gotoxy(22,5);
  cout<<"||      "<<"    "<<"   ||   "<<" ||  || "<<"|||   ||";
  gotoxy(22,6);
  cout<<"||======"<<"  || "<<"   ||   "<<" ||==|| "<<"|| |  ||";
  gotoxy(22,7);
  cout<<"      ||"<<"  || "<<"   ||   "<<" ||  || "<<"||  | ||";
  gotoxy(22,8);
  cout<<"======||"<<"  || "<<"   ||   "<<" ||  || "<<"||   |||"<<'\n';
  cout<<'\n'<<"                                   "<<"AIRWAYS";
  cout<<'\n'<<'\n'<<"                  	            "<<"MENU";
  gotoxy(33,14);
  cout<<"To login as :- ";
  gotoxy(31,16);
  cout<<"admin:  press(1)";
  gotoxy(31,17);
  cout<<"user:   press(2)";
  gotoxy(31,18);
  cout<<"to exit:press(3)";
  gotoxy(30,20);
  cout<<"Your choice:";
  gotoxy(1,24);
  cout<<"";
  gotoxy(42,20);
  cin>>dec;
  switch(dec)
  {
   case(1):
   b.adminlog();
   break;

   case(2):
   q.logmenu();
   break;

   case(3):
   gotoxy(20,22);
   cout<<"The user has selected to exit the program";
   delay(1000);
   e.thanks();

   default:
   delay(500);
   cout<<"Invalid Input";
   start();
  }
 }
////////////////////////////////USER FUNCTIONS//////////////////////////////
void user::signgetdata()
 {
  gotoxy(20,3);
  cout<<"";
  gotoxy(20,5);
  cout<<"Pls enter the following details:-";
  gotoxy(28,7);
  cout<<"New Username:";
  gotoxy(28,9);
  cout<<"New Password:";
  gotoxy(31,11);
  cout<<"Full Name:";
  gotoxy(26,13);
  cout<<"Contact Number:";
  gotoxy(25,15);
  cout<<"Address Details:";
  gotoxy(32,17);
  cout<<"Email id:";
  gotoxy(20,20);
  cout<<"";
  gotoxy(42,7);
  gets(nuname);
  gotoxy(42,9);
  gets(nupass);
  gotoxy(42,11);
  gets(name);
  gotoxy(42,13);
  gets(nucon);
  gotoxy(42,15);
  gets(nuadd);
  gotoxy(42,17);
  gets(nueid);
 }
//
void user::signup()
 {
  clrscr();
  fstream add;
  add.open("user.dat",ios::app);
  signgetdata();
  add.write((char*)&q,sizeof(q));
  add.close();
  delay(1000);
  login();
 }
//
void user::logingetdata()
 {
  char pswrd[20];
  clrscr();
  gotoxy(35,4);
  cout<<"WELCOME USER";
  gotoxy(36,5);
  cout<<"LOGIN PAGE";
  gotoxy(20,10);
  cout<<"";
  gotoxy(20,14);
  cout<<"Username:";
  gotoxy(20,18);
  cout<<"Password:";
  gotoxy(20,20);
  cout<<"";
  gotoxy(29,14);
  gets(uname);
  gotoxy(29,18);
  gets(upass);
 }
//
void user::login()
 {
  int count;
  fstream air;
  clrscr();
  logingetdata();
  air.open("user.dat",ios::in);
  air.seekg(0,ios::beg);
  air.read((char*)&q,sizeof(q));
  while(!air.eof())
   {
    if(strcmpi(uname,nuname)==0 && strcmpi(upass,nupass)==0)
     {
      count++;
      delay(50);
      upage();
     }
    air.read((char*)&q,sizeof(q));
   }
  air.close();
  if(count>0)
   cout<<"record found"<<count;
  else
   cout<<"no record found";
  login();
  getch();
 }
//
void user::logmenu()
 {
  int mem;
  clrscr();
  gotoxy(22,4);
  cout<<"========"<<"     "<<"========"<<"  ====  "<<"==    =";
  gotoxy(22,5);
  cout<<"||      "<<"    "<<"   ||   "<<" ||  || "<<"|||   ||";
  gotoxy(22,6);
  cout<<"||======"<<"  || "<<"   ||   "<<" ||==|| "<<"|| |  ||";
  gotoxy(22,7);
  cout<<"      ||"<<"  || "<<"   ||   "<<" ||  || "<<"||  | ||";
  gotoxy(22,8);
  cout<<"======||"<<"  || "<<"   ||   "<<" ||  || "<<"||   |||";
  gotoxy(37,12);
  cout<<"USER PAGE";
  gotoxy(35,13);
  cout<<"WELCOME USER";
  gotoxy(26,16);
  cout<<"Not a member ? Press 2 to SignUp.";
  gotoxy(25,15);
  cout<<"Already a member? press 1 to login.";
  gotoxy(27,17);
  cout<<"To Return to Mainmenu, Press 3.";
  gotoxy(34,20);
  cout<<" Your Choice:";
  gotoxy(47,20);
  cin>>mem;
  switch (mem)
   {
    case 1:
    login();
    break;

    case 2:
    signup();
    break;

    case 3:
    start();
    break;

    default:
    logmenu();
   }
  }
//
void user::upage()
 {
  clrscr();
  int ops;
  gotoxy(1,1);
  cout<<"";
  gotoxy(30,2);
  cout<<"WELCOME @"<<nuname;
  gotoxy(22,4);
  cout<<"========"<<"     "<<"========"<<"  ====  "<<"==    =";
  gotoxy(22,5);
  cout<<"||      "<<"    "<<"   ||   "<<" ||  || "<<"|||   ||";
  gotoxy(22,6);
  cout<<"||======"<<"  || "<<"   ||   "<<" ||==|| "<<"|| |  ||";
  gotoxy(22,7);
  cout<<"      ||"<<"  || "<<"   ||   "<<" ||  || "<<"||  | ||";
  gotoxy(22,8);
  cout<<"======||"<<"  || "<<"   ||   "<<" ||  || "<<"||   |||";
  gotoxy(35,10);
  cout<<"Options:";
  gotoxy(21,11);
  cout<<"1.Book Flights(max bookings:5 persons)";
  gotoxy(31,13);
  cout<<"2.Check Tickets";
  gotoxy(31,15);
  cout<<"3.Cancel tickets";
  gotoxy(31,17);
  cout<<"4.Sign Out";
  gotoxy(30,19);
  cout<<"Your Choice:";
  gotoxy(1,21);
  cout<<"";
  gotoxy(42,19);
  cin>>ops;
  switch (ops)
   {
    case 1:
     {
      e.coordinator();
      break;
     }
    case 2:
     {
      e.search();
      break;
     }
    case 3:
     {
      e.del();
      break;
     }
    case 4:
     {
      e.thanks();
     }
    default:
     upage();
   }
 }
//
void com::book()
 {
  int i,n;
  clrscr();
  gotoxy(20,3);
  cout<<"";
  gotoxy(20,5);
  cout<<"Pls enter the following details:-";
  gotoxy(26,7);
  cout<<"Departure From:";
  gotoxy(30,9);
  cout<<"Arrival To:";
  gotoxy(23,11);
  cout<<"Date of departure:";
  gotoxy(24,13);
  cout<<"No of Passengers:";
  gotoxy(25,15);
  cout<<"Class of travel:";
  gotoxy(25,16);
  cout<<"e-Economy or b-Bussiness";
  gotoxy(20,18);
  cout<<"";
  gotoxy(42,7);
  gets(dep);
  gotoxy(42,9);
  gets(arr);
  gotoxy(42,11);
  cin>>dd;
  gotoxy(44,11);
  cout<<"/";
  gotoxy(45,11);
  cin>>mm;
  gotoxy(47,11);
  cout<<"/";
  gotoxy(48,11);
  cin>>yyyy;
  gotoxy(42,13);
  cin>>npa;
  if(npa>5)
   {
    cout<<"Only 5 tickets in a session,please re-enter";
    gotoxy(42,13);
    cin>>npa;
   }
  gotoxy(42,15);
  cin>>cot;
 }
//
void air::flytable()
 {
  clrscr();
  randomize();
  char air[25][25]={"Venture Airways","OM Airways","HereWeGo Airways","Fly India","Indian Airways","Qatar Airlines","United Airlines","Vistara Airways","Indigo Airways","Universal Airlines"};
  int cost[10]={10999,11499,11999,12499,12999,13499,13999,14499,14999,15499};
  gotoxy(1,1);
  cout<<"";
  gotoxy(35,3);
  cout<<"FLIGHT TABLE";
  gotoxy(10,5);
  cout<<"|===========|=====================|============|==============|";
  gotoxy(10,6);
  cout<<"|  SR. N.  |       FLIGHTS       |    TIME    |     FARE     |";
  gotoxy(10,7);
  cout<<"|===========|=====================|============|==============|";
//
  ofstream writ;
  for(int i=1,j=0; i<8,j<11; i++,j+=2)
   {
    writ.open("tempo.dat",ios::app);
    refno=i;
    gotoxy(10,8+j);
    rand=random(10)+0;
    strcpy(cair,air[rand]);
    cout<<"|     "<<i<<"     |"<<cair;
    gotoxy(44,8+j);
    hr=random(24);
    min=random(60);
    cout<<"|"<<s.hr<<":"<<s.min<<"  ";
    gotoxy(51,8+j);
    ccost=cost[rand];
    cout<<"	|"<<ccost;
    gotoxy(72,8+j);
    cout<<"|";
    gotoxy(10,9+j);
    cout<<"|===========|=====================|============|==============|";
    writ.write((char*)&s,sizeof(s));
    writ.close();
   }
   gotoxy(34,23);
   cout<<"Your choice : ";
   gotoxy(1,24);
   cout<<"";
 }
//
void air::airtable()
 {
  fstream fin;
  flytable();
  int choice;
  int count;
  gotoxy(48,23);
  cin>>choice;
  fin.open("tempo.dat",ios::in);
  fin.seekg(0,ios::beg);
  fin.read((char*)&s,sizeof(s));
  while(!fin.eof())//search whole file
   {
    if(choice==refno)
     {
      count++;
      strcpy(c.fair,cair);
      c.fhr=hr;
      c.fmin=min;
      c.fcost=ccost;
      cout<<"details"<<" "<<c.fair<<"//"<<c.fhr<<":"<<c.fmin<<"//"<<c.fcost;
      delay(5000);
     }
     fin.read((char*)&s,sizeof(s));
    }
   fin.close();
   remove("tempo.dat");
   if(count>0)
    {
     cout<<"!!";
    }
   else
    {
     cout<<"Invalid";
     delay(500);
     airtable();
    }
 }
//
void ind::bookp()
 {
  ofstream det2;
  for(int i=1;i<=f.npa;i++)
   {
    det2.open("sitan.dat",ios::app);
    bookdatap();
    det2.write((char*)&e,sizeof(e));//write the data in file
    det2.close();
   }
 }
//
void ind::bookdatap()
 {
  clrscr();
  strcpy(fdep,f.dep);
  strcpy(farr,f.arr);
  fdd=f.dd;
  fmm=f.mm;
  fyyyy=f.yyyy;
  fnpa=f.npa;
  ffhr=c.fhr;
  ffmin=c.fmin;
  ffcost=c.fcost;
  strcpy(ffair,c.fair);
  strcpy(fcot,f.cot);
  gotoxy(20,3);
  cout<<"";
  gotoxy(20,5);
  cout<<"Pls enter the following details:-";
  gotoxy(29,7);
  cout<<"Nationality:";
  gotoxy(23,9);
  cout<<"Name of Passenger:";
  gotoxy(24,11);
  cout<<"Age of Passenger:";
  gotoxy(20,17);
  cout<<"";
  gotoxy(42,7);
  gets(nat);
  gotoxy(42,9);
  gets(namp);
  gotoxy(42,11);
  cin>>age;
  uage();
  allocate();
  detdip();
 }
//
void ind::uage()
 {
  if (age<16)
   {
    req='a';
    gotoxy(20,13);
    cout<<"Special requirements:"<<req;
    gotoxy(20,14);
    cout<<"w-wheelchair and attendent,a-attendent,n-no";
   }
  else if (age>85)
   {
    req='w';
    gotoxy(20,13);
    cout<<"Special requirements:"<<req;
    gotoxy(20,14);
    cout<<"w-wheelchair and attendent,a-attendent,n-no";
   }
  else
   {
    gotoxy(20,13);
    cout<<"Special requirements:";
    gotoxy(20,14);
    cout<<"w-wheelchair and attendent,a-attendent,n-no";
    gotoxy(42,13);
    cin>>req;
   }
 }
//
void ind::allocate()
 {
  int bkn;
  int count;
  randomize();
  bkn=random(3000)+27000;
  bookno=bkn;
 }
//
void ind::detdip()
 {
  clrscr();
  gotoxy(20,3);
  cout<<"";
  gotoxy(22,5);
  cout<<"BOOKING DETAILS"<<endl;
  gotoxy(22,7);
  cout<<"PLS NOTE YOUR BOOKING NO: "<<bookno<<endl;
  display();
  gotoxy(20,21);
  cout<<"";
  delay(5000);
 }
//
void ind::display()
 {
  char refreq[50];
  char refcot[50];
  gotoxy(22,9);
  cout<<"Date of departure: "<<fdd<<"/"<<fmm<<"/"<<fyyyy<<endl;
  gotoxy(22,10);
  cout<<"Departure from: "<<fdep<<"\t"<<"Arrival to: "<<farr<<endl;
  gotoxy(22,11);
  cout<<"No of total tickets: "<<fnpa<<endl;
  gotoxy(22,12);
  cout<<"Airline: "<<ffair<<"\t"<<"Price per seat(in INR): "<<ffcost;
  gotoxy(22,13);
  cout<<"Flight Take of at "<<ffhr<<":"<<ffmin;
  gotoxy(22,14);
  cout<<"Advisory: Pls report at dep terminal 3hrs prior take off.";
  if(strcmpi(fcot,"e")==0)
   {
    strcpy(refcot,"Economy");
   }
  else if(strcmpi(fcot,"b")==0)
   {
    strcpy(refcot,"Business");
   }
  else
   {
    strcpy(refcot,"Invalid");
   }
   gotoxy(22,15);
   cout<<"Class of Travel: "<<refcot<<endl;
   gotoxy(22,16);
   cout<<"Name of the Passenger: "<<namp<<endl;
   gotoxy(22,17);
   cout<<"Nationality of the Passenger: "<<nat<<endl;
   gotoxy(22,18);
   cout<<"Age of the Passenger: "<<age<<endl;
   if(req=='w')
    {
     strcpy(refreq,"Wheelchair and attendant");
    }
   else if(req=='a')
    {
     strcpy(refreq,"Attendant");
    }
   else if(req=='n')
    {
     strcpy(refreq,"None");
    }
   else
    {
     strcpy(refreq,"Invalid");
    }
   gotoxy(22,19);
   cout<<"Special Requirements: "<<refreq<<endl;
 }
//
void ind::coordinator()
 {
  f.book();
  s.airtable();
  bookp();
  q.upage();
 }
//
void ind::search()
 {
  fstream fin;
  int count;
  int ubc;
  clrscr();
  gotoxy(35,4);
  cout<<"WELCOME USER";
  gotoxy(36,5);
  cout<<"View Flights";
  gotoxy(20,10);
  cout<<"";
  gotoxy(20,14);
  cout<<"Unique Booking Code: ";
  gotoxy(20,16);
  cout<<"";
  gotoxy(46,14);
  cin>>ubc;
  fin.open("sitan.dat",ios::in);
  fin.seekg(0,ios::beg);
  fin.read((char*)&e,sizeof(e));
  while(!fin.eof())//search whole file
   {
    if(ubc==bookno)
     {
      count++;
      detdip();
      delay(5000);
     }
    fin.read((char*)&e,sizeof(e));
   }
  fin.close();
  if(count>0)
   {
    cout<<"records found";
    q.upage();
   }
  else
   {
    cout<<"DETAILS INCORRECT";
    delay(500);
    search();
   }
 }
//
void ind::del()
 {
  fstream fin,fout;
  int aubc;
  clrscr();
  gotoxy(35,4);
  cout<<"WELCOME USER";
  gotoxy(36,5);
  cout<<"Cancel Bookings";
  gotoxy(20,10);
  cout<<"";
  gotoxy(20,14);
  cout<<"Unique Booking Code: ";
  gotoxy(20,16);
  cout<<"";
  gotoxy(46,14);
  cin>>aubc;
  fin.open("sitan.dat",ios::in);
  fin.seekg(0);
  fout.open("temp.dat",ios::app);
  fin.read((char*)&e,sizeof(e));
  while(!fin.eof())
   {
    if(e.bookno!=aubc)
    fout.write((char*)&e,sizeof(e));
    fin.read((char*)&e,sizeof(e));
   }
  fin.close();
  fout.close();
  remove("sitan.dat");//delete old file
  rename("temp.dat","sitan.dat");
  q.upage();
 }
//
void ind:: thanks()
 {
  clrscr();
  gotoxy(10,12);
  cout<<"";
  gotoxy(15,14);
  cout<<"Thankyou for using Sitan Booking Systems";
  gotoxy(15,16);
  cout<<"DEVELOPED BY SIDDHARTH SHAH; BATCH: 2019-20; CLASS: XII-C";
  gotoxy(10,18);
  cout<<"";
  delay(3000);
  exit(0);
 }
///////////////////////////ADMIN FUNCTIONS//////////////////////////
void admin::adminlog()
 {
  clrscr();
  gotoxy(35,4);
  cout<<"WELCOME ADMIN";
  gotoxy(36,5);
  cout<<"LOGIN PAGE";
  gotoxy(20,8);
  cout<<"";
  gotoxy(20,12);
  cout<<"Username:";
  gotoxy(20,16);
  cout<<"Password:";
  gotoxy(20,18);
  cout<<"";
  gotoxy(29,12);
  gets(ause);
  if (strcmpi(ause,"siddharth")==0)
   {
    gotoxy(29,16);
    gets(apass);
    if(strcmpi(apass,"siddharth")==0)
     {
      gotoxy(25,20);
      cout<<"login successful";
      delay(500);
      apage();
     }
    else
    gotoxy(25,20);
    cout<<"wrong password";
   }
  else if (strcmpi(ause,"tanay")==0)
   {
    gotoxy(29,16);
    gets(apass);
    if(strcmpi(apass,"tanay")==0)
     {
      gotoxy(25,20);
      cout<<"login successful";
      delay(500);
      apage();
     }
    else
     gotoxy(25,20);
     cout<<"wrong password";
   }
  else
   gotoxy(25,20);
   cout<<"username incorrect";
   getch();
 }
//
void admin::apage()
 {
  clrscr();
  int aops;
  gotoxy(1,1);
  cout<<"";
  gotoxy(30,2);
  cout<<"WELCOME @"<<ause;
  gotoxy(22,4);
  cout<<"========"<<"     "<<"========"<<"  ====  "<<"==    =";
  gotoxy(22,5);
  cout<<"||      "<<"    "<<"   ||   "<<" ||  || "<<"|||   ||";
  gotoxy(22,6);
  cout<<"||======"<<"  || "<<"   ||   "<<" ||==|| "<<"|| |  ||";
  gotoxy(22,7);
  cout<<"      ||"<<"  || "<<"   ||   "<<" ||  || "<<"||  | ||";
  gotoxy(22,8);
  cout<<"======||"<<"  || "<<"   ||   "<<" ||  || "<<"||   |||";
  gotoxy(35,10);
  cout<<"Options:";
  gotoxy(31,11);
  cout<<"1.Book Flights";
  gotoxy(31,13);
  cout<<"2.Check Tickets";
  gotoxy(31,15);
  cout<<"3.Modify Bookings";
  gotoxy(31,17);
  cout<<"4.Cancel tickets";
  gotoxy(31,19);
  cout<<"5.Sign Out";
  gotoxy(30,21);
  cout<<"Your Choice:";
  gotoxy(1,23);
  cout<<"";
  gotoxy(42,21);
  cin>>aops;
  switch (aops)
   {
    case 1:
     {
      ae.acoordinator();
      break;
     }
    case 2:
     {
      ae.asearch();
      exit(0);
      break;
     }
    case 3:
     {
      ae.amodify();
      break;
     }
    case 4:
     {
      ae.adel();
      break;
     }
    case 5:
     {
      e.thanks();
     }
    default:
     apage();
   }
 }
//
void acom::abook()
 {
  int i,n;
  clrscr();
  gotoxy(20,3);
  cout<<"";
  gotoxy(20,5);
  cout<<"Pls enter the following details:-";
  gotoxy(26,7);
  cout<<"Departure From:";
  gotoxy(30,9);
  cout<<"Arrival To:";
  gotoxy(23,11);
  cout<<"Date of departure:";
  gotoxy(24,13);
  cout<<"No of Passengers:";
  gotoxy(25,15);
  cout<<"Class of travel:";
  gotoxy(25,16);
  cout<<"e-Economy or b-Bussiness";
  gotoxy(20,18);
  cout<<"";
  gotoxy(42,7);
  gets(adep);
  gotoxy(42,9);
  gets(aarr);
  gotoxy(42,11);
  cin>>add;
  gotoxy(44,11);
  cout<<"/";
  gotoxy(45,11);
  cin>>amm;
  gotoxy(47,11);
  cout<<"/";
  gotoxy(48,11);
  cin>>ayyyy;
  gotoxy(42,13);
  cin>>anpa;
  gotoxy(42,15);
  cin>>acot;
 }
//
void aair::aflytable()
 {
  clrscr();
  randomize();
  char aair[25][25]={"Venture Airways","OM Airways","HereWeGo Airways","Fly India","Indian Airways","Qatar Airlines","United Airlines","Vistara Airways","Indigo Airways","Universal Airlines"};
  int acost[10]={10999,11499,11999,12499,12999,13499,13999,14499,14999,15499};
  gotoxy(1,1);
  cout<<"";
  gotoxy(35,3);
  cout<<"FLIGHT TABLE";
  gotoxy(10,5);
  cout<<"|===========|=====================|============|==============|";
  gotoxy(10,6);
  cout<<"|  SR. N.  |       FLIGHTS       |    TIME    |     FARE     |";
  gotoxy(10,7);
  cout<<"|===========|=====================|============|==============|";
  ofstream awrit;
  for(int i=1,j=0; i<8,j<11; i++,j+=2)
   {
    awrit.open("atempo.dat",ios::app);
    arefno=i;
    gotoxy(10,8+j);
    arand=random(10)+0;
    strcpy(acair,aair[arand]);
    cout<<"|     "<<i<<"     |"<<acair;
    gotoxy(44,8+j);
    ahr=random(24);
    amin=random(60);
    cout<<"|"<<as.ahr<<":"<<as.amin<<"  ";
    gotoxy(51,8+j);
    accost=acost[arand];
    cout<<"	|"<<accost;
    gotoxy(72,8+j);
    cout<<"|";
    gotoxy(10,9+j);
    cout<<"|===========|=====================|============|==============|";
    awrit.write((char*)&as,sizeof(as));
    awrit.close();
   }
  gotoxy(34,23);
  cout<<"Your choice : ";
  gotoxy(1,24);
  cout<<"";
 }
//
void aair::aairtable()
 {
  fstream afin;
  aflytable();
  int achoice;
  int count;
  gotoxy(48,23);
  cin>>achoice;
  afin.open("atempo.dat",ios::in);
  afin.seekg(0,ios::beg);
  afin.read((char*)&as,sizeof(as));
  while(!afin.eof())//search whole file
   {
    if(achoice==arefno)
     {
      count++;
      strcpy(ac.afair,acair);
      ac.afhr=ahr;
      ac.afmin=amin;
      ac.afcost=accost;
      cout<<"details"<<" "<<ac.afair<<"//"<<ac.afhr<<":"<<ac.afmin<<"//"<<ac.afcost;
      delay(5000);
     }
    afin.read((char*)&as,sizeof(as));
   }
  afin.close();
  remove("atempo.dat");
  if(count>0)
   {
    cout<<"!!";
   }
  else
  {
    cout<<"Invalid";
    delay(500);
    aairtable();
  }
 }
//
void aind::abookp()
 {
  ofstream adet2;
  for(int i=1;i<=af.anpa;i++)
   {
    adet2.open("asitan.dat",ios::app);
    abookdatap();
    adet2.write((char*)&ae,sizeof(ae));//write the data in file
    adet2.close();
   }
 }
//
void aind::abookdatap()
 {
  clrscr();
  strcpy(afdep,af.adep);
  strcpy(afarr,af.aarr);
  afdd=af.add;
  afmm=af.amm;
  afyyyy=af.ayyyy;
  afnpa=af.anpa;
  affhr=ac.afhr;
  affmin=ac.afmin;
  affcost=ac.afcost;
  strcpy(affair,ac.afair);
  strcpy(afcot,af.acot);
  gotoxy(20,3);
  cout<<"";
  gotoxy(20,5);
  cout<<"Pls enter the following details:-";
  gotoxy(29,7);
  cout<<"Nationality:";
  gotoxy(23,9);
  cout<<"Name of Passenger:";
  gotoxy(24,11);
  cout<<"Age of Passenger:";
  gotoxy(20,17);
  cout<<"";
  gotoxy(42,7);
  gets(anat);
  gotoxy(42,9);
  gets(anamp);
  gotoxy(42,11);
  cin>>aage;
  auage();
  aallocate();
  adetdip();
 }
//
void aind::auage()
 {
  if (aage<16)
   {
    areq='a';
    gotoxy(20,13);
    cout<<"Special requirements:"<<areq;
    gotoxy(20,14);
    cout<<"w-wheelchair and attendent,a-attendent,n-no";
   }
  else if (aage>85)
   {
    areq='w';
    gotoxy(20,13);
    cout<<"Special requirements:"<<areq;
    gotoxy(20,14);
    cout<<"w-wheelchair and attendent,a-attendent,n-no";
   }
  else
   {
    gotoxy(20,13);
    cout<<"Special requirements:";
    gotoxy(20,14);
    cout<<"w-wheelchair and attendent,a-attendent,n-no";
    gotoxy(42,13);
    cin>>areq;
   }
 }
//
void aind::aallocate()
 {
 int abkn;
 int acount;
 randomize();
 abkn=random(3000)+27000;
 abookno=abkn;
 }
//
void aind::adetdip()
 {
  clrscr();
  gotoxy(20,3);
  cout<<"";
  gotoxy(22,5);
  cout<<"BOOKING DETAILS"<<endl;
  gotoxy(22,7);
  cout<<"PLS NOTE YOUR BOOKING NO: "<<abookno<<endl;
  adisplay();
  gotoxy(20,21);
  cout<<"";
  delay(5000);
}
//
void aind::adisplay()
 {
  char arefreq[50];
  char arefcot[50];
  gotoxy(22,9);
  cout<<"Date of departure: "<<afdd<<"/"<<afmm<<"/"<<afyyyy<<endl;
  gotoxy(22,10);
  cout<<"Departure from: "<<afdep<<"\t"<<"Arrival to: "<<afarr<<endl;
  gotoxy(22,11);
  cout<<"No of total tickets: "<<afnpa<<endl;
  gotoxy(22,12);
  cout<<"Airline: "<<affair<<"\t"<<"Price per seat(in INR): "<<affcost;
  gotoxy(22,13);
  cout<<"Flight Take of at "<<affhr<<":"<<affmin;
  gotoxy(22,14);
  cout<<"Advisory: Pls report at dep terminal 3hrs prior take off.";
  if(strcmpi(afcot,"e")==0)
   {
    strcpy(arefcot,"Economy");
   }
  else if(strcmpi(afcot,"b")==0)
   {
    strcpy(arefcot,"Business");
   }
  else
   {
    strcpy(arefcot,"Invalid");
   }
  gotoxy(22,15);
  cout<<"Class of Travel: "<<arefcot<<endl;
  gotoxy(22,16);
  cout<<"Name of the Passenger: "<<anamp<<endl;
  gotoxy(22,17);
  cout<<"Nationality of the Passenger: "<<anat<<endl;
  gotoxy(22,18);
  cout<<"Age of the Passenger: "<<aage<<endl;
  if(areq=='w')
   {
    strcpy(arefreq,"Wheelchair and attendant");
   }
  else if(areq=='a')
   {
    strcpy(arefreq,"Attendant");
   }
  else if(areq=='n')
   {
    strcpy(arefreq,"None");
   }
  else
   {
    strcpy(arefreq,"Invalid");
   }
    gotoxy(22,19);
    cout<<"Special Requirements: "<<arefreq<<endl;
 }
//
void aind::acoordinator()
 {
  af.abook();
  as.aairtable();
  abookp();
  b.apage();
 }
//
void aind::asearch()
 {
  fstream afin;
  int count;
  int aubc;
  clrscr();
  gotoxy(35,4);
  cout<<"WELCOME USER";
  gotoxy(36,5);
  cout<<"View Flights";
  gotoxy(20,10);
  cout<<"";
  gotoxy(20,14);
  cout<<"Unique Booking Code: ";
  gotoxy(20,16);
  cout<<"";
  gotoxy(46,14);
  cin>>aubc;
  afin.open("asitan.dat",ios::in);
  afin.seekg(0,ios::beg);
  afin.read((char*)&ae,sizeof(ae));
  while(!afin.eof())//search whole file
   {
    if(aubc==abookno)
     {
      count++;
      adetdip();
      delay(5000);
      b.apage();
     }
    afin.read((char*)&ae,sizeof(ae));
   }
  afin.close();
  if(count>0)
   {
    cout<<"records found";
   }
  else
   {
    cout<<"DETAILS INCORRECT";
    delay(500);
    b.apage();
   }
 }
//
void aind::adel()
 {
  fstream afin,afout;
  int aaubc;
  clrscr();
  gotoxy(35,4);
  cout<<"WELCOME USER";
  gotoxy(36,5);
  cout<<"Cancel Bookings";
  gotoxy(20,10);
  cout<<"";
  gotoxy(20,14);
  cout<<"Unique Booking Code: ";
  gotoxy(20,16);
  cout<<"";
  gotoxy(46,14);
  cin>>aaubc;
  afin.open("asitan.dat",ios::in);
  afin.seekg(0);
  afout.open("atemp.dat",ios::app);
  afin.read((char*)&ae,sizeof(ae));
  while(!afin.eof())
   {
    if(ae.abookno!=aaubc)
    afout.write((char*)&ae,sizeof(ae));
    afin.read((char*)&ae,sizeof(ae));
   }
  afin.close();
  afout.close();
  remove("asitan.dat");//delete old file
  rename("atemp.dat","asitan.dat");
  b.apage();
 }
//
void aind::amodify()
 {
  clrscr();
  fstream afin,atemp;
  int f=0,n1;
  char aadep[20],aaarr[20];
  int abubc,aadd,aamm,aayyyy;
  cout<<"WELCOME USER";
  gotoxy(36,5);
  cout<<"Modify Bookings";
  gotoxy(20,10);
  cout<<"";
  gotoxy(20,14);
  cout<<"Unique Booking Code: ";
  gotoxy(20,16);
  cout<<"";
  gotoxy(46,14);
  cin>>abubc;
  afin.open("asitan.dat",ios::in);
  while(!afin.eof())
   {
    n1=afin.tellg();
    afin.read((char *)&ae,sizeof(ae));
    adisplay();
    if(abookno==abubc)
     {
      clrscr();
      gotoxy(20,10);
      cout<<"";
      gotoxy(22,14);
      cout<<"Please enter suitable new info:-";
      gotoxy(22,16);
      cout<<"Location of departure: ";
      gotoxy(22,18);
      cout<<"New destination: ";
      gotoxy(22,20);
      cout<<"Date of departure(dd/mm/yyyy): ";
      gotoxy(20,22);
      cout<<"";
      gotoxy(53,16);
      gets(aadep);
      gotoxy(53,18);
      gets(aaarr);
      gotoxy(53,20);
      cin>>aadd;
      gotoxy(55,20);
      cout<<"/";
      gotoxy(56,20);
      cin>>aamm;
      gotoxy(58,20);
      cout<<"/";
      gotoxy(59,20);
      cin>>aayyyy;
      strcpy(afdep,aadep);
      strcpy(afarr,aaarr);
      afdd=aadd;
      afmm=aamm;
      afyyyy=aayyyy;
      afin.seekg(n1);
      afin.write((char*)&ae,sizeof(ae));
      afin.flush();
      f=1;
      break;
     }
   }
  if(f==0)
  cout<<"\nNo record with same code exists in the file!!!!";
  afin.seekg(0);
  getch();
  afin.close();
  b.apage();
 }
////////////////////////////////////////////////////////////////////
void main()
{
 clrscr();
 BODY();
 q.start();
 getch();
}