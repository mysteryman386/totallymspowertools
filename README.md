# totallymspowertools
WARNING! THIS .MSI FILE IS MALWARE! IT CAN BREAK YOUR COMPUTER! DO NOT INSTALL IT IN YOUR MAIN COMPUTER! USE A VM TO TEST OUT THIS .MSI FILE! THIS IS FOR EDUCATIONAL PURPOSE!

Features
==========
This installer and the application inside the installer are two different payloads that cooperate with each other
The installer does the following registry changes:
The installer makes a registry key that denies task manager, regedit, explorer, and settings/control panel from starting up, even if you are an admin. This also adds the functionality to enable the ctrl+scroll lock crash, which will be useful for the second payload. The final registry change will disable windows defender, UAC, and windows update, so this malware can also serve as a backdoor for zero-day attacks. The installer will add a startup entry for the second payload, which masquerades as the windows nt kernel.

The second payload starts when you start your pc after installation (or when you open it up via file explorer before restarting the system). When the application starts, it will close explorer.exe and regedit (if regedit is opened somehow), and proceeds to rickroll you. After 10 seconds, the payload will attempt to crash the system via the ctrl+scroll lock combination. If it doesn't, enjoy the show! Rinse and repeat.

Note this application is a WIP so features may not work. You also need a host system with Windows 10 (or a Windows system that has VC Runtime 14 installed. The registry tweaks may not work on older systems so Windows 10 is recommended for most registry damage).

Changelog
=========
0.5.3
Locked Explorer.exe from running (note, explorer.exe may still run after signing out but the second payload will get to work soon after)
Made every drive letter inaccessible (You can still see your documents, music folders, etc). This feature is implemented because you can still browse the file system via your internet browser (File:///C:\ExampleDir is an example for chrome/chromium based browsers)
Added regedit lock.
added Run/ winkey+r lock.
Second/startup payload now has the ability to close regedit

0.5.2
First release.
