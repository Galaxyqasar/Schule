//--------------------------------------------------------------------------
// camera ------------------------------------------------------------------
#declare Camera_Front = camera {
	perspective angle 75            
    location  	 <0.0 , 25.0 ,150.0>
    right     	 x*image_width/image_height
    look_at   	 <0.0 , 27.0 , 0.0>
}
                        
#declare Camera_Diagonal = camera {/*ultra_wide_angle*/ 
	angle 		 90
    location  	 <-75 , 50 ,75>
    right    	 x*image_width/image_height
    look_at  	 <0.0 , 1.0 , 0.0>
} 
                            
#declare Camera_Side = camera {/*ultra_wide_angle*/ 
	angle 		 90  
   	location	 <-100.0 , 50.0 , 0.0>
   	right    	 x*image_width/image_height
   	look_at  	 <0.0 , 15.0 , 0.0>
}

#declare Camera_Top = camera {/*ultra_wide_angle*/  
	angle 		90       
	location 	<0.0 , 100.0 ,0>
	right     	x*image_width/image_height
	look_at   	<0.0 , 0.0 , 0.0>
	rotate	  	<0,90,0>
}                            

#local Move = clock;
                            
#declare Camera_Rotating = camera {
  	angle   	70
  	right    	x*image_width/image_height
  	#if(Move < PI) 
  	    location<sin(Move)*150,12,cos(Move)*150>
  	    look_at<0,12,0>   
  	#end 
  	#if(Move < 2*PI & Move > PI)
  	    location<0,12+sin(Move-PI)*3,(Move-1.5*PI)/(PI/2)*150>
  	    look_at<sin(Move-PI)*10,12+sin(Move-PI)*2,cos(Move-PI)*10>
  	#end
  	#if(Move < 3*PI & Move > 2*PI) 
  	    location<sin(Move)*150,sin(Move)*50+12,cos(Move)*150>
  	    look_at<0,12,0> 
  	#end
  	#if(Move = 0)
  	    location<0,12,-150>
  	    look_at<0,12,0>
  	#end
}

