#include <pebble.h>
#include "dota2timer.h"

void get_string_for_roshan(unsigned int roshan_status, char* s) {
  switch (roshan_status) {
    case ROSHAN_DEAD:
      snprintf(s, 5, "%s", "DEAD");
      break;
    case ROSHAN_ALIVE:
      snprintf(s, 6, "%s", "ALIVE");
      break;
    default:
      snprintf(s, 5, "%%%2d", roshan_status);
  }
}

int seconds(void) {
  time_t seconds;
  seconds = time(NULL);
  return (int)seconds;
}

void get_string_for_time(int elapsed_time, char *s) {
  int minutes = elapsed_time / 60;
  int seconds_elapsed = elapsed_time % 60;
  snprintf(s, TIME_BUFFER_SIZE, "%02d:%02d", minutes, seconds_elapsed);
}
