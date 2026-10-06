// Postfix and   prefix
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;
int main (){
    char arr[][4]={"-","3","2"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result =0;

    //1.Prefix
    for(int i=n-1;i>=0;i--){
        if(isdigit(arr[i][0])){
            stack[++top]=atoi(arr[i]);
        }
        else {
            int a=stack[top--];
            int b=stack[top--];
            

            switch(arr[i][0]){
                case '+':
                result = a+b;
                break;
                case '-':
                result = a-b;
                break;
                case '*':
                result = a*b;
                break;
                case '/':
                result = a/b; 
            }
            stack[++top]=result;
        }
    }
    printf("Ans = %d\n",stack[top] );

}