// Postfix and   prefix
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;
int main (){
    char arr[][4]={"2","3","^","1","*","+","9","-"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result =0;

    //1.Postfix 
    for(int i=0; i<n;i++){
        if(isdigit(arr[i][0])){
            stack[++top]=atoi(arr[i]);
        }
        else {
            int a=stack[top--];
            int b=stack[top--];
            

            switch(arr[i][0]){
                case '+':
                result = b+a;
                break;
                case '-':
                result = b-a;
                break;
                case '*':
                result = b*a;
                break;
                case '/':
                result = b/a; 
                case '^':
                result = b^a;
                break;
            }
            stack[++top]=result;
        }
    }
int stack[100];
int top = -1;
    printf("Ans = %d\n",stack[top--]);
    return 0;
}