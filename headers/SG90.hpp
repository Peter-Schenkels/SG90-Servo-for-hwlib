
#ifndef SG90_HPP
#define SG90_HPP
#include "hwlib.hpp"


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

#endif