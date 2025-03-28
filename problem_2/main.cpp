#include <stdio.h>
#include <iostream>
#include <string>


int main(){
  int temperature;
  char cur_unit;
  char con_unit;
  int converted_temp;
  std::string temp_cat;
  std::string warning;
  std::cout << "Input temperature: ";
  std::cin >> temperature;
  std::cout << "Current unit (c, f, or k): ";
  std::cin >> cur_unit;
  std::cout << "Unit to be converted to (c, f, or k): ";
  std::cin >> con_unit;
  switch(cur_unit) {
    // all the stuff is done based on the current unit
    case 'c':
      if (temperature < 0){
        temp_cat = "Freezing";
        warning = "Stay indoors, turn on the heater";
      }else if ( temperature < 10){
        temp_cat = "Cold";
        warning = "Wear a jacket";
      }else if ( temperature < 25){
        temp_cat = "Comfortable";
        warning = "Enjoy the beautiful weather!";
      }else if ( temperature < 35){
        temp_cat = "Hot";
        warning = "Make sure to bring sunscreen!";
      }else{
        temp_cat = "Extreme heat";
        warning = "Wear a jacket"; // at this point, the temp category and warning are fully decided, now time
        // for the conversion
      }
    switch (con_unit){  // something to finally convert the appropriate units
      case 'k':
        converted_temp = temperature + 273;
      case 'f':
        converted_temp = (temperature * (9/5)) + 32;
    } // ends the temperature converter

    case 'f':
      if (temperature < 32){
        temp_cat = "Freezing";
        warning = "Stay indoors, turn on the heater";
      }else if ( temperature < 50){
        temp_cat = "Cold";
        warning = "Wear a jacket";
      }else if ( temperature < 77){
        temp_cat = "Comfortable";
        warning = "Enjoy the beautiful weather!";
      }else if ( temperature < 95){
        temp_cat = "Hot";
        warning = "Make sure to bring sunscreen!";
      }else{
        temp_cat = "Extreme heat";
        warning = "Wear a jacket"; // at this point, the temp category and warning are fully decided, now time
        // for the conversion
      }
    switch (con_unit){  // something to finally convert the appropriate units
      case 'k':
        converted_temp = ((temperature - 32) * 5/9) + 273;
      case 'c':
        converted_temp = (temperature - 32) * 5/9;
    } // ends the temperature converter

    switch(cur_unit){  // all the stuff is done based on the current unit
      case 'k':
        if (temperature < 273){
          temp_cat = "Freezing";
          warning = "Stay indoors, turn on the heater";
        }else if ( temperature < 283){
          temp_cat = "Cold";
          warning = "Wear a jacket";
        }else if ( temperature < 298){
          temp_cat = "Comfortable";
          warning = "Enjoy the beautiful weather!";
        }else if ( temperature < 308){
          temp_cat = "Hot";
          warning = "Make sure to bring sunscreen!";
        }else{
          temp_cat = "Extreme heat";
          warning = "Wear a jacket"; // at this point, the temp category and warning are fully decided, now time
          // for the conversion
        }
      switch (con_unit){  // something to finally convert the appropriate units
        case 'c':
          converted_temp = temperature - 273;
        case 'f':
          converted_temp = (temperature * (9/5)) -236;
      } // ends the temperature converter
    }  // the rest of the code is no longer dependant on user choices, just needs to print out the result
    printf("Converted temp: %d\nTemperature category: %s\n Advisory: %s",
           converted_temp, temp_cat.c_str(), warning.c_str());
  }







}