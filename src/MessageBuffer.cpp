#include "MessageBuffer.h"

MessageBuffer::MessageBuffer() : currentIndex(0) {
  // Initialize buffer to zero
  memset(buffer, 0, sizeof(buffer));
}

bool MessageBuffer::isNewMessage(uint32_t hash) {
  for (uint8_t i = 0; i < 8; ++i) {
    if (buffer[i] == hash) {
      return false;
    }
  }
  return true;
}

void MessageBuffer::addMessage(uint32_t hash) {
  buffer[currentIndex] = hash;
  currentIndex = (currentIndex + 1) % 8;
}
