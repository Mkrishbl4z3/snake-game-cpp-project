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
 int width=70;
 int height = 100;

void game(){
for(int i= 0;i<width+2;i++){

            cout<<"-";
}cout<<endl;
for(int i= 0;i<width+2;i++){
        for(int j = 0 ; j<height;j++){
            if(j == 0||j==height){
                cout<<"|" ;
                if(j==width){
                    cout<<endl;
                }         }
                else{
                    cout<<" ";
                }

}

}
}
int main(){
game();
}
