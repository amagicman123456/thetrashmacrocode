#include <windows.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void getChars(){
    for(int i=0;i>-1;++i){
        string inputs;
        cin >> inputs;
    }
}
int main(){
    string loopCase, keyNum;
    string keyCurrentInput[100] = {};
    int times;
    bool infinite = false;
    cout << "How many times would you like to loop over?(infinite or input a number)" << endl;
    cin >> loopCase;
    if(loopCase == "infinite"){
        bool infinite = true;
    }else{
        times = stoi(loopCase);
    }
    cout << "How many keys?(number, max is 100)" << endl;
    cin >> keyNum;
    cout << "What keys?" << endl;
    for(int i=0;i<stoi(keyNum);++i){
        cin >> keyCurrentInput[i];
    };
    if(infinite){
        Sleep(5000);
        for(int i=0;i>-1;++i){
            for(int j=0;j<stoi(keyNum);++j){
                if(keyCurrentInput[j] == "sleep"){
                    Sleep(1000);
                }else if(keyCurrentInput[j] == "left_click"){
                    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                }else if(keyCurrentInput[j] == "right_click"){
                    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                }else if(keyCurrentInput[j] == "enter"){
                    keybd_event(0xD, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0xD, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "0"){
                    keybd_event(0x30, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "1"){
                    keybd_event(0x31, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "2"){
                    keybd_event(0x32, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "3"){
                    keybd_event(0x33, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "4"){
                    keybd_event(0x34, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "5"){
                    keybd_event(0x35, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x35, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "6"){
                    keybd_event(0x36, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x36, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "7"){
                    keybd_event(0x37, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x37, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "8"){
                    keybd_event(0x38, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x38, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "9"){
                    keybd_event(0x39, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "A"){
                    keybd_event(0x41, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "B"){
                    keybd_event(0x42, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0);;
                }else if(keyCurrentInput[j] == "C"){
                    keybd_event(0x43, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "D"){
                    keybd_event(0x44, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "E"){
                    keybd_event(0x45, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "F"){
                    keybd_event(0x46, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x46, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "G"){
                    keybd_event(0x47, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "H"){
                    keybd_event(0x48, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x48, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "I"){
                    keybd_event(0x49, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "J"){
                    keybd_event(0x4A, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4A, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "K"){
                    keybd_event(0x4B, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4B, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "L"){
                    keybd_event(0x4C, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "M"){
                    keybd_event(0x4D, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "N"){
                    keybd_event(0x4E, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "O"){
                    keybd_event(0x4F, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "P"){
                    keybd_event(0x50, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "Q"){
                    keybd_event(0x51, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x51, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "R"){
                    keybd_event(0x52, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x52, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "S"){
                    keybd_event(0x53, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "T"){
                    keybd_event(0x54, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x54, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "U"){
                    keybd_event(0x55, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x55, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "V"){
                    keybd_event(0x56, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "W"){
                    keybd_event(0x57, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "X"){
                    keybd_event(0x58, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "Y"){
                    keybd_event(0x59, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "Z"){
                    keybd_event(0x5A, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x5A, 0, KEYEVENTF_KEYUP, 0);
                }
            };
        };
    }else/*if(times == stoi(loopCase))*/{
        Sleep(5000);
        for(int i=0;i<times;++i){
            for(int j=0;j<sizeof(keyCurrentInput)/sizeof(keyCurrentInput[0]);++j){
                if(keyCurrentInput[j] == "sleep"){
                    Sleep(1000);
                }else if(keyCurrentInput[j] == "left_click"){
                    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                }else if(keyCurrentInput[j] == "right_click"){
                    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                }else if(keyCurrentInput[j] == "enter"){
                    keybd_event(0xD, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0xD, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "0"){
                    keybd_event(0x30, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "1"){
                    keybd_event(0x31, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "2"){
                    keybd_event(0x32, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "3"){
                    keybd_event(0x33, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "4"){
                    keybd_event(0x34, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x34, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "5"){
                    keybd_event(0x35, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x35, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "6"){
                    keybd_event(0x36, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x36, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "7"){
                    keybd_event(0x37, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x37, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "8"){
                    keybd_event(0x38, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x38, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "9"){
                    keybd_event(0x39, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "A"){
                    keybd_event(0x41, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "B"){
                    keybd_event(0x42, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x42, 0, KEYEVENTF_KEYUP, 0);;
                }else if(keyCurrentInput[j] == "C"){
                    keybd_event(0x43, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "D"){
                    keybd_event(0x44, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "E"){
                    keybd_event(0x45, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "F"){
                    keybd_event(0x46, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x46, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "G"){
                    keybd_event(0x47, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "H"){
                    keybd_event(0x48, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x48, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "I"){
                    keybd_event(0x49, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "J"){
                    keybd_event(0x4A, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4A, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "K"){
                    keybd_event(0x4B, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4B, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "L"){
                    keybd_event(0x4C, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "M"){
                    keybd_event(0x4D, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "N"){
                    keybd_event(0x4E, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "O"){
                    keybd_event(0x4F, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "P"){
                    keybd_event(0x50, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "Q"){
                    keybd_event(0x51, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x51, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "R"){
                    keybd_event(0x52, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x52, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "S"){
                    keybd_event(0x53, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "T"){
                    keybd_event(0x54, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x54, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "U"){
                    keybd_event(0x55, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x55, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "V"){
                    keybd_event(0x56, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "W"){
                    keybd_event(0x57, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "X"){
                    keybd_event(0x58, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "Y"){
                    keybd_event(0x59, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0);
                }else if(keyCurrentInput[j] == "Z"){
                    keybd_event(0x5A, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    keybd_event(0x5A, 0, KEYEVENTF_KEYUP, 0);
                }
            }
        };
    };
    getChars();
    return 0;
}