void setup() {
           Serial.begin(9600);  // open serial connection to USB Serial 
                                 //port(connected to your computer)
          Serial1.begin(57600);  // open internal serial connection to 
                                 //MT7688

}

void loop() {
    String s1 = "";
    String s2 = "";
    if (Serial1.available()) {
        char c = Serial1.read();
        if(c!='\n'){
            s1 += c;
        }
        delay(5);    // 沒有延遲的話 UART 串口速度會跟不上Arduino的速度，會導致資料不完整
    }
     if(s1!=""){
        Serial.print(s1);
    }

  if (Serial.available()){
      char c = Serial.read();
        if(c!='\n'){
            s2 += c;
        }
        delay(5);
    }
    if(s2!=""){
        Serial1.print(s2);
    }
  
}
