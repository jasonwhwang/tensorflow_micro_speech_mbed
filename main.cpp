#include "mbed.h"
#include "micro_speech/main_functions.h"

// Serial pc1(SERIAL_TX, SERIAL_RX);
// AnalogIn micout1(A0);
// EventQueue q1;
// Ticker sampleAudioTicker1;

// void printStatement() {
//     pc1.printf("%d\n", (int16_t)micout1.read_u16());
// }

int main()
{
    setup();
    // float period = 1.0f / 16000.0f;
    // Thread eventThread1(osPriorityRealtime);
    // eventThread1.start(callback(&q1, &EventQueue::dispatch_forever));
    // sampleAudioTicker1.attach(q1.event(&printStatement), period);

    while(1){
        loop();
        // pc1.printf("%f\n", micout1.read()*4095.0f-2047);
        // pc1.printf("%d\n", (int16_t)(micout1.read_u16())-24500);
    }
}