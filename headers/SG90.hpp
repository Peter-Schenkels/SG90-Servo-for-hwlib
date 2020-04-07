#include "hwlib.hpp"




namespace pulses{

  int left_pulse_time_us = 1000;
  int right_pulse_time_us = 2000;
  int middle_pulse_time_us = 1500;

}

using namespace pulses;

// Class for the SG90 Servo
class SG90 {

private:
  hwlib::target::pin_out pin;

public:

  SG90(hwlib::target::pin_out & pin);
  void move_left();
  void move_right();
  void move_middle();

private:

  void pulse(int time);
  
};