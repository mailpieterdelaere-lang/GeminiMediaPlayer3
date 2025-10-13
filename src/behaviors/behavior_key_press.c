#include <device.h>
#include <drivers/behavior.h>
#include <zmk/keymap.h>
#include <logging/log.h>

LOG_MODULE_REGISTER(behavior_key_press, LOG_LEVEL_INF);

static int behavior_key_press_init(const struct device *dev) {
    ARG_UNUSED(dev);
    return 0;
}

static const struct behavior_driver_api behavior_key_press_driver_api = {
    .press = NULL, // implement if needed
};

DEVICE_DT_INST_DEFINE(0,
                      behavior_key_press_init,
                      NULL,
                      NULL,
                      NULL,
                      POST_KERNEL,
                      CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,
                      &behavior_key_press_driver_api);
