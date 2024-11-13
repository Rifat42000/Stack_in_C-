# include<iostream>
using namespace std;

class Stack{

public:
int s[10];
int element;
int top =0;
bool isEmpty(){

return top == 0;}

bool isFull(){
return top == 10;
}

bool Push(int element){


if (isFull()== true){

    return false;
} else{
    s[top] = element;
    top++;
    return  true;
}
}

bool Pop(){
if ( isEmpty()== true){
return false;
}
else {

    top--;
    return true;
}}

int getTopElement(){

if ( isEmpty()){
return -999999999;
}

else
{return s[top-1];
}
}

void show(){

if(isEmpty()){


    cout<<"no data will be printed"<<endl;
}
else{
for( int i =top-1;i>=0;i--){


    cout<<s[i]<<endl;
}}}
};
 
 int main(){

Stack m1,m2;

m1.isEmpty();
m1.isFull();
m1.Push(10);
m1.Push(37);
m1.Push(11);
m1.Push(17);
m1.Push(12);
m1.Pop();
m1.show();




    return 0;
}