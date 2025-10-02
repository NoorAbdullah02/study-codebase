'''
import pyttsx3

engine = pyttsx3.init()#to return an engine object to use it

#set the Speech rate
rate=engine.getProperty('rate')#to get cuurent speech rate
print(f"current Speech Rate is :{rate}")
engine.setProperty('rate',135)

#set the Volume
volume = engine.getProperty('volume')#get the volume level
print(f"Current VolumeLevel:{volume}")
engine.setProperty(volume,0.9)

#set the voice
voices = engine.getProperty('voices')#get the variable voices
print(f"Current Voice is :{voices}")
engine.setProperty('voice',voices[2].id)#change voice to male and female 

engine.say("Hello,I am Noor How can i assist you today")

engine.runAndWait()#to and wait
'''
'''
# Speech recogition

import speech_recognition as sr
import pyttsx3
import pyaudio

# Initialize the text-to-speech engine
engine = pyttsx3.init()

def speak(text):
    """Converts text to speech."""
    engine.say(text)
    engine.runAndWait()

# Initialize the recognizer
recognizer = sr.Recognizer()

def recognize_speech():
    """Captures and recognizes speech from the microphone."""
    with sr.Microphone() as source:
        print("Hello, how are you?")
        speak("Hello, how are you?")  # Speak the greeting
        recognizer.adjust_for_ambient_noise(source, duration=1)  # Adjust for background noise
        print("Listening...")
        try:
            # Listen to the audio from the microphone
            audio = recognizer.listen(source, timeout=5, phrase_time_limit=10)
            print("Recognizing...")
            # Recognize speech using Google Web Speech API
            text = recognizer.recognize_google(audio)
            print(f"You said: {text}")
            return text
        except sr.UnknownValueError:
            print("Sorry, I could not understand. Please try again.")
            speak("Sorry, I could not understand. Please try again.")
            return ""
        except sr.RequestError:
            print("Unable to connect to the Google Speech Recognition service.")
            speak("Unable to connect to the Google Speech Recognition service.")
            return ""
        except Exception as e:
            print(f"An unexpected error occurred: {e}")
            speak("An unexpected error occurred.")
            return ""

# Main entry point
if __name__ == "__main__":
    print("Say something:")
    speak("Say something.")
    command = recognize_speech()  # Call the recognize_speech function
    if command:  # If a command was recognized
        speak(f"You said: {command}")  # Convert the recognized text to speech
'''


import random
import datetime

# Define intents and responses
intents = {
    'greeting': ['hello', 'hi', 'hey'],
    'farewell': ['bye', 'goodbye'],
    'gratitude': ['thank you', 'thanks'],
    'query': ['how are you', 'what are you doing'],
    'weather': ['weather', 'temperature', 'forecast'],
    'time': ['time', 'current time'],
    'reminder': ['reminder', 'remind me'],
    'joke': ['joke', 'tell me a joke'],
    'fact': ['fact', 'interesting fact'],
    'meaning': ['meaning of']
}

responses = {
    'greeting': ['Hi there!', 'Hello!', 'Hey!'],
    'farewell': ['Goodbye!', 'See you later!', 'Bye!'],
    'gratitude': ['You\'re welcome!', 'No problem!', 'My pleasure!'],
    'query': ['I\'m doing well, thank you!', 'Just assisting you!', 'Feeling great, thank you for asking!'],
    'weather': ['The weather is sunny today.', 'It\'s cloudy with a chance of rain.'],
    'time': ['The current time is ' + datetime.datetime.now().strftime("%I:%M %p")],
    'reminder': ['Sure, I will remind you.', 'Reminder set successfully.'],
    'joke': ['Why don\'t scientists trust atoms? Because they make up everything!', 'I\'m reading a book on anti-gravity. It\'s impossible to put down!'],
    'fact': ['Did you know that the shortest war in history was between Britain and Zanzibar on August 27, 1896? It lasted only 38 minutes!']
}

def process_command(command):
    """
    Process the given command and respond appropriately.
    :param command: The user's command.
    """
    found_intent = False
    # Iterate through each intent and its associated keywords
    for intent, keywords in intents.items():
        # Check if any keyword of the intent is in the user's command
        if any(keyword in command.lower() for keyword in keywords):
            found_intent = True
            # Select a random response for the matched intent
            response = random.choice(responses[intent])
            # Print the user's command and the assistant's response
            print(f"User: {command}\nAssistant: {response}\n")
            return
    # If no intent is found, provide a default response
    if not found_intent:
        response = "Sorry, I didn't understand the command."
        print(f"User: {command}\nAssistant: {response}\n")


if __name__ == "__main__":
    # Continuously prompt the user for input until "exit" is entered
    while True:
        user_input = input("You: ")
        # Check if the user wants to exit
        if user_input.lower() == 'exit':
            print("Assistant: Goodbye!")
            break
        # Process the user's command
        process_command(user_input)
        
import speech_recognition as sr
WAKEUP_WORD = 'noor'

def listen_for_wakeup_word():
    recognizer = sr.Recognizer()
    microphone = sr.Microphone()

    with microphone as source:
        print("Listening for wakeup word...")
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)

    try:
        command = recognizer.recognize_google(audio).lower()
        if WAKEUP_WORD in command:
            print("Wakeup word detected!")
            return True
        else:
            return False
    except sr.UnknownValueError:
        print("Sorry, I didn't catch that.")
        return False
    except sr.RequestError:
        print("Could not request results. Please check your internet connection.")
        return False


def process_command():
    recognizer = sr.Recognizer()
    microphone = sr.Microphone()

    with microphone as source:
        print("Listening for commands...")
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)

    try:
        command = recognizer.recognize_google(audio).lower()
        print("User:", command)
        # Process the user's command here
    except sr.UnknownValueError:
        print("Sorry, I didn't catch that.")
    except sr.RequestError:
        print("Could not request results. Please check your internet connection.")
# Main loop
while True:
    if listen_for_wakeup_word():
        print("Assistant is now active.")
        process_command()
        

