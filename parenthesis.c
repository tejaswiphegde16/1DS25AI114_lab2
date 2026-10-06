#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char stack[10000];
int top =-1;

void push(char value){
    if(top<9999){
        ++top;
        stack[top]=value;
    }
}
char pop(){
    if (top == -1){
        return '\0';
    }else{
        char pop_ele=stack[top];
        --top;
        return pop_ele;
    }
}

bool isValid(char *s) {
    
    int len =strlen(s);

    if (top == 9999){
        return false;
    }
    else {
        for(int i=0;i<len;i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                push(s[i]);
            }
            else {
                char pop_ele = pop();
                if (pop_ele =='\0'){
                    return false;
                }
                if((pop_ele=='(' && s[i]!=')'||
                 pop_ele=='[' && s[i] != ']' || 
                 pop_ele=='{' && s[i] != '}')){
                    return false;
                }
            }
        }
    }
    return top == -1;
}
int main(){
    char test[100];
    printf("Enter parenthesis: ");
    scanf("%99s",test);
    if(isValid(test)){
        printf("valid\n");
    }else {
        printf("not valid\n");
    }
    return 0;
}