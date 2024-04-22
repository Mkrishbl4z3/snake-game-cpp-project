#include<iostream>
#include<conio.h>
#include<windows.h>

 using namespace std;

 int snaketaillen;
 int snaketailx[100];
 int snaketaily[100];
 int fcordx,fcordy;
 enum snakedir{STOP = 0, LEFT,RIGHT,UP,DOWN};
 snakedir sdir;
 int playerscore;
 int width=100;
 int height =20;
int x,y;
bool gover;
int score;
void initial(){
    x = width/2;
    y = height/2;
    fcordy=rand()%height;
    fcordx=rand()%width;
    sdir = STOP;
    gover = false;
    score = 0; }


void game(){
system("cls");
for(int i= 0;i<width+2;i++){

            cout<<"-";
}cout<< endl;
for(int i= 0;i<height;i++){
        for(int j = 0 ; j<=width;j++){
            if(j == 0){
                cout<<"|" ;}
            if(j == width){
                cout<<"|";
                }
            if(j==x && i ==y ){
                cout<<"0";
            }
            else if (j==fcordx &&i == fcordy){
                cout<<"@";
            }
            else{
            bool prtail = false;
            for(int k = 0 ; k<snaketaillen;k++){
                if(snaketailx[k]==j && snaketaily[k]==i){
                        cout<<"o";
                    prtail = true;
                }

            }
                if(!prtail){
                cout<<" ";
            }
            }

}cout<<endl;
}
}
void rungame(){
if(x==fcordx && y == fcordy){
    snaketaillen++;
}
int px=x, py=y;
int px2,py2;
for(int i = 0; i<snaketaillen; i++){
    px2 = snaketailx[i];
    py2 = snaketaily[i];
    snaketailx[i]=px;
    snaketaily[i]=py;
    px=px2;
    py=py2;
}
switch(sdir){
case LEFT :
x=x-1;
break;
case RIGHT:
    x++;
    break;
case UP:
    y=y-1;
    break;
case DOWN:
    y++;
    break;
}
if(x<0||x>=width||y<0||y>=height){
gover = true;
}
for(int i = 0; i<snaketaillen;i++){
    if(snaketailx[i]==x&&snaketaily[i]==y){
        gover = true;
    }
if(x==fcordx&&y == fcordy){
    score = score+10;
    fcordx = rand()%width;
    fcordy= rand()%height;
    snaketaillen++;
}
}
}
void userinput() {
    if (_kbhit()) {
        char keyPressed = _getch();
        switch (keyPressed) {
            case 'a':
                sdir = LEFT;
                break;
            case 's':
                sdir = DOWN;
                break;
            case 'd':
                sdir = RIGHT;
                break;
            case 'w':
                sdir = UP;
                break;
            case 'x':
                sdir = STOP;
                break;
        }
    }
}


int main(){
initial();
while(!gover){
    game();
    userinput();
    rungame();
}
return 0;
}
