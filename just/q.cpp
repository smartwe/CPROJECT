#include<queue>
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(3);
    q.push(45);
    printf("%d\n",q.front());
    q.pop();
    //breadth first search
    printf("%d",q.front());
    return 0;
}