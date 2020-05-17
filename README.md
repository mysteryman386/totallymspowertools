# totallymspowertools
WARNING! THIS .MSI FILE IS MALWARE! IT CAN BREAK YOUR COMPUTER! DO NOT INSTALL IT IN YOUR MAIN COMPUTER! USE A VM TO TEST OUT THIS .MSI FILE! THIS IS FOR EDUCATIONAL PURPOSE!

Features
==========
This installer and the application inside the installer are two different payloads that cooperate with each other
The installer does the following registry changes:
The installer makes a registry key that denies task manager and settings/control panel from starting up, even if you are an admin (I will also try add the functionality to disable regedit as well, to make disabling these keys harder). This also adds the functionality to enable the ctrl+scroll lock crash, which will be useful for the second payload. The final registry change will disable windows defender, UAC, and windows update, so this malware can also be a backdoor for zero-day attacks. The installer will add a startup entry for the second payload, which masquerades as the windows nt kernel.

The second payload starts when you start your pc after installation (or when you open it up via file explorer). When the application starts, it will close explorer.exe, and proceeds to rickroll you. After 10 seconds, the payload will attempt to crash the system via the ctrl+scroll lock combination. Rinse and repeat.

Note this application is a WIP so features may not work. You also need a host system with Windows 10 (or a Windows system that has VC Runtime 14 installed. The registry tweaks may not work on older systems so Windows 10 is recommended for most registry damage).

Changelog
=========
0.5.2
First release.
