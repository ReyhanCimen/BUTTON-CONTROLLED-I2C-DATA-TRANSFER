# BUTTON-CONTROLLED-I2C-DATA-TRANSFER
This Arduino project uses an RGB LCD and a push button connected to analog pin A1.
When the button is pressed, the LCD displays a welcome message; otherwise, it shows a goodbye message.
The LCD is initialized with a 16×2 layout and a green backlight using the `rgb_lcd` library.
Button state is continuously read to update the display in real time.
