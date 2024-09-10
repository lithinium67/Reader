// this mod of Reader have a implementation with the Command line Arguments (CLA)

#include <stdio.h> // for printf, and file functions 
#include <stdlib.h> // for system()

// OS check

#ifdef _WIN32
        #define CLEAR "cls" // Windows
    #elif __unix__
        #define CLEAR "clear" // Unix-Like (Linux, BSD, Etc)
    #elif __APPLE__
        #define CLEAR "clear" // MacOS
    #else
        #define OSNOTSUPPORTED // if OS not suported
    #endif 

// Functions Prototypes
void ReadAndPrintFile(const char *FileName);

// Main Function
int main(int argc, char *argv[]){

    // in case of OS Not Supported
    #ifdef OSNOTSUPPORTED
        printf("OS not supported\n\n");
        return 2;
    #endif

    //char *nFile;

    // Arguments Check
    if (argc <= 1){
        printf("Missing Arguments (File Path)\n");
        return 1;
    } else if (argc > 2){
        printf("Too many arguments\n");
        return 1;
    }
    
    const char *nFile = argv[1];
    
    system(CLEAR);

    ReadAndPrintFile(nFile);

    return 0;
}

void ReadAndPrintFile(const char *FileName){
    FILE *pFile = fopen(FileName, "r");

    if (!pFile){ // Error if file dont exist or cannot read
        printf("Error Opening the File\n");
        return;
    }
    
    do {
        int buffer = fgetc(pFile);
        if (buffer != EOF){ // Continue reading if you haven't reached the end of the file
            printf("%c", (char) buffer);
        } else { 
            printf("\n");
        }
    } while (!feof(pFile));
    
    fclose(pFile);
}
