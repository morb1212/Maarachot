//
// Created by mor on 1/23/24.
//

#include "MyMathFun.h"
class MyMathFun{
int numDIg(int num) {
    int digits=0;
    while (num > 0) {
        digits++;
        num = num / 10;
    }
    return digits;
}
    int factorial(int num){
    for (i=num-1;1>0;i--){
        num*=i;
    }
    retuen num;
}
    int getDigit(int num,int i){
    int length=numDIg(num);
    for (int j=length-1; j>=0;j--){
        if j==i
        return num%10;
       num= num/10;
    }
}
    int pow(int num,int pow){
    int mult=1;
    for(int i=1;i<=pow;i++){
        mult=mult*num;
    }
    return mult;
}
}