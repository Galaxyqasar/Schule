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
                            
#declare Camera_Rotating = camera {
  	angle   	35
  	location 	<-100.0 , 200.0 ,400.0>
  	right    	x*image_width/image_height
  	look_at  	<0.0 , 0.0, 0.0>
  	rotate   	<0,-360*(clock+0.10),0>      
} //---------------------- end of camera
