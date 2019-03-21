int green = D6; 
int blue = D5; 
int red = D4;

int led(String command);

void setup() {
    Particle.function("led", led);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(red, OUTPUT);
}

void loop() {
    
}

int led(String command) {
    
    if (command == "green") {
        digitalWrite(green, HIGH);
    }
    
    else if (command == !"green") {
        digitalWrite(green, LOW);
    }
    
    if (command == "blue") {
        digitalWrite(blue, HIGH);
    }
    
    else if (command == !"blue") {
        digitalWrite(blue, LOW);
    }
    
    if (command == "red") {
        digitalWrite(red, HIGH);
    }

    else if (command == !"red") {
        digitalWrite(red, LOW);
    }
    

}