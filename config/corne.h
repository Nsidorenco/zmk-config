#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>

#define XXX &none
#define ___ &trans

#define BASE 0
#define NAV 1
#define NUM 2
#define SYM 3

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
#define DK_CIRC LS(RBKT)
#define DK_LPRN LS(8)
#define DK_RPRN LS(9)
#define DK_LBKT LA(8)
#define DK_RBKT LA(9)
#define DK_LBRC LS(LA(8))
#define DK_RBRC LS(LA(9))

#define DK_DLLR NON_US_BSLH
#define DK_EQL LS(0)
#define DK_LT GRAVE
#define DK_GT LS(GRAVE)
#define DK_PLUS KC_MINUS
#define DK_QUES LS(KC_MINUS)
#define DK_ASTR LS(DK_SQT)
#define DK_AMPR LS(6)
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

