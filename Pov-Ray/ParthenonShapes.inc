#include "ParthenonMath.inc"
#include "ParthenonTextures.inc"
          
#local Move = clock;

//Pillow

#declare basicPillow = union{
	    cone{<0,0,0>,2,<0,18.5,0>,1.5
	    }
	    cone{<0,18.5,0>,1.5,<0,19,0>,2
	    }
	    cone{<0,19,0>,2,<0,19.3,0>,1.5
	    }
	    box{<-2,19.3,-2>,<2,20,2>
	}	
} //end basicPillow

#declare pillowRing = union{
	#for (pos, 0, 2*PI, 2*PI/20)
	    cone{<cos(pos)*2,0,sin(pos)*2>,0.2,<cos(pos)*1.5,18.5,sin(pos)*1.5>,0.2
	    }
	#end
} //end pillowRing

#declare pillow = difference{
	object{ basicPillow}
	object{ pillowRing}
} //end pillow        

//end Pillow

#declare outerPillows = union{
	#for (pos, 0, 7, 1)
		object{ pillow
			translate <pos*8-28,0,60>
		}
	#end
	
	#for (pos, 0, 7, 1)
		object{ pillow
			translate <pos*8-28,0,-60>
		}
	#end
	
	#for (pos, 1, 14, 1)
		object{ pillow
			translate <28,0,pos*8-60>
		}
	#end
	
	#for (pos, 0, 14, 1)
		object{ pillow
			translate <-28,0,pos*8-60>
		}
	#end
} //end outerPillows

#declare innerPillows = union{
	#for (pos, 0, 5, 1)
		object{ pillow
			translate <pos*8-20,0,48> 
			scale <1,0.9,1>
		}
	#end
	
	#for (pos, 0, 5, 1)
		object{ pillow
			translate <pos*8-20,0,-48>
			scale <1,0.9,1>
		}
	#end
} //end innerPillows

#declare base = union{
	box{<-22,8,-50>,<22,9,50>}
    box{<-23,7,-51>,<23,8,51>}
    box{<-30,5,-62>,<30,7,62>}
    box{<-32,3,-64>,<32,5,64>}
    box{<-34,1,-66>,<34,3,66>}
    box{<-35,0,-67>,<35,1,67>}
} //end base    

#declare entry = difference{
	box{<  -18,    0, -1.5>,<  18,   16, 1.5>}
	box{<-6.01,-0.01,-1.51>,<6.01,16.01,1.51>}
}

#declare wallsTop = union{
	box{<-22,0,-42>,<-18,16,42>} 
	box{< 22,0,-42>,< 18,16,42>}
	box{<-18,0, 12>,< 18,16,10>
		#if(Move < 2*PI & Move > PI)
			translate<0,-sin(Move-PI)*18,0>
		#end
	}
	object{ entry 
		translate <0,0,38-1.5>
	}
	object{ entry 
		translate <0,0,-38+1.5>
	}
}

#declare wallsBottom = union{
	box{<-22,0,-42>,<-18,2,42>} 
	box{< 22,0,-42>,< 18,2,42>}
	box{<-18,0, 12>,< 18,2,10>
		#if(Move < 2*PI & Move > PI)
			translate<0,-sin(Move-PI)*18,0>
		#end
	}
	object{ entry 
		translate <0,0,38-1.5>
		scale <0,0.125,0>
	}
	object{ entry 
		translate <0,0,-38+1.5>
		scale <0,0.125,0>
	}
}

#declare outerRoofRing = union{
	difference{
		box{<-30,0,-62>,<30,4,62>}
		box{<-26,-0.01,-58>,<26,4.01,58>}
	}
}
  	
#declare innerRoofRing = union{
	difference{
		box{<-22,0,-50>,<22,4,50>}
		box{<-18,-0.01,-46>,<18,4.01,46>}
	}
	box{<-18,0,-38>,<18,4,-35>}
	box{<-18,0, 38>,<18,4, 35>}
}

