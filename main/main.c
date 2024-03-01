#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "cst816s.h" //触摸屏
#include "gc9a01.h"  //显示屏
#include "led_brightness.h"

// #include "lvgl.h" // lvgl组件
#include "lv_demos.h"

void app_main(void)
{
    gc9a01_init();
    cst816s_init();

    // lv_demo_benchmark();
    lv_demo_widgets();

    display_brightness_init();
    display_brightness_set(50);

    while (1)
    {
        vTaskDelay(10000 / portTICK_PERIOD_MS);
    }
}
