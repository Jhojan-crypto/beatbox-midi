#include <iostream>
#include<graphics.h>

#include <iostream>
#include<time.h>
#include<windows.h>
#include<string>
#include<mmsystem.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
int w=1500, h=600;

/*void pianobackground(){
    setfillstyle(1,8);
    bar(50,100,560,430);
    setfillstyle(4,7);
    bar(60,110,200,170);
    setcolor(4);
    line(50,250,560,250);
    setcolor(5);
    line(50,250,560,250);
    //////numeros en el beatbox
    setbkcolor(8);
    setcolor(15);
    settextstyle(3,0,1);
    /////letras en el piano
    outtextxy(70,390,"z");
    outtextxy(150,390,"s");
    outtextxy(125,390,"x");
    outtextxy(205,390,"d");

    outtextxy(175,390,"c");
    outtextxy(225,390,"v");
    outtextxy(300,390,"g");
    outtextxy(275,390,"b");
    outtextxy(350,390,"h");
    outtextxy(325,390,"n");
    outtextxy(400,390,"j");
    outtextxy(375,390,"m");

    ////beatbox
    setbkcolor(15);
    outtextxy(870,160,"8");
    outtextxy(1020,160,"9");
    outtextxy(1170,160,"0");
    outtextxy(870,310,"i");

    outtextxy(1020,310,"o");
    outtextxy(1170,310,"p");
    outtextxy(870,460,"k");
    outtextxy(1020,460,"l");
    outtextxy(1170,460,"ñ");
}*/

void background(){
    setfillstyle(5,4);
    bar(0,0,w,h);

    setfillstyle(2,7);
    bar(800,100,1250,550);
    for(int b=0; b<=10; b++){
        setcolor(3);
        rectangle(800-b,100-b,1250+b,550+b);
    }
    //botones

    setfillstyle(1,12);
    bar(810,110,940,240);
    bar(960,110,1090,240);
    bar(1110,110,1240,240);
    bar(810,260,940,390);
    bar(960,260,1090,390);
    bar(1110,260,1240,390);
    bar(810,410,940,540);
    bar(960,410,1090,540);
    bar(1110,410,1240,540);

    setbkcolor(4);
    setcolor(999);
    settextstyle(4,0,2);
    outtextxy(370,170,"Mi primer instrumento");
    outtextxy(370,250,"Aprendiendo a tocar");
    //setcolor(15);
    //outtextxy(100,40,"MIDI Beatbox");
    //outtextxy(100,65,"aprendiendo a crear combinaciones");
}



int main()
{
    int s=100;
    initwindow(w,h,"mi primer programa");
    background();
    //pianobackground();

    for(;;){
        //////beatbox
        setbkcolor(12);
        outtextxy(870,160,"8");
        outtextxy(1020,160,"9");
        outtextxy(1170,160,"0");
        outtextxy(870,310,"i");

        outtextxy(1020,310,"o");
        outtextxy(1170,310,"p");
        outtextxy(870,460,"k");
        outtextxy(1020,460,"l");
        outtextxy(1170,460,"ñ");

    char a;
    a==getch();
            if(a=='8'){
            PlaySound("do.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,0);
            bar(810,110,940,240);
            Sleep(s);
            setfillstyle(1,12);
            bar(960,110,940,240);

        }
        if(a=='9'){
            PlaySound("re.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,1);
            bar(960,110,1090,240);
            Sleep(s);
            setfillstyle(1,12);
            bar(960,110,1090,240);
        }
        if(a=='0'){
            PlaySound("mi.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,2);
            bar(1110,110,1240,240);
            Sleep(s);
            setfillstyle(1,12);
            bar(1110,110,1240,240);
        }
        if (a=='i'){
            PlaySound("fa.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,3);
            bar(810,110,940,240);
            Sleep(s);
            setfillstyle(1,12);
            bar(960,110,1090,240);
        }
        if (a=='o'){
            PlaySound("sol.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,4);
            bar(960,260,1090,390);
            Sleep(s);
            setfillstyle(1,12);
            bar(960,260,1090,390);
        }
        if(a=='p'){
            PlaySound("la.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,5);
            bar(1110,260,1240,390);
            Sleep(s);
            setfillstyle(1,12);
            bar(1110,260,1240,390);
        }
        if(a=='k'){
            PlaySound("si.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,6);
            bar(810,410,940,540);
            Sleep(s);
            setfillstyle(1,12);
            bar(810,410,940,540);
        }
        if(a=='l'){
            PlaySound("dob.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,7);
            bar(960,410,1090,540);
            Sleep(s);
            setfillstyle(1,12);
            bar(960,410,1090,540);
        }
        if(a=='ñ'){
            PlaySound("solb.wav", NULL,SND_FILENAME|SND_ASYNC);
            setfillstyle(1,8);
            bar(1110,410,1240,540);
            Sleep(s);
            setfillstyle(1,12);
            bar(1110,410,1240,540);
        }
}
        getch();
        closegraph();
}

