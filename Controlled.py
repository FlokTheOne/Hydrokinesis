import keyboard
import serial
import time

from inputs import get_gamepad

usbPort = 'COM3'
braudspeed = 9600
timeForArduinoToInitializeCuzYouKnowItsASlowMicroController = 2

ConnectedArduino = serial.Serial(usbPort, braudspeed, timeout=1 )
time.sleep(timeForArduinoToInitializeCuzYouKnowItsASlowMicroController)


print("pressing T will enable you to get new powers :O  ")

while True:
    events = get_gamepad()
    if keyboard.is_pressed("t"):
        print("I lied...Or did I...? Sending 'T' for your Arduino")
        ConnectedArduino.write(b'T\n')
        while keyboard.is_pressed("t"):
            pass
        

    elif keyboard.is_pressed("r"):
        print("I lied...Or did I...? Sending 'R' for your Arduino")
        ConnectedArduino.write(b'R\n')
        while keyboard.is_pressed("R"):
            pass
        
    elif keyboard.is_pressed("y"):
        print("I lied...Or did I...? Sending 'Y' for your Arduino")
        ConnectedArduino.write(b'Y\n')
        while keyboard.is_pressed("y"):
            pass
    

    elif keyboard.is_pressed("u"):
        print("I lied...Or did I...? Sending 'U' for your Arduino")
        ConnectedArduino.write(b'U\n') 
        while keyboard.is_pressed("u"):
            pass
        
    elif keyboard.is_pressed("i"):
        print("I lied...Or did I...? Sending 'I' for your Arduino")
        ConnectedArduino.write(b'I\n')
        while keyboard.is_pressed("i"):
            pass
        

    elif keyboard.is_pressed("esc"):
        print("Giving up early i see.....aassthat wont even cryyyه")
        break
    
