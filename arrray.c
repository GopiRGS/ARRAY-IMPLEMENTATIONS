#include<stdio.h>
#include<stdlib.h>
# define max 50
int arr[max];
int size = 0;
void insert(int pos,int val){
    int i;
    for(i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];

    }
    arr[pos]=val;
    size++;
    printf("done..");
}
void display(){
    int i;
    if(arr[i]==NULL){
        printf("\nit will be empty..");
    }
    else{
    int i;
    for(i=0;i<=size-1;i++){
        printf("\n%d\n",arr[i]);
    }
}
}
void deletepos(int pos){

    for(int i=pos;i<=size-1;i++){
        arr[i]=arr[i+1];
    }

    size--;
}
int main(){
  insert(0,23);
  display();
  deletepos(0);
  display();
}
