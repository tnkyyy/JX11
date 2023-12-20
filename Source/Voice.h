/*
  ==============================================================================

    Voice.h
    Created: 19 Dec 2023 3:49:06pm
    Author:  rowan

  ==============================================================================
*/

#pragma once
  
struct Voice
{
    int note;
    int velocity;

    void reset() {
        note = 0;
        velocity = 0;
    }
};