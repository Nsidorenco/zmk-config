#define XXX &none
#define ___ &trans

#define BASE 0
#define NAV 1
#define NUM 2
#define SYM 3

#define SK(KEY) &nk KEY KEY
#define MO(LAYER, KEY) &mo_tap LAYER KEY

// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000
