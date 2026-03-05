#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG = "BOOT_LOG";

void app_main(void)
{
    ESP_LOGI(TAG, "ESP32 started successfully in C.");
    
    while (1) {
        printf("Heartbeat: System operational...\n");
        // Delay for 1000ms (1 second) to prevent watchdog reset
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
