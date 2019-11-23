#include "mbed.h"
#include "command_responder.h"

Serial pc_b(SERIAL_TX, SERIAL_RX);

void RespondToCommand(tflite::ErrorReporter* error_reporter,
                      int32_t current_time, const char* found_command,
                      uint8_t score, bool is_new_command) {

  pc_b.printf("Heard %s (%d) @%dms\n", found_command, score, current_time);

  if (is_new_command) {
    // pc_b.printf("Heard %s (%d) @%dms\n", found_command, score, current_time);
  }
}
