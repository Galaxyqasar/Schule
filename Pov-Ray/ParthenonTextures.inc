//	Some Textures and pigments
// 	P_Name for Pigment
//	T_Name for Texture

#declare P_DarkGray = pigment{
	color Gray*0.25
}                                                                                                   

#declare P_SandStone = pigment{
	color rgb< 0.75, 0.5, 0.25>*0.75
}

#declare T_SandStone = texture{
	normal { 
		agate 0.5 
		scale 0.1 
		rotate<0,0,0> 
	}
	finish { phong 1 } 
	rotate<0,0,0> 
	scale 2.5 
	translate<0,0,0>
}
  
#declare P_Brick_SandStone = pigment{ 
	brick 
	color Gray*0.25 	//White*0.9                    
	color rgb< 0.75, 0.5, 0.25>*0.75  
	brick_size < 0.2, 0.05, 0.25>     
	mortar 0.005                      
	scale 19
}

#declare P_Brick_SandStone_Big = pigment{ 
	brick 
	color Gray*0.25 	//White*0.9                    
	color rgb< 0.75, 0.5, 0.25>*0.75  
	brick_size < 5, 2, 5>     
	mortar 0.1                      
	scale 1
}

#declare P_RoofRing = pigment{ 
	brick 
	color Gray*0.25                    
	color rgb< 0.75, 0.5, 0.25>*0.75  
	brick_size < 8, 3.75, 8>     
	mortar 0.255     
	translate <4,0.255,0>
}

#declare P_RoofBrick = pigment{
	brick 
	color Gray*0.25                    
	color rgb< 0.75, 0.5, 0.25>*0.75  
	brick_size < 33, 1, 1>     
	mortar 0.255
	rotate <0,0,14.697>
}


