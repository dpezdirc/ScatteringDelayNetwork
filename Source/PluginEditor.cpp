/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
ScatteringDelayReverbAudioProcessorEditor::ScatteringDelayReverbAudioProcessorEditor (ScatteringDelayReverbAudioProcessor& p)
    : AudioProcessorEditor (&p),
	sourceXPositionSlider(Slider::RotaryVerticalDrag, Slider::TextBoxAbove),
	sourceYPositionSlider(Slider::RotaryVerticalDrag, Slider::TextBoxAbove),
	sourceXPositionLabel("", "X Position: "),
	sourceYPositionLabel("", "Y Position: "),
	roomContainer(p),
	processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
	addAndMakeVisible(roomContainer);
	
	
	addAndMakeVisible (&sourceXPositionSlider);
	sourceXPositionSlider.addListener (this);
	sourceXPositionSlider.setRange (0.01, 4.99, 0.001);
	sourceXPositionSlider.setValue (processor.sourceXPosition->get());
	sourceXPositionLabel.attachToComponent(&sourceXPositionSlider, false);
	sourceXPositionLabel.setJustificationType(Justification::centred);
	
	addAndMakeVisible (&sourceYPositionSlider);
	sourceYPositionSlider.addListener (this);
	sourceYPositionSlider.setRange (0.01, 4.99, 0.001);
	sourceYPositionSlider.setValue (processor.sourceYPosition->get());
	sourceYPositionLabel.attachToComponent(&sourceYPositionSlider, false);
	sourceYPositionLabel.setJustificationType(Justification::centred);
	
    setSize (600, 600);
}

ScatteringDelayReverbAudioProcessorEditor::~ScatteringDelayReverbAudioProcessorEditor()
{
}

//==============================================================================
void ScatteringDelayReverbAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
//    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
	g.fillAll (Colours::black);

    g.setColour (Colours::white);
    g.setFont (15.0f);
//    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void ScatteringDelayReverbAudioProcessorEditor::sliderValueChanged (Slider* slider) {

	
};

void ScatteringDelayReverbAudioProcessorEditor::resized()
{
	roomContainer.setBoundsRelative(0.1, 0.1, 0.8, 0.8);
//	sourceXPositionSlider.setBoundsRelative(0, 0.1, 0.5, 0.5);
//	sourceYPositionSlider.setBoundsRelative(0.5, 0.1, 0.5, 0.5);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
