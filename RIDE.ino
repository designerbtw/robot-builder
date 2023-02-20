#include <Wire.h>                                 // Подключаем библиотеку для работы с аппаратной шиной I2C.
#include <iarduino_I2C_Motor.h>                   // Подключаем библиотеку для работы с мотором I2C-flash.
iarduino_I2C_Motor mot(0x09);
iarduino_I2C_Motor mot1(0x10);
iarduino_I2C_Motor mot2(0x11);
iarduino_I2C_Motor mot3(0x12);// Объявляем объект mot для работы с функциями и методами библиотеки iarduino_I2C_Motor, указывая адрес модуля на шине I2C.
// Если объявить объект без указания адреса (iarduino_I2C_Motor mot;), то адрес будет найден автоматически.
void setup(){                                     //
    mot.begin();                                  // Инициируем работу с мотором.
    mot.setMagnet(0);                             // Указываем что энкодер отсутствует.
    mot.setInvGear(false, false);                 // Редуктор НЕ инвертирует направление вращения, ротор мотора вращается НЕ против часовой стрелки.
    mot.setStopNeutral(true);
    
    mot1.begin();                                  // Инициируем работу с мотором.
    mot1.setMagnet(0);                             // Указываем что энкодер отсутствует.
    mot1.setInvGear(false, false);                 // Редуктор НЕ инвертирует направление вращения, ротор мотора вращается НЕ против часовой стрелки.
    mot1.setStopNeutral(true);
    
    mot2.begin();                                  // Инициируем работу с мотором.
    mot2.setMagnet(0);                             // Указываем что энкодер отсутствует.
    mot2.setInvGear(false, false);                 // Редуктор НЕ инвертирует направление вращения, ротор мотора вращается НЕ против часовой стрелки.
    mot2.setStopNeutral(true);
    
    mot3.begin();                                  // Инициируем работу с мотором.
    mot3.setMagnet(0);                             // Указываем что энкодер отсутствует.
    mot3.setInvGear(false, false);                 // Редуктор НЕ инвертирует направление вращения, ротор мотора вращается НЕ против часовой стрелки.
    mot3.setStopNeutral(true);// Указываем освободить мотор при его остановке. Ротор остановленного мотора можно вращать.
}                                                 //

void forward(){
    mot.setSpeed( -100, MOT_PWM);
    mot1.setSpeed( 100, MOT_PWM);
    mot2.setSpeed( -100, MOT_PWM);
    mot3.setSpeed( 100, MOT_PWM);
}

void back(){
    mot.setSpeed( 100, MOT_PWM);
    mot1.setSpeed( -100, MOT_PWM);
    mot2.setSpeed( 100, MOT_PWM);
    mot3.setSpeed( -100, MOT_PWM);
}

void right(){
    mot.setSpeed( 100, MOT_PWM);
    mot1.setSpeed( 100, MOT_PWM);
    mot2.setSpeed( -100, MOT_PWM);
    mot3.setSpeed( -100, MOT_PWM);
}

void left(){
    mot.setSpeed( -100, MOT_PWM);
    mot1.setSpeed( -100, MOT_PWM);
    mot2.setSpeed( +100, MOT_PWM);
    mot3.setSpeed( +100, MOT_PWM);
}

void stopp(){
  mot.setStop();
  mot1.setStop();
  mot2.setStop();
  mot3.setStop();
}

void loop(){
    forward();
    delay(4000);
    stopp();
    delay(1000);
    right();
    delay(4000);
    stopp();
    delay(1000);
    back();
    delay(4000);
    stopp();
    delay(1000);
    left();
    delay(4000);
    stopp();
      delay(1000);
}
