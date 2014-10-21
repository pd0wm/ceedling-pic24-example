/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/
// PIC24EP128GP204 Configuration Bit Settings

// 'C' source line config statements
 int FICD __attribute__((space(prog), address(0x157F0))) = 0xFFCF ;
//_FICD(
//    ICS_PGD1 &           // ICD Communication Channel Select bits (Communicate on PGEC1 and PGED1)
//    JTAGEN_OFF           // JTAG Enable bit (JTAG is disabled)
//);
 int FPOR __attribute__((space(prog), address(0x157F2))) = 0xFFFF ;
//_FPOR(
//    ALTI2C1_OFF &        // Alternate I2C1 pins (I2C1 mapped to SDA1/SCL1 pins)
//    ALTI2C2_OFF &        // Alternate I2C2 pins (I2C2 mapped to SDA2/SCL2 pins)
//    WDTWIN_WIN25         // Watchdog Window Select bits (WDT Window is 25% of WDT period)
//);
 int FWDT __attribute__((space(prog), address(0x157F4))) = 0xFF7B ;
//_FWDT(
//    WDTPOST_PS &    // Watchdog Timer Postscaler bits (1:2048)
//    WDTPRE_PR128 &       // Watchdog Timer Prescaler bit (1:128)
//    PLLKEN_ON &          // PLL Lock Enable bit (Clock switch to PLL source will wait until the PLL lock signal is valid.)
//    WINDIS_OFF &         // Watchdog Timer Window Enable bit (Watchdog Timer in Non-Window mode)
//    FWDTEN_OFF           // Watchdog Timer Enable bit (Watchdog timer enabled/disabled by user software)
//);
 int FOSC __attribute__((space(prog), address(0x157F6))) = 0xFFDB ;
//_FOSC(
//    POSCMD_NONE &        // Primary Oscillator Mode Select bits (Primary Oscillator disabled)
//    OSCIOFNC_ON &        // OSC2 Pin Function bit (OSC2 is general purpose digital I/O pin)
//    IOL1WAY_ON &         // Peripheral pin select configuration (Allow only one reconfiguration)
//    FCKSM_CSDCMD         // Clock Switching Mode bits (Both Clock switching and Fail-safe Clock Monitor are disabled)
//);
 int FOSCSEL __attribute__((space(prog), address(0x157F8))) = 0xFFF9 ;
//_FOSCSEL(
//    FNOSC_FRCPLL &       // Oscillator Source Selection (Fast RC Oscillator with divide-by-N with PLL module (FRCPLL))
//    IESO_ON              // Two-speed Oscillator Start-up Enable bit (Start up device with FRC, then switch to user-selected oscillator source)
//);
 int FGS __attribute__((space(prog), address(0x157FA))) = 0xFFFF ;
//_FGS(
//    GWRP_OFF &           // General Segment Write-Protect bit (General Segment may be written)
//    GCP_OFF              // General Segment Code-Protect bit (General Segment Code protect is Disabled)
//);