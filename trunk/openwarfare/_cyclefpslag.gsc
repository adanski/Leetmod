#include openwarfare\_utils;

cycleFPSLagometer()
{
	// Check if this is the first time the function is called
	if ( !isDefined( self.cycleFPS ) ) {
		self.cycleFPS = 0;
	}
	
	// Cycle the value
	self.cycleFPS++;
	if ( self.cycleFPS > 3 ) {
		self.cycleFPS = 0;
	}
	
	// Initialze the variables 
	drawFPS = 0;
	drawLagometer = 0;	
	
	// Check which values we need to set according to the position in the cycle
	switch ( self.cycleFPS ) {
		case 0:
			drawFPS = 0;
			drawLagometer = 0;
			break;
			
		case 1:
			drawFPS = 1;
			drawLagometer = 0;
			break;
			
		case 2:
			drawFPS = 0;
			drawLagometer = 1;
			break;
			
		case 3:
			drawFPS = 1;
			drawLagometer = 1;
			break;
	}
	
	// Set the corresponding client dvars
	self setClientDvars( "cg_drawFPS", drawFPS,
	                     "cg_drawLagometer", drawLagometer );
	                     
	self playLocalSound( "mouse_click" );
	                     
	return;	
}