// PoVRay 3.7 Scene File " ... .pov"
// author:  ...
// date:    ...
//--------------------------------------------------------------------------
#version 3.7;
global_settings{ assumed_gamma 1.0 }
#default{ 
	finish{ 
		ambient 0.05 
		diffuse 0.75 
	}
}
 
//-------------------------------------------------------------------------- 
                   
#include "math.inc" 
#include "golds.inc"
#include "glass.inc"
#include "woods.inc"
#include "colors.inc"
#include "metals.inc"
#include "stones.inc"
#include "shapes.inc"
#include "shapes2.inc"
#include "textures.inc"
#include "functions.inc"
#include "transforms.inc"

#include "ParthenonMain.inc"
#include "ParthenonCamera.inc"
#include "ParthenonEnvironment.inc"



//---------------------------------------------------------------------------
//---------------------------- scene ----------------------------------------
//---------------------------------------------------------------------------

object{ Lights}

sky_sphere{ Sky}

object{ Ground
	translate <0,-100,0>
}

height_field{ heightField}

camera{ Camera_Rotating}  

object{	Parthenon}

//object{ roof}