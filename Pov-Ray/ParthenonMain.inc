#include "ParthenonShapes.inc"
#include "ParthenonTextures.inc"

/////////////////////////////

#declare Parthenon = union{
	object{ base
		texture{ T_SandStone}
		pigment{ P_SandStone}
	}
	object{ wallsTop
		texture{ T_SandStone}
		pigment{ P_Brick_SandStone}
		translate <0,11,0>
	}
	object{ wallsBottom
		texture{ T_SandStone}
		pigment{ P_Brick_SandStone_Big}
		translate <0,9,0>
	}	
	object{ outerPillows  
		texture{ T_SandStone}
		pigment{ P_SandStone}
		translate <0,7,0>
	}
	object{ innerPillows   
		texture{ T_SandStone}
		pigment{ P_SandStone}
		translate <0,9,0>
	}
	object{ rooms      
		texture{ T_SandStone}
		pigment{ P_SandStone}
		translate <0,9,0>
	}
	object{ roof
		pigment{
		    color rgb< 0.75, 0.5, 0.25>*0.25
		}
		translate <0,27,0>
	}
}