#include "hwlib.hpp"
#include "SG90.hpp"





int main(void) {
  // kill the watchdog
    hwlib::target::pin_out pin = hwlib::target::pins::d9;
    hwlib::wait_ms(1000);
    SG90 servo(pin);
    
    servo.move_left();
    hwlib::wait_ms(2000);
    servo.move_right();
    hwlib::wait_ms(2000);
    servo.move_middle();
    hwlib::wait_ms(2000);
 
}