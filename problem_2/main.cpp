#include <stdio.h>
#include <iostream>


int main(){
  int temperature;
  char cur_unit;
  char con_unit;
  int converted_temp;
  std::cout << "Input temperature: ";
  std::cin >> temperature;
  std::cout << "Current unit (c, f, or k)";
  std::cin >> cur_unit;
  std::cout << "Unit to be converted to (c, f, or k)";
  std::cin >> con_unit;
  switch(cur_unit){  // all the stuff is done based on the current unit
    case 'c':
      if (temperature < 0){
        char temp_cat[] = "Freezing";
        char warning[] = "Stay indoors, turn on the heater";
      }else if ( temperature < 10){
          char temp_cat[] = "Cold";
          char warning[] = "Wear a jacket";
      }else if ( temperature < 25){
        char temp_cat[] = "Comfortable";
        char warning[] = "Enjoy the beautiful weather!";
      }else if ( temperature < 35){
        char temp_cat[] = "Hot";
        char warning[] = "Make sure to bring sunscreen!";
      }else{
        char temp_cat[] = "Extreme heat";
        char warning[] = "Wear a jacket"; // at this point, the temp category and warning are fully decided, now time
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
        char temp_cat[] = "Freezing";
        char warning[] = "Stay indoors, turn on the heater";
      }else if ( temperature < 50){
        char temp_cat[] = "Cold";
        char warning[] = "Wear a jacket";
      }else if ( temperature < 77){
        char temp_cat[] = "Comfortable";
        char warning[] = "Enjoy the beautiful weather!";
      }else if ( temperature < 95){
        char temp_cat[] = "Hot";
        char warning[] = "Make sure to bring sunscreen!";
      }else{
        char temp_cat[] = "Extreme heat";
        char warning[] = "Wear a jacket"; // at this point, the temp category and warning are fully decided, now time
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
          char temp_cat[] = "Freezing";
          char warning[] = "Stay indoors, turn on the heater";
        }else if ( temperature < 283){
          char temp_cat[] = "Cold";
          char warning[] = "Wear a jacket";
        }else if ( temperature < 298){
          char temp_cat[] = "Comfortable";
          char warning[] = "Enjoy the beautiful weather!";
        }else if ( temperature < 308){
          char temp_cat[] = "Hot";
          char warning[] = "Make sure to bring sunscreen!";
        }else{
          char temp_cat[] = "Extreme heat";
          char warning[] = "Wear a jacket"; // at this point, the temp category and warning are fully decided, now time
          // for the conversion
        }
      switch (con_unit){  // something to finally convert the appropriate units
        case 'c':
          converted_temp = temperature - 273;
        case 'f':
          converted_temp = (temperature * (9/5)) -236;
      } // ends the temperature converter



    }






}