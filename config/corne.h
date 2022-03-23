#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>

#define XXX &none
#define ___ &trans

#define BASE 0
#define NAV 1
#define NUM 2
#define SYM 3

#define TAPPING_TERM 285
#define QUICK_TAPPING_TERM 200
#define LEFT_POSITIONS <0 1 2 3 4 5 12 13 14 15 16 17 24 25 26 27 29 29 36 37 38>
#define RIGHT_POSITIONS <6 7 8 9 10 11 18 19 20 21 22 23 30 31 32 33 34 35 39 40 41>

#define UC_CUT LG(X)
#define UC_CPY LG(C)
#define UC_PST LG(V)
#define UC_UND LG(Z)
#define UC_RDO LG(LS(Z))

#define DK_SLSH AMPS
#define DK_DQT AT
#define DK_SQT BACKSLASH
#define DK_COLN GT
#define DK_SCOLN LT
#define DK_MINS SLASH
#define DK_AT LA(BACKSLASH)
#define DK_CIRC LS(LA(RBKT))
#define DK_LPRN LS(N8)
#define DK_RPRN LS(N9)
#define DK_LBKT LA(N8)
#define DK_RBKT LA(N9)
#define DK_LBRC LS(LA(N8))
#define DK_RBRC LS(LA(N9))

#define DK_DLLR NON_US_BSLH
#define DK_EQL LS(0)
#define DK_LT GRAVE
#define DK_GT LS(GRAVE)
#define DK_PLUS MINUS
#define DK_QUES LS(MINUS)
#define DK_ASTR LS(DK_SQT)
#define DK_AMPR LS(N6)
#define DK_BAR LA(I)


#define DK_AE SEMICOLON
#define DK_AO SQT
#define DK_AA LBKT

#define MORPH(NAME, DEF, ALT, MODS) \
  NAME: morph_##NAME { \
    compatible = "zmk,behavior-mod-morph"; \
    label = #NAME; \
    #binding-cells = <0>; \
    bindings = <&kp DEF>, <&kp ALT>; \
    mods = <MODS>; \
  };

