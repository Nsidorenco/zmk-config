build:
	(cd ~/Documents/Code/keeb/zmk/app && export ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb && export GNUARMEMB_TOOLCHAIN_PATH=/usr/local/ && west build -b nice_nano_v2 -- -DSHIELD=corne_left -DZMK_CONFIG="/Users/nikolaj/Documents/Code/keeb/zmk-config/config")
