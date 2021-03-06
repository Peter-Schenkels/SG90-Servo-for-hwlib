#include "SG90.hpp"


SG90::SG90(hwlib::target::pin_out & pin):
    pin(pin)
  {}

void SG90::move_left(){
pulse(1000);
}

void SG90::move_right(){
pulse(2000);
}

void SG90::move_middle(){
pulse(1500);
}

void SG90::pulse(int time){
    for(unsigned int i = 0; i < 75; i++){
        pin.write(0);
        pin.flush();
        hwlib::wait_us(time);
        pin.write(1);
        pin.flush();
        hwlib::wait_us(time);
    }

}

