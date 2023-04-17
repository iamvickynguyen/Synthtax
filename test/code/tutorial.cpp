#include <rtaudio/RtAudio.h>

int main()
{
  RtAudio *audio = 0;

  // Default RtAudio constructor
  try {
    audio = new RtAudio();
  }
  catch (RtError &error) {
    // Handle the exception here
    error.printMessage();
  }

  // Clean up
  delete audio;
}
