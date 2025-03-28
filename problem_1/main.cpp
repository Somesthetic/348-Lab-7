#include <iostream>

int main(){
  int score;
  while (true){
    std::cout << "Enter 0 or 1 to STOP\nEnter the NFL score: ";
    std::cin >> score;
    if (score <= 1){
      return 0;
    } // the test is just gonna be completely brute forcing it
    for (int safety = (score / 2); safety >= 0; safety--){
      for (int field = (score / 3); field >= 0; field--){
        for (int td = (score / 6); td >= 0; td--){
          for (int td_p = (score / 7); td_p>= 0; td_p--){
            for (int td_p2 = (score / 8); td_p2>= 0; td_p2--){
              if ((safety*2)+(field*3)+(td*6)+(td_p*7)+(td_p2*8) == score){
                printf("%i TD + 2pt, %i TD + FG, %i TD, %i 3pt FG, %i Safety\n", td_p2, td_p, td, field, safety);
              }
            }
          }
        }
      }
    }




  }
}