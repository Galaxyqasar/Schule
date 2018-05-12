// sun ----------------------------------------------------------------------

#declare Light = light_source { < -100,50,100> 
	color White
}

#declare Light_2 = light_source { <0,300,150> 
	color Gray*0.25
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
	texture{
    	pigment{
    		color Gray
    	}
    }
    translate<-0.5,0,-0.5>
    scale<1000,200,1000>
    translate<0,-200,0>
}