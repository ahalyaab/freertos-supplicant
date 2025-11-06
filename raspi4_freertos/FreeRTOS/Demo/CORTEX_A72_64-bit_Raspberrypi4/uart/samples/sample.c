// clean sample.c — no stdlib, no hardware, no warnings
void main(void)
{
    // simple dummy loop to ensure no “unused” or “empty” warnings
    volatile int counter = 0;
    while (counter < 5) {
        counter++;
    }

    // stay here forever
    while (1) {
        // idle loop
    }
}

