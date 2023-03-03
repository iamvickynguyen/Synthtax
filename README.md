# MusiCPP

MusiCPP is a simple music programming language.

## Idea

There are 2 ways we can do this:

### 1. Easy

A language that allows users to write a basic score like MusicV ([github.com/MUSICV](https://github.com/vlazzarini/MUSICV)). Here is an example taken from MusicV ([github.com/MUSICV/scores/score1](https://github.com/vlazzarini/MUSICV/blob/master/scores/score1))

```bash
 INS 0 1 ;
 IOS P5 P6 B2 F1 P30 ;
 OUT B2 B1 ;
 END ;
 GEN 0 1 2 0 0 .999 50 .999 205 -.999 306 -.999 461 0 511 ;
 GEN 0 2 1 512 1 1 ;
 NOT 1 1 5 500 5.0984;
 TER 8.00 ;
```


### 2. Challenging

A language that allows users to write their own sounds, and supports loops, conditionals, etc. like Chuck ([github.com/chuck](https://github.com/ccrma/chuck)), BUT much simpler.

Example: simple sine wave ([Listing1.1.ck](https://github.com/ccrma/chuck/blob/main/examples/book/digital-artists/chapter1/Listing1.1.ck))

```ck
SinOsc s => dac; // (1) Connects (ChucKs) a sine wav oscillator to the dac (sound out)
0.6 => s.gain;   // (2) Sets oscillator gain to 0.6
220 => s.freq;   // (3) Sets oscillator frequency to 220
second => now;   // (4) Lets it play for one second
```

Example: oscillators, loop, conditionals, math, etc. ([Listing2.8.ck](https://github.com/ccrma/chuck/blob/main/examples/book/digital-artists/chapter2/Listing2.8.ck))

```ck
// Listing 2.8 Two-part random walk music with panning

// 2-part Random Music with Panning
// by ChucK Team, September 25, 2020
// two oscillators, melody and harmony
SinOsc s => Pan2 mpan => dac;  // (1) SinOsc through Pan2 so it canmove around
TriOsc t => dac;               // (2) TriOsc fixed at center location

// we will use these to separate notes later
0.5 => t.gain;                 // (3)  Float variables to control your note gains
0.5 => float onGain;
0.0 => float offGain;
72 => int melodyNote;          // (4) Int variable to control your melody

while (true)
{
    // set melody pitch somewhat randomly, with limits
    Math.random2(-3,3) +=> melodyNote;  // (5) Randomly changes melody up, down, or not

    if (melodyNote < 60)       // (6) Lower limit on melody
    {
        60 => melodyNote;
    }
    if (melodyNote > 84)       // (7) Upper limit on melody
    {
        84 => melodyNote;
    }

    Std.mtof(melodyNote) => s.freq;  // (8) Sets solo SinOsc pitch

    // melody has a random pan for each note
    Math.random2f(-1.0,1.0) => mpan.pan;

    // On a "dice roll," change harmony note
    if (Math.random2(1,6) == 1)
    {                               // (9) Randomly sticks TriOsc on a pitch
        Std.mtof(melodyNote-12) => t.freq; 
    }

    // Pick one of three random durations
    Math.random2(1,3)*0.2 => float myDur;

    // note on time is 80% of duration
    onGain => s.gain;
    (myDur*0.8)::second => now;

    // space between notes is 20% of array duration
    offGain => s.gain;
    (myDur*0.2)::second => now;
}
```

## How to run

1. `cmake -S . -B build`
2. `cd build`
3. `make`
4. `./musicpp`
