# TeamCalc (Arduino / PlatformIO)

## How to Build & Run

1. Open this folder in VS Code (You already did congratulations!).

2. In the PlatformIO panel:
   - **Project Tasks → env:uno_r4_wifi → Build**
   - **Project Tasks → env:uno_r4_wifi → Upload**
   - **Project Tasks → env:uno_r4_wifi → Monitor**

3. Serial Monitor settings:
   - **Baud:** `9600`
   - **End of line:** `CRLF` (Carriage Return + Line Feed)


## Usage

After the Serial Monitor opened you have to press the button on your Arduino.

When the firmware starts you’ll see:
0=Blink 1=Sum 2=Multiply

Press a key and confirm with "Enter":

- **0** -> Blink once = The Arduino blinks once. Such wow
- **1** -> Sum = Enter 2 numbers and the Serial Monitor will show you the sum
- **2** -> Multiply = Enter 2 numbers and the Serial Monitor will show you the product
