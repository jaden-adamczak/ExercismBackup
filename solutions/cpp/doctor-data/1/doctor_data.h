#pragma once
#include <string>

namespace star_map{
    enum class System{BetaHydri,Sol,EpsilonEridani,AlphaCentauri,DeltaEridani,Omicron2Eridani};
}

namespace heaven{
    class Vessel{
        public:
            Vessel(std::string name,int i);
            Vessel(std::string name,int i,star_map::System new_sys);
            std::string name{};
            int generation{1};
            star_map::System current_system{star_map::System::Sol};
            Vessel replicate(std::string name);
            int busters{0};
            void make_buster();
            bool shoot_buster();
    
    };
    std::string get_older_bob(Vessel a, Vessel b);
    bool in_the_same_system(Vessel a, Vessel b);
}


