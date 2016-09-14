//to do consensus

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

char * cs(char **basechar, int lDNA, int bil){
char con1[1000];
int A[lDNA], T[lDNA], G[lDNA], C[lDNA], N[lDNA];
    
    for (int j=0; j<lDNA; j++){
        int a=0, t=0,g=0, c=0,n=0;
        for (int i=0; i<bil; i++){
            if (basechar[i][j]=='A'){
                a+=1;
            }
            else if(basechar[i][j]=='T'){
                t+=1;
            }
            else if (basechar[i][j]=='G'){
                g+=1;
            }
            else if (basechar[i][j]=='C'){
                c+=1;
            }
            else if (basechar[i][j]=='N'){
                n+=1;
            }
        }
        /*A[j]=a;
        T[j]=t;
        G[j]=g;
        C[j]=c;
        N[j]=n;
        
        if(A[j]<=bil-2|| T[j]<=bil-2|| G[j]<=bil-2|| C[])*/
        
        if(a>t && a>g && a>c && a>n){
            con1[j]='A';
        }
        else if(t>a && t>g && t>c && t>n){
            con1[j]='T';
        }
        else if(g>a && g>t && g>c && g>n){
            con1[j]='G';
        }
        else if(c>a && c>t && c>g && c>n){
            con1[j]='C';
        }
        else if(n>a && n>t && n>g && n>c){
            con1[j]='N';
        }
        else{
            if(g==c&&g>a&&g>t){
                con1[j]='S';
            }
            else if(a==t&&a>g&&a>c){
                con1[j]='W';
            }
            else if(a==t&&a==g&&a==c){
                con1[j]='N';
            }
            else if(t==c&&t>a&&t>g){
                con1[j]='Y';
            }
            else if(a==g&&a>t&&a>c){
                con1[j]='R';
            }
            else if((a==t&&a==g&&a!=c)||(t==a&&t==g&&t!=c)||(g==a&&g==t&&g!=c)){
                con1[j]='c';
            }
            else if((a==t&&a!=g&&a==c)||(t==a&&t!=g&&t==c)||(c==a&&c==t&&c!=g)){
                con1[j]='g';
            }
            else if((a!=t&&a==g&&a==c)||(g==a&&g!=t&&g==c)||(c==a&&c!=t&&c==g)){
                con1[j]='t';
            }
            else if((t!=a&&t==g&&t==c)||(g!=a&&g==t&&g==c)||(c!=a&&c==t&&c==g)){
                con1[j]='a';
            }
            else{
                con1[j]='?';
            }
        }
    }
return con1;
}

char * cs2(char **basechar, int lDNA, int bil){
char con1[1000];
    
    for (int j=0; j<lDNA; j++){
        int a=0, t=0,g=0, c=0,n=0;
        for (int i=0; i<bil; i++){
            if (basechar[i][j]=='A'){
                a+=1;
            }
            else if(basechar[i][j]=='T'){
                t+=1;
            }
            else if (basechar[i][j]=='G'){
                g+=1;
            }
            else if (basechar[i][j]=='C'){
                c+=1;
            }
            else if (basechar[i][j]=='-'){
                n+=1;
            }
        }
        if(a>t && a>g && a>c && a>n){
            con1[j]='A';
        }
        else if(t>a && t>g && t>c && t>n){
            con1[j]='T';
        }
        else if(g>a && g>t && g>c && g>n){
            con1[j]='G';
        }
        else if(c>a && c>t && c>g && c>n){
            con1[j]='C';
        }
        else if(n>a && n>t && n>g && n>c){
            con1[j]='N';
        }
        else{
            if(g==c&&g>a&&g>t){
                con1[j]='S';
            }
            else if(a==t&&a>g&&a>c){
                con1[j]='W';
            }
            else if(a==t&&a==g&&a==c){
                con1[j]='N';
            }
            else if(t==c&&t>a&&t>g){
                con1[j]='Y';
            }
            else if(a==g&&a>t&&a>c){
                con1[j]='R';
            }
            else if((a==t&&a==g&&a!=c)||(t==a&&t==g&&t!=c)||(g==a&&g==t&&g!=c)){
                con1[j]='c';
            }
            else if((a==t&&a!=g&&a==c)||(t==a&&t!=g&&t==c)||(c==a&&c==t&&c!=g)){
                con1[j]='g';
            }
            else if((a!=t&&a==g&&a==c)||(g==a&&g!=t&&g==c)||(c==a&&c!=t&&c==g)){
                con1[j]='t';
            }
            else if((t!=a&&t==g&&t==c)||(g!=a&&g==t&&g==c)||(c!=a&&c==t&&c==g)){
                con1[j]='a';
            }
            else{
                con1[j]='?';
            }
        }
        
        
    }
return con1;
}