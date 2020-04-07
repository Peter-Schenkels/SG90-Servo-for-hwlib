#include "hwlib.hpp"
#include "SG90.hpp"


int main(void) {
  // kill the watchdog
    hwlib::target::pin_out pin_1 = hwlib::target::pins::d13;
    hwlib::target::pin_out pin_2 = hwlib::target::pins::d12;
    hwlib::wait_ms(1000);
    SG90 servo_1(pin_1);
    SG90 servo_2(pin_2);

  for(;;){
    servo_1.move_left();
    servo_2.move_right();
    hwlib::wait_ms(100);
    servo_2.move_left();
    servo_1.move_right();
    hwlib::wait_ms(100);
  }
    servo_1.move_middle();
    servo_2.move_middle();
    hwlib::wait_ms(2000);
 
}