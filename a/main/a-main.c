#include <stdint.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

#include "esp_err.h"
#include "esp_log.h"
#include "esp_event.h"
#include "esp_system.h"
#include "nvs_flash.h"

#include "sdkconfig.h"

static const char *TAG = "A espeed";

// pins
#define GPIO0         0   // pin6,  ANALOG, LP, XTAL_32K_P

void app_main(void) {
  while(1) {
    vTaskDelay(1000 / portTICK_PERIOD_MS); // 10ms polling
    ESP_LOGI(TAG, ".");
  };
}
