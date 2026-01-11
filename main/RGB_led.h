#ifndef MAIN_RGB_led_H_
#define MAIN_RGB_led_H_

//RGB LED GPIO pins
#define RGB_LED_RED_PIN    25
#define RGB_LED_GREEN_PIN  33
#define RGB_LED_BLUE_PIN   32
//CHANNELS LED COLORS MIX 
#define RGB_LED_CHANNEL_NUMBER 3
// RGB CONFIGURATION LED
typedef struct {
    int channel;
    int gpio;
    int mode;
    int timer_index;
} ledc_info_t;
extern ledc_info_t ledc_ch[RGB_LED_CHANNEL_NUMBER];

// Color para indicar que la aplicación WiFi ha comenzado
void rgb_led_wifi_app_started(void);
// Color para indicar que el servidor HTTP ha comenzado
void rgb_led_http_server_started(void);
// Color para indicar que el WiFi está conectado en la esp32
void rgb_led_wifi_connected(void);      

#endif /* MAIN_RGB_led_H_ */