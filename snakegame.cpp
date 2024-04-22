#include<iostream>
#include<conio.h>
#include<windows.h>

 using namespace std;
 int x,y;
 int snaketaillen;
 int snaketailx[100];
 int snaketaily[100];
 int fcordx,fcordy;
 enum snakedir{STOP = 0, LEFT ,RIGHT,UP , DOWN};
 snakedir sdir;
 int playerscore;
 int width=100;
 int height =20;

void game(){
for(int i= 0;i<width+2;i++){

            cout<<"-";
}cout<<endl;
for(int i= 0;i<height;i++){
        for(int j = 0 ; j<width+2;j++){
            if(j == 0){
                cout<<"|" ;}
                if(j == width){
                    cout<<"}"<<endl;
                }
        }



}

}
int main(){
game();
}
