#include<iostream>
#include<conio.h>
#include<windows.h>

 using namespace std;

 int snaketaillen;
 int snaketailx[100];
 int snaketaily[100];
 int fcordx,fcordy;
 enum snakedir{STOP = 0, LEFT ,RIGHT,UP , DOWN};
 snakedir sdir;
 int playerscore;
 int width=100;
 int height =20;
 int x = width/2;
 int y = height/2;


void game(){
for(int i= 0;i<width+2;i++){

            cout<<"-";
}cout<<endl;
for(int i= 0;i<height;i++){
        for(int j = 0 ; j<=width;j++){
            if(j == 0){
                cout<<"|" ;}
            if(j == width){
                cout<<"|"<<endl;
                }
            if(j==x && i ==y ){
                cout<<"0";
            }
            fcordx = rand()%width;
            fcordy = rand()%height;
            if (j==fcordx &&i == fcordy){
                cout<<"@";
            }

}
}
}
int main(){
game();
}
