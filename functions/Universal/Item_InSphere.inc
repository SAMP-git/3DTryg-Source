Tryg3D::Function:: Item::InSphere(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:x,Float:y,Float:z,Float:radius){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInSphere(px,py,pz,x,y,z,radius);
}