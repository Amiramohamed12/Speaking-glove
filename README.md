# 🧤Speaking Glove for Deaf and Dumb People

📌 Project Overview

This project aims to assist deaf and mute individuals by converting hand gestures into speech and text. The glove is equipped with flex sensors that detect finger movements. These sensor readings are processed using an ADC driver, and the corresponding text is displayed on an LCD screen, while audio output is generated using a DFPlayer module and a speaker.

🎯 Features

Flex Sensor Input: Converts finger bending into voltage values.

ADC Processing: Analog values are digitized for further processing.

LCD Display: Displays the interpreted text.

DFPlayer Mini & Speaker: Plays the corresponding speech output.

Microcontroller Integration: Manages data processing and communication between components.

🛠️ Components Used

Flex Sensors (attached to fingers)

Microcontroller (ATmega32)

LCD Display

DFPlayer Mini MP3 Module

Speaker

Resistors, Wires, and Connectors

🔧 Working Principle

Flex Sensors: Generate varying voltage outputs when fingers bend.

ADC Conversion: The microcontroller reads the sensor data and converts the analog values into digital values.

Text Processing: The microcontroller matches the digital values to predefined text outputs.

LCD Display: The corresponding text is displayed on an LCD.

Audio Output: The DFPlayer Mini fetches the pre-recorded audio and plays it through a speaker.

📌 How to Use

Wear the glove and bend fingers to form gestures.

The system detects the flex sensor values and processes them.

The corresponding text appears on the LCD.

The speaker outputs the corresponding voice command.
