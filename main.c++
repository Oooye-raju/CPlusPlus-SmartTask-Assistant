#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

// #pragma comment(lib, "winmm.lib")

using namespace std;

void displayCommands()
{
    vector<string> commands = {
        "hello",
        "hi",
        "what is the time",
        "open notepad",
        "open Microsoft Excel",
        "open Microsoft Word",
        "open Microsoft Paint",
        "play music",
        "open Google",
        "open YouTube",
        "close Chrome browser",
        "open photo",
        "open video",
        "open OOPs book",
        "bye/exit"};

    for (const string &command : commands)
    {
        cout << "- " << command << endl;
    }
}

void greetings()
{

    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Master Raju" << endl;
        string phrase = "Good Morning Master Raju";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon Master Raju";
        string phrase = "Good Afternoon Master Raju";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 16 && time->tm_hour <= 24)
    {
        cout << "Good Evening Master Raju";
        string phrase = "Good Evening Master Raju";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The date and time is " << endl
         << dt << endl;
}

int main()
{
    system("cls");

    cout << "\t<###################################  PERSONAL ASSISSTANT ########################################" << endl
         << endl;

    string password;
    string command;

    do
    {
        cout << "******************************************************" << endl;
        cout << "| ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER RAJU|" << endl;
        cout << "******************************************************" << endl
             << endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER RAJU";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin, password);

        STARTUPINFOA startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (password == "raju")
        {
            cout << "\n<**************************************************************************************************>\n\n";
            greetings();
            do
            {
                cout << "\n<**********************************************************************************************>\n\n";
                cout << endl
                     << "How can I help you Master Raju...." << endl
                     << endl;

                string phrase = "How can I healp you Master Raju";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout << "Enter your question ===>";
                getline(cin, command);
                cout << "Answer to your question is ===>";

                if (command == "help")
                {
                    cout << "List of available commands:" << endl;
                    string phrase = "List of available commands:";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    displayCommands();
                }
                else if (command == "hello" || command == "hi")
                {
                    cout << "Hello Master Raju....." << endl;
                    string phrase = "Hello Master Raju";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (command == "what is the time")
                {
                    datetime();
                }
                else if (command == "open notepad")
                {
                    cout << "Openining notepad" << endl;
                    string phrase = "Openining notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    // CreateProcessA(TEXT("C:/Program Files/WindowsApps/Microsoft.WindowsNotepad_11.2304.26.0_x64__8wekyb3d8bbwe/Notepad/Notepad.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, NULL, &startInfo, &processInfo);
                    ShellExecute(NULL, "open", "C:/Program Files/WindowsApps/Microsoft.WindowsNotepad_11.2304.26.0_x64__8wekyb3d8bbwe/Notepad/Notepad.exe", NULL, NULL, SW_SHOWDEFAULT);
                }
                else if (command == "open Microsoft Excel")
                {
                    cout << "opening Microsoft Excel" << endl;
                    string phrase = "opening Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    // CreateProcessA(TEXT("C:/Program Files/Microsoft Office/root/Office16/EXCEL.EXE"), NULL, NULL, NULL, FALSE, 0,  NULL, NULL, NULL, &startInfo, &processInfo);
                    ShellExecute(NULL, "open", "C:/Program Files/Microsoft Office/root/Office16/EXCEL.EXE", NULL, NULL, SW_SHOWDEFAULT);
                }
                else if (command == "open Microsoft Word")
                {
                    cout << "opening Microsoft Word" << endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    // CreateProcessA(TEXT("C:/Program Files/Microsoft Office/root/Office16/WINWORD.EXE"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, NULL, &startInfo, &processInfo);
                    ShellExecute(NULL, "open", "C:/Program Files/Microsoft Office/root/Office16/WINWORD.EXE", NULL, NULL, SW_SHOWDEFAULT);
                }

                else if (command == "open Microsoft Paint")
                {
                    cout << "opening Microsoft Paint" << endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    // CreateProcessA(TEXT("C:/Users/raju9/AppData/Local/Microsoft/WindowsApps/mspaint.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, NULL, &startInfo, &processInfo);
                    ShellExecute(NULL, "open", "C:/Users/raju9/AppData/Local/Microsoft/WindowsApps/mspaint.exe", NULL, NULL, SW_SHOWDEFAULT);
                }

                else if (command == "play music")
                {
                    cout << "playing music now" << endl;
                    string phrase = "playing music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    mciSendString("open \"despacito_justin_bieber.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
                    mciSendString("play mp3", NULL, 0, NULL);
                }

                else if (command == "open google")
                {
                    cout << "openining google" << endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if (command == "open youtube")
                {
                    cout << "openining YouTube" << endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if (command == "close chrome browser")
                {
                    cout << "closing chrome browser" << endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }

                else if (command == "open photo")
                {
                    cout << "opening photo" << endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "raju.jpg", NULL, NULL, SW_NORMAL);
                }
                else if (command == "open video")
                {
                    cout << "opening video" << endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:/raju/C++_Tutorials/OOPs_Lec 1.mp4", NULL, NULL, SW_NORMAL);
                }
                else if (command == "open oops book")
                {
                    cout << "opening oops book" << endl;
                    string phrase = "opening oops book";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:/raju/C++_Tutorials/c++Practical.pdf", NULL, NULL, SW_NORMAL);
                }

                else if (command == "bye" || command == "exit")
                {
                    cout << "Good Bye Master Raju, see you soon!" << endl;
                    string phrase = "Good Bye Master Raju, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout << "Sorry could not understand your command please try again !!!" << endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            } while (1);
        }
        else
        {
            system("cls");

            cout << "\t<###################################  PERSONAL ASSISSTANT ########################################" << endl
                 << endl;
            cout << "**********************" << endl;
            cout << "X Incorrect Password X" << endl;
            cout << "**********************" << endl
                 << endl;

            string phrase = "Incorrect Password, please enter correct password";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }

    } while (1);

    return 0;
}




// g++ main.cpp -lwinmm