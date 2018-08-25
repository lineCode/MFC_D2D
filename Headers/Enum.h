#pragma once

enum TEXTYPE { 
	TEX_SINGLE, 
	TEX_MULTI, 
	TEX_END 
};

enum OBJID { 
	OBJ_TERRAIN, 
	OBJ_PLAYER,
	OBJ_BULLET,
	OBJ_MONSTER,
	OBJ_BOSS,
	OBJ_MOSTERBULLET,
	OBJ_BOSSBULLET,
	OBJ_TRIGGER,
	OBJ_OBSTACLE,
	OBJ_DARK,
	OBJ_UI,
	OBJ_EFFECT,
	OBJ_END 
};

enum PLAYER_STANCE {
	IDLE, 
	MOVE, 
	DODGE, 
	STANCE_END
};

enum PLAYER_DIR {
	UP, 
	DOWN, 
	LEFT, 
	RIGHT,
	UP_LEFT, 
	UP_RIGHT, 
	DOWN_LEFT, 
	DOWN_RIGHT,
	DIR_END
};

enum MONSTER_TYPE {
	REVOLVER,
	SHOTGUN,
	MAGIC,
	TYPE_END
};

enum MONSTER_STANCE {
	MON_MOVE,
	MON_DEAD,
	MON_END
};

enum DATAID {
	PLAYER_DATA,
	DATA_END
};

