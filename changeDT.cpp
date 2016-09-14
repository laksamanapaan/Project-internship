

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

char **changeDT (int bil, int lDNA){
    ifstream infile;
    string fastq;
    char **basechar= new char*[bil], basic[lDNA];
    
    infile.open("answer.txt",ios::in);
    for(int i=0; i<bil; i++){
        getline(infile, fastq);
        strcpy(basic, fastq.c_str());
        basechar[i]=new char[lDNA];
        
        for(int j=0;j<lDNA; j++){
            basechar[i][j]=basic[j];
        }
    }

    infile.close();
    return basechar;
}

char **changeDT2 (int bil, int lDNA){
    ifstream infile;
    string fastq;
    char **basechar= new char*[bil], basic[lDNA];
    
    infile.open("answer.txt",ios::in);
    
    for(int i=0; i<bil; i++){
        getline(infile, fastq);
       strcpy(basic, fastq.c_str());
        basechar[i]=new char[lDNA];
        
        for(int j=0;j<lDNA; j++){
            basechar[i][j]=basic[j];
        }
    }

    infile.close();
    return basechar;
}