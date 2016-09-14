/*
 making a simple RNA sequence alignment
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include "cs.h"
#include "changeDT.h"
using namespace std;

int main() {
    
    ofstream outfile;
    ifstream infile1, infile2;
    string fastq, fastq2;
    char base[1000], **basechar, *consen;
    char base2[1000], **basechar2, *consen2;
    int count=1, no=1, bil=0, lDNA=14;
    int count2=1, no2=1, bil2=0, lDNA2=14;
 
    //for file 1
    //filtering fastq file to get only DNA sequence with 10 base length
    
     infile1.open("test.txt", ios::in);
    outfile.open("answer.txt", ios::out);
    
    cout<<"consensus sequence 1: "<<endl<<endl;
    while(getline(infile1,fastq)){ 
        
        if (no==count){
            infile1>>fastq;
            strcpy(base, fastq.c_str());
            
            for(int i=0; i<lDNA; i++){ 
         
                outfile<<base[i];               
            }
           
        outfile<<endl;
        count+=4;
        bil+=1;
        }
        else{}
        no++;
    }          
    outfile.close();
    infile1.close();
    //cout<<bil<<endl;
    
    //cout changeDT
    basechar= changeDT(bil, lDNA);
    for (int j=0; j<bil; j++){
        for(int i=0;i<lDNA; i++){
            cout<<basechar[j][i];
        }
        cout<<endl;
    }
        
    //cout consensus
    consen= cs (basechar, lDNA, bil);
    for (int i=0; i<lDNA; i++){
        cout<<"-";
    }
    cout<<endl;
    for (int i=0; i<lDNA; i++){
        if (consen[i]=='a'||consen[i]=='t'||consen[i]=='g'||consen[i]=='c'){
            toupper(consen2[i]);
            cout<<"{"<<consen[i]<<"}";
        }
        else{
        cout<<consen[i];
        }
    }
    cout<<endl<<endl;
//------------------------------------------------------------------------------
//for file 2 
    infile2.open("test2.txt", ios::in);
    outfile.open("answer.txt", ios::out);
    cout<<"consensus sequence 2"<<endl<<endl;
    
    while(getline(infile2,fastq2)){ 
        
        if (no2==count2){
            infile2>>fastq2;
            strcpy(base2, fastq2.c_str());
            
            for(int i=0; i<lDNA2; i++){ 
         
                outfile<<base2[i];               
            }
           
        outfile<<endl;
        count2+=4;
        bil2+=1;
        }
        else{}
        no2++;
    }          
    outfile.close();
    infile2.close();
   // cout<<bil<<endl;
    
    //cout changeDT
    basechar2=changeDT2(bil2, lDNA2);
        for (int j=0; j<bil; j++){
        for(int i=0;i<lDNA; i++){
            cout<<basechar2[j][i];
        }
        cout<<endl;
    }
        
     //cout consensus
    consen2= cs2(basechar2, lDNA2, bil2);
    for (int i=0; i<lDNA2; i++){
        cout<<"-";
    }
    cout<<endl;
    for (int i=0; i<lDNA2; i++){
        if (consen[i]=='a'||consen[i]=='t'||consen[i]=='g'||consen[i]=='c'){
            toupper(consen2[i]);
            cout<<"{"<<consen2[i]<<"}";
        }
        else{
        cout<<consen2[i];
        }
    }   
    
    return 0;
}


