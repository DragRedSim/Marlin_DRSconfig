This fork of Marlin has the changes I've made for my workspace.

I use a Creality 4.2.7 board, with a fifth stepper driver connected over the SWDIO/SWCLK pins driving the extruder. The E driver on the board has been repurposed as a Z2 driver.

Other changes:
- Bugfix on JyersUI, where all menu items were drawn based on two lines of text, even where only one existed
- Ported the DWIN_RebootScreen function from the ProUI package into common, and altered M997.cpp to allow its use on all DWIN E3V2 displays
- Changed the PlatformIO upload protocol for the board I use to serial, as I do not have a Jlink that it expects. 
- - Long-term, hopefully I or someone else will figure out how to integrate this with an Octoprint setup and BFT.
