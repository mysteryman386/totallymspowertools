#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <time.h>
#include <ctime>
using namespace std;

typedef std::chrono::system_clock Clock;

int main() {
    void HideConsole();
    {
        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    }

    std::this_thread::sleep_for(10s);

    srand(time(NULL)); // Num Generator

    int randNum = (rand() % 2); // random number
    int infwhile = 0;
    int randpopup = 1; // Random popups every few seconds. set it to 0 to disable it.
    int if420 = 0; //check for 420

    auto now = Clock::now();
    std::time_t now_c = Clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    std::cout << 1900 + parts->tm_year << std::endl;
    std::cout << 1 + parts->tm_mon << std::endl;
    std::cout << parts->tm_mday << std::endl;


    if (parts->tm_mday == 20 && parts->tm_mon == 3) {
        if420 = 1;
        randNum = (rand() % 3);
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
                    if (parts->tm_mday == 20 && parts->tm_mon == 3) {
                        if420 = 1;
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2));
                fbierror;

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
                    if (parts->tm_mday == 20 && parts->tm_mon == 3) {
                        if420 = 1;
                        randNum = (rand() % 3);
                    }
                }
                std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds to put another message
                nicepcerror;
            }
            else if (randNum == 2) { //420 error
                string ruderalis(); {
                    int msgboxID = MessageBox(
                        NULL,
                        L"haha w33d date",
                        L"funni",
                        MB_ICONINFORMATION | MB_CANCELTRYCONTINUE
                    );
                }
                randNum = (rand() % 3);
            }

        }
    }
    cout << "1010101";
    return 2;
}