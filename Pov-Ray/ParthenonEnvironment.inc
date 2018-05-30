// sun ----------------------------------------------------------------------

#declare Lights = union{
	light_source { < -100,50,100> 
		color White
	}
	light_source { <0,300,150> 
		color Gray*0.5
	}
	light_source { < 100,50,-100> 
		color White
	}
	light_source { <0,300,-150> 
		color Gray*0.5
	}
	light_source { < 0,25,14> 
		color Gray*0.1
	}
	light_source { <0,25,-14> 
		color Gray*0.1
	} 
	light_source { < 0,25,45> 
		color Gray*0.1
	}
	light_source { <0,25, -45> 
		color Gray*0.1
	}
}


// sky ----------------------------------------------------------------------

#declare Sky = sky_sphere {
	pigment {
		gradient <0,1,0>
        color_map { 
        	[0.00 rgb <0.6,0.7,1.0>]
      		[0.35 rgb <0.1,0.0,0.8>]
            [0.65 rgb <0.1,0.0,0.8>]
            [1.00 rgb <0.6,0.7,1.0>] 
        } 
        scale 2         
	} // end of pigment
} //end of skysphere



// ground -------------------------------------------------------------------

#declare Ground = plane{ <0,1,0>, 0 
	texture{ 
		pigment{ 
			checker color rgb<0.75,0.75,0.75> 
			color rgb<0.1,0.1,0.1>
		}
	    //normal { bumps 0.75 scale 0.025}
	    finish { phong 0.1}
	} // end of texture
} // end of plane
 
#declare heightField = height_field{
	png "height-field.png" 
	smooth
	texture{ T_Stone10    
    	normal { 
    		agate 0.25 
    		scale 0.15 
    		rotate<0,0,0> 
    	}
        finish { 
        	phong 1 
        } 
        rotate<0,0,0> 
        scale 0.5 
    scale<1/100,1/10,1/100>
        translate<0,0,0>
    } // end of texture 


    translate<-0.5,0,-0.5>
    scale<950,100,950>
    translate<0,-100,0>
}