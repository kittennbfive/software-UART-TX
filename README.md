# software-UART-TX

This repo contains a basic quick and dirty implementation of a software UART (TX-only) for AVR. Written in C, blocking, no interrupts, single GPIO, no other hardware used.  
  
AGPLv3+ and NO WARRANTY!  
  
The UART uses 38400(!) 8N1, because thats the fastest standard baudrate for which the bitdelay is an integer. Indeed `_delay_us()` provided by avr-libc only works with an integer.  
  
Add files to your project, adjust pin and registers in header and you are done! See main.c for a complete example.
