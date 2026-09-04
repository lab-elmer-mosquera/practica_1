#pragma once

void problema_1();
void problema_2();
void problema_3();
void problema_4();
void problema_5();
void problema_6();
void problema_7();
void problema_8();
void problema_9();
void problema_10();
void problema_11();
void problema_12();
void problema_13();
void problema_14();
void problema_15();
void problema_16();
void problema_17();
void problema_pendiente();


const int TOTAL_PROBLEMAS = 17;

inline void (*problemas[TOTAL_PROBLEMAS])() = {
    problema_1,
    problema_2,
    problema_3,
    problema_4,
    problema_5,
    problema_6,
    problema_7,
    problema_8,
    problema_9,
    problema_10,
    problema_11,
    problema_12,
    problema_13,
    problema_14,
    problema_15,
    problema_16,
    problema_17,
};