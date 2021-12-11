//
// Created by bocca on 11/12/2021.
//
#include "lib.h"
float massimo (float max[], int n, float m){
    for(int i=0; i<n; i++){
        if(i==0){
            m=max[i];
        }else if( i>0 & max[i]>m){
            m=max[i];
        }
    }
    return m;
}
