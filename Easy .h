#ifndef EASY_H_INCLUDED
#define EASY_H_INCLUDED

#include <iostream>
#include "math.h"
using namespace std;


/////////////////////////////////////////
void itc_name(){
 cout << "Efim"<< endl ;
}

/////////////////////////////////////////
void itc_fio(){
cout << "Romanov"<<endl;
itc_name();
cout << "Dmitrievich"<<endl;
}

/////////////////////////////////////////
int itc_abs(int num){
  if (num >= 0){
    return num;
  }
  else{
        return (- num );
  }
 }
/////////////////////////////////////////
double itc_fabs(double num){
   if (num >= 0){
    return num;
  }
  else{
        return (- num );
  }
}
///////////////////////////
int itc_revnbr(int num){
    int a,b,c;
    a = num % 10 ;
    num = num / 10;
    b = num % 10;
    c = num / 10;
return a * 100 + b * 10 + c * 1 ;
}
///////////////////////
bool itc_iseven(int num){
if (num%2 == 0){
    return true ;
}
else{
    return false;
}

}
/////////////////////////
int itc_max(int num, int num2){
if  (num>num2) return num;
else return num2;
}
//////////////////////////
int itc_min(int num, int num2){
if  (num>num2) return num2;
else return num;
}
////
double itc_fmax(double num, double num2) {
if  (num>num2) return num;
else return num2;
}
/////////////
double itc_fmin(double num, double num2){
if  (num>num2) return num2;
else return num;
}
///////////////
int itc_sqrt(int num){
double root = sqrt(num);
int int_root = round(root);

if (int_root*int_root == num){
return int_root;
}
else return -1;
}
/////////////////////////
int itc_skv(int num){
if (num <= 0){
    return -1;
}
else return num*num;
}
//////////////////////
int itc_spr(int a, int b){
if (a&&b<= 0){
     return -1;
}
else return a * b;

}



#endif // EASY_H_INCLUDED
