This project requires that the following is installed on your computer
* Ruby (http://rubyinstaller.org/)
* Ceedling gem (gem install ceedling)
* Microchip XC16 compiler - Cross-platform C compiler for 16 bit PICs (http://www.microchip.com/pagehandler/en_us/promo/mplabxc/)
* MPLAB-X

To run tests type:
    
    rake test:all

To create release hex file:
    
    rake release