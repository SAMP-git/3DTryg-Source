Tryg3D::Function:: Float:SetPlayerTargetPlayerAngle(playerid,targetid,&Float:rz=0.0){
	new Float:mx,Float:my,Float:x,Float:y;
	GetPlayerPos(playerid,mx,my,rz);
	GetPlayerPos(targetid,x,y,rz);
	GetRotationFor2Point2D(mx,my,x,y,rz);
	SetPlayerFacingAngle(playerid,rz);
	return rz;
}