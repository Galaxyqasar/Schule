// PoVRay 3.7 Scene File " ... .pov"
// author:  ...
// date:    ...
//--------------------------------------------------------------------------
#version 3.7;
global_settings{ assumed_gamma 1.0 }
#default{ 
	finish{ 
		ambient 0.2 
		diffuse 0.9 
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

light_source{ Light}

light_source{ Light_2}

sky_sphere{ Sky}

object{ Ground
	translate <0,-200,0>
}

height_field{ heightField}

camera{ Camera_Top}  

object{	Parthenon}

//object{ roof}