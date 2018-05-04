#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

void bg(int bd){
	int background[bd][15];
	srand (time(NULL));
	for (int i=0; i<bd; i++){
		for (int j=0; j<15; j++){
			background[i][j]=0;
		}
		cout <<endl;
	}
	for (int i=2; i<bd+1; i++){
		int random = rand() % 15;
		background[i][random]=6;
	}
	for (int i=0; i<bd; i++){
		for (int j=0; j<15; j++){
			cout << background[i][j];
		}
		cout << endl;
	}
}

void duration(int d){
	while (d>=0){
		Sleep(1000);
		cout << d;
		d--;
	}
}

void bubble(int bl){

}

void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}



int main(){
    initwindow(500, 300);
    line(245, 299, 249, 295);
    line(255, 299, 251, 295);
    rectangle(248, 295, 252, 290);
    line(245, 285, 249, 290);
    line(255, 285, 251, 290);
    circle(250, 293, 5);
    
   
	
    while (GetKeyState(VK_LWIN) == 1){
    	int x = x-1;
        line(245, 299, 249, 295);
    	line(255, 299, 251, 295);
		rectangle(248, 295, 252, 290);
    	line(245, 285, 249, 290);
    	line(255, 285, 251, 290);
    	circle(250, 293, 5);
		Sleep(200);
	}
	
	while (GetKeyState(VK_RWIN) == 1){
    	int x = x+1;
    	gotoxy(x, 299);
    	cout << "U         U";
		gotoxy(x, 298);
    	cout << "  U     U  ";
    	gotoxy(x, 297);
    	cout << "    UUU    ";
    	gotoxy(x, 296);
    	cout << "    UUU    ";
    	gotoxy(x, 295);
    	cout << "    UUU    ";
    	gotoxy(x, 294);
    	cout << "  U ooo U  ";
    	gotoxy(x, 293);
    	cout << "U o     o U";
    	gotoxy(x, 292);
		cout << "    ooo    ";
		Sleep(200);
	}
	getch();
	return 0;
}
