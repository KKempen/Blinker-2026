#ifndef BLINKER_H
    #define BLINKER_H

    class Blinker {
        private:
            int _pin;
            unsigned long _interval;
            unsigned long _startVertraging;
            unsigned long _volgendeBlink;


        public:
             // Constructor
            Blinker(int pin, unsigned long interval, unsigned long startVertraging = 0);     
            // ~Blinker()     // Destructor

            int kweenie();
    };
#endif