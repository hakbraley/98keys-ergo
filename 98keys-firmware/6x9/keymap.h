#define LAYOUT_6x9( \
    L00, L01, L02, L03, L04, L05, L06, L07,                R00, R01, R02, R03, R04, R05, R07 \
    L08, L09, L10, L11, L12, L13, L14, L15,                R09, R10, R11, R12, R13, R14, R15 \
    L16, L17, L18, L19, L20, L21, L22, L23,                R16, R17, R18, R19, R20, R21, R22 \
    L24, L25, L26, L27, L28, L29, L30 ,L31,                R23, R24, R25, R26, R27, R28, R29 \
    L40, L41, L42, L43, L44, L45,                                    R30, R31, R32, R33, R34 \
                             L51, L52, L53,                 R35, R36, R37 \
    
) { \
    { L00, L01, L02, L03, L04, L05, L06, L07 }, \
    { L08, L09, L10, L11, L12, L13, L14, L15 }, \
    { L16, L17, L18, L19, L20, L21, L22, L23 }, \
    { L24, L25, L26, L27, L28, L29, L30 ,L31 }, \ 
    { L40, L41, L42, L43, L44, L45, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, L51, L52, L53 }, \ 
\
    { R00, R01, R02, R03, R04, R05, R07 }, \
    { R09, R10, R11, R12, R13, R14, R15 }, \
    { R16, R17, R18, R19, R20, R21, R22 }, \
    { R23, R24, R25, R26, R27, R28, R29 }, \
    { XXX, XXX, R30, R31, R32, R33, R34 }, \ 
    { R35, R36, R37, XXX, XXX, XXX, XXX }, \ 
}
    
#define LAYOUT_6x9_3_thumb( \
    L00, L01, L02, L03, L04, L05, L06, L07,                R00, R01, R02, R03, R04, R05, R07 \
    L08, L09, L10, L11, L12, L13, L14, L15,                R09, R10, R11, R12, R13, R14, R15 \
    L16, L17, L18, L19, L20, L21, L22, L23,                R16, R17, R18, R19, R20, R21, R22 \
    L24, L25, L26, L27, L28, L29, L30 ,L31,                R23, R24, R25, R26, R27, R28, R29 \
    L40, L41, L42, L43, L44, L45,                                    R30, R31, R32, R33, R34 \
                             L51, L52, L53,                 R35, R36, R37 \
    
) { \
    { L00, L01, L02, L03, L04, L05, L06, L07 }, \
    { L08, L09, L10, L11, L12, L13, L14, L15 }, \
    { L16, L17, L18, L19, L20, L21, L22, L23 }, \
    { L24, L25, L26, L27, L28, L29, L30 ,L31 }, \ 
    { L40, L41, L42, L43, L44, L45, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, L51, L52, L53 }, \ 
\
    { R00, R01, R02, R03, R04, R05, R07 }, \
    { R09, R10, R11, R12, R13, R14, R15 }, \
    { R16, R17, R18, R19, R20, R21, R22 }, \
    { R23, R24, R25, R26, R27, R28, R29 }, \
    { XXX, XXX, R30, R31, R32, R33, R34 }, \ 
    { R35, R36, R37, XXX, XXX, XXX, XXX }, \ 
}
