#include "pitches.h"

int melody[] = {
  // DIATONIC SCALE
  // NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5,
  // NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6

  // ARPEGGIOUS
  NOTE_C5, NOTE_E5, NOTE_G5, NOTE_C6

  // PENTATONIC
  // NOTE_C5, NOTE_D5, NOTE_E5,
  // NOTE_G5, NOTE_A5, NOTE_C6

};

// int noteDuration = 1000;  // how long each note sounds (ms)
// int gap = 50;            // silence between notes (ms)

// MODERATO
// int noteDuration = 200;
// int gap = 20;

// ALLEGRO
// int noteDuration = 100;
// int gap = 10;

// Vivace
int noteDuration = 60;
int gap = 5;

void setup() {}

void loop() {

  // ASCENDING (change to 8 if diatonic scale)
  for (int i = 0; i < 4; i++) {
    tone(8, melody[i]);
    delay(noteDuration);
    noTone(8);          // stop sound EXACTLY on time
    delay(gap);
  }

  // DESCENDING (avoid repeating the highest note, change to 6 if diatonic scale)
  for (int i = 2; i >= 0; i--) {
    tone(8, melody[i]);
    delay(noteDuration);
    noTone(8);          // stop sound
    delay(gap);
  }

  delay(300);           // small pause before restarting
}
