#ifndef MESSAGE_BUFFER_H
#define MESSAGE_BUFFER_H

#include <Arduino.h>

class MessageBuffer {
public:
  MessageBuffer();
  bool isNewMessage(uint32_t hash);
  void addMessage(uint32_t hash);

private:
  uint32_t buffer[8];
  uint8_t currentIndex;
};

#endif // MESSAGE_BUFFER_H
