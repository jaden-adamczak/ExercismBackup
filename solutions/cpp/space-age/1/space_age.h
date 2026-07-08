#pragma once

namespace space_age {

    class space_age {
    private:
        long long int age_in_seconds;
    
        static constexpr double earth_seconds_per_year = 31557600.0;

    public:
        // Constructor
        space_age(long long int seconds);

        // Getter for seconds
        long long int seconds() const;
    
        double on_earth() const;
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
    };

}
