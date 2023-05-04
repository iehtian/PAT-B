#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int ay = 0, ap = 0, as = 0;
    int ac = 0, aj = 0, ab = 0;
    int bc = 0, bj = 0, bb = 0;
    for (int i = 0; i < n; i++)
    {//C锤，B布，J剪
        getchar();
        char first = getchar();
        getchar();
        char secend = getchar();
        if(first=='C'&&secend=='J'){
            ay++;
            ac++;
        }else if(first=='C'&&secend=='C'){
            ap++;
        }else if(first=='C'&&secend=='B'){
            as++;
            bb++;
        }else if(first=='B'&&secend=='J'){
            as++;
            bj++;
        }else if(first=='B'&&secend=='C'){
            ay++;
            ab++;
        }else if(first=='B'&&secend=='B'){
            ap++;
        }else if(first=='J'&&secend=='J'){
            ap++;
        }else if(first=='J'&&secend=='C'){
            as++;
            bc++;
        }else if(first=='J'&&secend=='B'){
            ay++;
            aj++;
        }
    }
    printf("%d %d %d\n", ay, ap, as);
    printf("%d %d %d\n", as, ap, ay);
    if(ab>=ac&&ab>=aj){
        printf("B ");
    }else if(ac>ab&&ac>=aj){
        printf("C ");
    }else if(aj>ab&&aj>ac){
        printf("J ");
    }
    if(bb>=bc&&bb>=bj){
        printf("B");
    }else if(bc>bb&&bc>=bj){
        printf("C");
    }else if(bj>bb&&bj>bc){
        printf("J");
    }
}