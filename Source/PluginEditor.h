/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "Controller.h"
#include "Core/XML_handler.h"
//==============================================================================
/**
*/
class KarplusStrongAuproAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    KarplusStrongAuproAudioProcessorEditor (KarplusStrongAuproAudioProcessor&);
    ~KarplusStrongAuproAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
	friend class Controller;
	
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it
    KarplusStrongAuproAudioProcessor& processor;
	void SliderSetup(Slider * slider, int size);
	MidiKeyboardComponent keyboardComponent;
	Slider attackS, decayS, sustainS, releaseS, volumeS, toneS, ResS;
	Controller m_controller;
	XML_Handler Storage;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KarplusStrongAuproAudioProcessorEditor)
};
