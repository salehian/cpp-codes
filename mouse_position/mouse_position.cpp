#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CoreGraphics.h>

// This function returns the current position of the mouse cursor.
CGPoint getMousePosition() {
    // Create a new event object.
    CGEventRef event = CGEventCreate(nullptr);
    
    // Get the current location of the mouse cursor from the event object.
    CGPoint cursorPosition = CGEventGetLocation(event);
    
    // Release the event object to free up memory.
    CFRelease(event);
    
    // Return the current mouse cursor position.
    return cursorPosition;
}

// The main function of the program.
int main() {
    // Call the getMousePosition function to retrieve the current mouse cursor position.
    CGPoint position = getMousePosition();
    
    // Print the current mouse cursor position to the console.
    printf("Mouse position: X = %f, Y = %f\n", position.x, position.y);
    
    // Return 0 to indicate successful program completion.
    return 0;
}