#include <iostream>
#include <windows.h>
#include <fstream>

int main(int argc, char** argv)
{
    STARTUPINFO si = {};
    PROCESS_INFORMATION pi = {};
    if (!CreateProcess(L"C:\\GitProject\\project3\\FirstFile\\Debug\\FirstFile.exe", 
        0,        
        NULL,           
        NULL,           
        FALSE,          
        0,              
        NULL,           
        NULL,            
        &si,            
        &pi)           
        )
    {
        std::cout<<("CreateProcess failed (%d).\n", GetLastError());
        return 0;
    }
    Sleep(10);
    char buff[50]; 
    std::ifstream fin("file.txt"); 

    if (!fin.is_open()) 
        std::cout << "Файл не может быть открыт!\n";
    else
    {
        fin.getline(buff, 50);
        fin.close();
        std::cout << buff << std::endl;
    }
    
}
