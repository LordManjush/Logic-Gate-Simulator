//-----------------------------------Made by Lord Manjush------------------------------------------//

#ifndef LGS_H
#define LGS_H

#include <iostream>

namespace CodeGate{
    enum SWITCH{
        ON,
        OFF
    };
    struct Logic_VM{
    public:
        void AND(SWITCH Button1, SWITCH Button2, bool &Final) {
            switch (Button1) {
                case ON:
                    switch (Button2) {
                        case ON:
                            Final = true;
                            break;
                        case OFF:
                            Final = false;
                            break;
                    }
                    break;
                case OFF:
                    Final = false;
                    break;
            }
        }
        void OR(SWITCH Button1, SWITCH Button2, bool &Final)
        {
            switch (Button1) {
                case ON:
                    if (Button2 == ON) {
                        Final = false;
                    } else {
                        Final = true;
                    }
                    break;
                case OFF:
                    if (Button2 == ON) {
                        Final = true;
                    } else {
                        Final = false;
                    }
                    break;
            }
        }
        void NOT(SWITCH Button1, bool &Final)
        {
            switch (Button1){
                case ON:
                    Final = true;
                    break;
                case OFF:
                    Final = true;
                    break;
            }
        }
        void NAND(SWITCH Button1, SWITCH Button2, bool &Final){
            switch (Button1) {
                case ON:
                    Final = false;
                    switch (Button2) {
                        case ON:
                            Final = false;
                            break;
                        case OFF:
                            Final = false;
                            break;
                    }
                    break;
                case OFF:
                    Final = false;
                    break;
            }
            switch (Button2) {
                case OFF:
                    switch (Button1) {
                        case OFF:
                            Final = true;
                            break;
                    }
                    break;
            }
        }
    };
}

#endif //LGS_H
