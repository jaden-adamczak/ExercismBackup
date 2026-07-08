namespace hellmath {
enum class AccountStatus{troll,guest,user,mod};
enum class Action{read,write,remove};

bool display_post(AccountStatus op,AccountStatus viewer){
    return (op==AccountStatus::troll && viewer==AccountStatus::troll) || (op!=AccountStatus::troll);
}
                                                        
bool permission_check(Action act,AccountStatus acc){
    if (act==Action::read) return true; 
    switch (acc){
        case AccountStatus::mod:
            return true;
        case AccountStatus::troll:
        case AccountStatus::user:
            return act==Action::write;
        default:
            return false;
    }
}

bool valid_player_combination(AccountStatus p1,AccountStatus p2){
    switch(p1){
        case AccountStatus::troll:
            return p1==p2;
        case AccountStatus::guest:
            return false;
        default:
            return !(p2==AccountStatus::troll||p2==AccountStatus::guest);
    }
}
    
bool has_priority(AccountStatus p1,AccountStatus p2){
    return p1>p2; //Assuming we never change the order of the enum...
}
    
}  // namespace hellmath
