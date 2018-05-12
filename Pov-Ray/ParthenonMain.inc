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
		translate <0,9,0>
	}
}