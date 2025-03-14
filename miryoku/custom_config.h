// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

# Battery Monitoring Task
CONFIG_ZMK_BATTERY_REPORT_INTERVAL=60
# Debounce
CONFIG_ZMK_KSCAN_DEBOUNCE_PRESS_MS=5
CONFIG_ZMK_KSCAN_DEBOUNCE_RELEASE_MS=5
# BT Improvement
CONFIG_BT_CTLR_TX_PWR_PLUS_8=y
# Name
CONFIG_ZMK_KEYBOARD_NAME="Corne Miryoku"
# Battery in Windows
CONFIG_BT_GATT_ENFORCE_SUBSCRIPTION=n

#Sleep mode
# Milliseconds of inactivity before entering idle state	(10 minute)
CONFIG_ZMK_IDLE_TIMEOUT=600000
# Enable deep sleep support	
CONFIG_ZMK_SLEEP=y
# Milliseconds of inactivity before entering deep sleep (15 minutes)
CONFIG_ZMK_IDLE_SLEEP_TIMEOUT=900000

# zmk studio
CONFIG_ZMK_STUDIO=y
CONFIG_ZMK_STUDIO_LOCKING=n
CONFIG_ZMK_STUDIO_LOCK_ON_DISCONNECT=n
