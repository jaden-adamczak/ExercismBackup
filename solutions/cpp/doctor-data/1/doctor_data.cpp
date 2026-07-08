#include "doctor_data.h"

namespace heaven{
Vessel::Vessel(std::string new_name,int i){
            name = new_name;
            generation = i;
        }
Vessel::Vessel(std::string new_name,int i,star_map::System new_sys){
            name = new_name;
            generation = i;
            current_system = new_sys;
        }
Vessel Vessel::replicate(std::string to_copy){
            return Vessel(to_copy,generation+1,current_system);
        }
void Vessel::make_buster(){
            busters++;
        }
bool Vessel::shoot_buster(){
            return (busters>0) ? busters-- : false;
        }
std::string get_older_bob(Vessel a, Vessel b){
        return (a.generation<b.generation) ? a.name : b.name; 
    }
bool in_the_same_system(Vessel a, Vessel b){
        return a.current_system==b.current_system;
    }
}

