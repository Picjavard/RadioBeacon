// #include <SoftwareSerial.h>
// #include <TimerMs.h>

// const int _ID = 1; 

// // (период, мс), (0 не запущен / 1 запущен), (режим: 0 период / 1 таймер)
// TimerMs tmr(3000, 1);

// //пины для подключения HC-12
// int RX = 10;
// int TX = 11;
// int SET = 9;

// SoftwareSerial HC_Serial(RX, TX); // RX, TX

// void setup() {
  
//   HC_Set(1); // принудительно выходим из режима SET

//   delay(3000);

//   Serial.begin(9600);
//   Serial.println("Hello, this is RadioBeacon_01");

//   HC_Serial.begin(9600);
//   // HC_Serial.println("Hello, this is RadioBeacon_01");

//   delay(100);

//   HC_InitPower(8);

//   delay(100);
// }

// void loop() { 

//   if (HC_Serial.available()) {
//     Serial.write(HC_Serial.read());
//   }
//   if (Serial.available()) {
//     HC_Serial.write(Serial.read());
//   }

//   if (tmr.tick()) {
//     Serial.println("peek");
//     // ping(8);
//     // //delay(80);
//     // ping(7);
//     // // delay(80);
//     // // ping(6);
//     // // delay(80);
//     // ping(5);
//     // // delay(80);
//     // // ping(4);
//     // // delay(80);
//     // ping(3);
//     // // delay(80);
//     // // ping(2);
//     // // delay(80);
//     ping(8);
//   }
  
// }

// void ping(int power){
//   HC_InitPower(power);
//   delay(80);
//   String s = "01";
//   s += power;
//   s += "";
//   HC_Serial.println(s);
//   delay(20);
//   // Serial.println(power);
// }

// //Настройка мощности передачи HC-12 (теоретически занимает от 120мс)
// void HC_InitPower(int power){
//   pinMode(SET, 1);
//   delay(40);
//   String s = "AT+P";
//   s += power;
//   // Serial.println(s);
//   HC_Serial.println(s);
//   pinMode(SET, 0);
// }

// //Включить или выключить режим настройки радиомодуля HC
// void HC_Set(bool flag){
//   pinMode(SET, flag);
// }
