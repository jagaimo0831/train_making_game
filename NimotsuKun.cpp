#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// クリアしたかを管理するフラグ
int i = 1;

void init(){

}

void getInput(){
    return;
}

void updateGame(){
    return;
}

void draw(){
    return;
}


int main(){
    // initialization



    // main roop
    while(i){
        getInput();
        updateGame();
        draw();

        // クリアしたかどうかを判別する
        if(/*クリアかどうか*/ i){
            i = 0;
            return;
        }
    }
}