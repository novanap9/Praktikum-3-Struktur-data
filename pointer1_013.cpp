#include<iostream>
#include<stdio.h>
using namespace std;

int H(const char*b){

int y = 0;
for (;*b!='\0';b++)
++y;
return y;
}
main (void){
cout<<"Program Menghitung banyak Karakter"<<endl;
cout<<"++++++++++++++++++++++++++++"<<endl;
cout<<"+ Novan Ari Pradana        +"<<endl;
cout<<"+ 19051397013              +"<<endl;
cout<<"+ D4 Manajemen Informatika +"<<endl;
cout<<"++++++++++++++++++++++++++++"<<endl;
char String [80];
cout<<"  Inputlah Kata Yang Anda Inginkan      : ";
cin.getline(String,100);cout<<endl;
cout<<"  Jumlah Karakternya Ada : "<<H(String)<<" Huruf "<<endl;
}
