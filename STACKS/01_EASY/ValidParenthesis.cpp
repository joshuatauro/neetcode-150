#include<bits/stdc++>

bool isValid(string s){
    char stack[1000];
    int top=-1;
    for(int i=0;i<s.length();i++){
        char symb=s[i];
        if(symb == '[' || symb == '(' || symb == '{'){
            stack[++top] = symb;;
        }else{
            if(symb == ')'){
                if(stack[top] == '('){
                    top--;
                }else{
                    return false;
                }
            }else if(symb == ']'){
                if(stack[top] == '['){
                    top--;
                }else{
                    return false;
                }
            }else if(symb == '}'){
                if(stack[top] == '{'){
                    top--;
                }else{
                    return false;
                }
            }
        }
    } 
    if(top == -1){
        return true;
    }else{
        return false;
    }
}