#declare section = prism{ -1.00, 1.00, 4
   	<-30.5, 0.00>,
   	< 30.5, 0.00>,
   	< 0.00, 8.00>,
   	<-30.5, 0.00>
   	rotate<-90,0,0>
}

#declare roofSections = union{
    object{ section
    	translate<0,0,-60>
		texture{ T_SandStone}
    	pigment{P_Brick_SandStone_Big}
    }
    object{ section
    	translate<0,0,-48>
		texture{ T_SandStone}
    }
    object{ section
    	translate<0,0,-36.5>
		texture{ T_SandStone}
    }
    object{ section
    	translate<0,0,36.5>
		texture{ T_SandStone}
    }
    object{ section
    	translate<0,0,48>
		texture{ T_SandStone}
    }
    object{ section
    	translate<0,0,60>
		texture{ T_SandStone}
    	pigment{P_Brick_SandStone_Big}
    }
}

#declare roofTop = union{
	box{<-31,0,-63>,<31,1,63> 
		texture{ T_SandStone}
		pigment{P_DarkGray}
	}
	box{<0,0,-63>,<33,1,63>
		rotate <0,0,-14.697>
		translate <-0.4,9,0>
		texture{ T_SandStone}
		pigment{ P_RoofBrick}
	}
	box{<0,0,-63>,<-33,1,63>  
		rotate <0,0,14.697>
		translate <0.4,9,0>
		texture{ T_SandStone}
		pigment{ P_RoofBrick
			rotate <0,180,0>
		}
	}
	box{<0,1,-64>,<34,2,-60> 
		rotate <0,0,-14.697>
		translate <0.4,9,0>
	}
	box{<0,1,64>,<34,2,60> 
		rotate <0,0,-14.697>
		translate <0.4,9,0>
	}
	box{<0,1,-64>,<-34,2,-60> 
		rotate <0,0,14.697>
		translate <0.4,9,0>
	}
	box{<0,1,64>,<-34,2,60> 
		rotate <0,0,14.697>
		translate <0.4,9,0>
	}
	box{<-1,-1,-64>,<1,0.5,64>
	    translate <0,10.5,0>
	}
	box{<-1,-0.5,-64>,<1,0.5,64>
	    translate <32.5,1.9,0>
	}
	box{<-1,-0.5,-64>,<1,0.5,64>
	    translate <-31.5,1.9,0>
	}
	object{ roofSections
		translate <0,1,0>
	}
}

#declare roof = union{
	object{ outerRoofRing  
		texture{ T_SandStone}
		pigment{ P_RoofRing}
	}
	object{ innerRoofRing  
		texture{ T_SandStone}
		pigment{ P_RoofRing}
	}
	object{ roofTop
		translate<0,4,0>   
		texture{ T_SandStone}
		pigment{ P_SandStone} 
    }
}

#declare room_1 = union{
    object{pillow       
        scale<1,1.1,1>
        translate<-8,0,4>
    }
    object{pillow       
        scale<1,1.1,1>
        translate<-8,0,-4>
    }
    object{pillow       
        scale<1,1.1,1>
        translate<8,0,4>
    }
    object{pillow        
        scale<1,1.1,1>
        translate<8,0,-4>
    }
}

#declare room_2 = union{
    #for(pos,0,9,1)
    object{pillow      
        scale<0.5,1.1,0.5>
        translate<-12,0,-2+pos*-4.5>
    }
    object{pillow      
        scale<0.5,1.1,0.5>
        translate<12,0,-2+pos*-4.5>
    }    
    #end
    object{pillow       
        scale<0.5,1.1,0.5>
        translate<6,0,-2>
    }
    object{pillow       
        scale<0.5,1.1,0.5>
        translate<0,0,-2>
        #if(Move < 2*PI & Move > PI)
			translate<0,-sin(Move-PI)*22,0>
		#end
    }
    object{pillow       
        scale<0.5,1.1,0.5>
        translate<-6,0,-2>
    }
}       

#declare rooms = union{
    object{room_1
        translate<0,0,25>
    }
    object{room_2
        translate<0,0,10>
    }
}

                                   