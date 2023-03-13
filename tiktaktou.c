#include<stdio.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};


void show(){
 printf("\n\n\t\t|---|---|---\n");
 printf("\t\t| %c | %c | %c ",a[0],a[1],a[2]);
 printf("\n\n\t\t|---|---|---\n");
 printf("\t\t| %c | %c | %c ",a[3],a[4],a[5]);
 printf("\n\n\t\t|---|---|---\n");
 printf("\t\t| %c | %c | %c ",a[6],a[7],a[8]);
 printf("\n\n\t\t|---|---|---\n");
}


void inputsymbol(){
    printf("\n Player 1 symbol : x: \n");
    printf("\n Player 2 symbol : 0: \n");
}


void gamename(){
    printf("\n\n\n\t\t\tTic Tac Toe Game\n");
}


void play(){
    char p,s;
    printf("\n enter Position and symbol for the player\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    check(p,s);
}


void check(char P,char S){
    int i;
    for(i=0;i<=8;i++){
        if(a[i]==P){
            a[i]=S;
        }
    }
}


int end(){
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x') || ( a[0]=='x'&&a[3]=='x'&&a[6]=='x') || ( a[0]=='x'&& a[4]=='x'&& a[8]=='x'))
    return (100);
    else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0') || ( a[0]=='0'&&a[3]=='0'&&a[6]=='0') || ( a[0]=='0'&& a[4]=='0'&& a[8]=='0'))
    return (200);

    else if(a[1]=='x'&& a[4]=='x'&& a[7]=='x')
    return (100);
    else if(a[1]=='0'&& a[4]=='0'&& a[7]=='0')
    return (200);

    else if(a[2]=='x'&& a[5]=='x'&& a[8]=='x')
    return (100);
    else if(a[2]=='0'&& a[5]=='0'&& a[8]=='0')
    return (200);

    else if(a[3]=='x'&& a[4]=='x'&& a[5]=='x')
    return (100);
    else if(a[3]=='0'&& a[4]=='0'&& a[5]=='0')
    return (200);

    else if(a[2]=='x'&& a[4]=='x'&& a[6]=='x')
    return (100);
    else if(a[2]=='0'&& a[4]=='0'&& a[6]=='0')
    return (200);

    else if(a[6]=='x'&& a[7]=='x'&& a[8]=='x')
    return (100);
    else if(a[6]=='0'&& a[7]=='0'&& a[8]=='0')
    return (200);

    else 
    return (300);
}


int main(){
    int k;
    gamename();
    show();
    inputsymbol();
    play();

    label:  
    show();
    play();
    k=end();
    show();
    if(k==100){
        printf("\nPlayer 1:win");
    }
    else if(k==200){
        printf("\n player 2:win ");
    }
    else 
    {
       goto label; 
    }
}