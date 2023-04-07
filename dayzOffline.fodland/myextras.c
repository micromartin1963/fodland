void AddMyObjects()
{ 
SpawnObject("fods_canister_red", "3459.7 69.84 4510.86", "90 0 0"); 
SpawnObject("fods_canister_red", "7607.7 24.32 4846.86", "90 0 0"); 
SpawnObject("fods_canister_red", "3553.3 27.7 8423.7", "90 0 0"); 
SpawnObject("PVPSign", "2210.847900 11.408718 7557.345215", "-44.999992 0.000000 0.000000");
SpawnObject("PVPSign", "2221.782227 10.336887 7550.788086", "-102.798744 0.000000 0.000000");
SpawnObject("PVPSign2", "2244.500977 10.361322 7582.127441", "-44.999992 0.000000 0.000000");

SpawnObject("PVPSign2", "2256.616943 10.017233 7580.309082", "-44.999981 0.000000 0.000000");
SpawnObject("PVPSign2", "2263.250000 9.709143 7574.279785", "44.999992 -0.000000 -0.000000",);
SpawnObject("PVPSign2", "2248.829834 9.702387 7572.921875", "-98.999962 0.000000 -0.000000");
SpawnObject("PVPSign", "2232.243652 9.683521 7548.317383", "-71.999977 0.000000 0.000000");

SpawnObject("ExitSign", "1617.998535 15.823222 8372.415039", "98.999962 0.000000 -0.000000");
SpawnObject("ExitSign", "765.517761 15.385264 9231.028320", "-44.999992 0.000000 0.000000");


SpawnObject("MCK_KeyGrinder", "5355.3 73.04 6899.6", "90 0 0");
SpawnObject("MCK_KeyGrinder", "3547.5 18.4 8403.0", "90 0 0");


SpawnObject("Land_RoadCone", "3571.738037 18.026464 8401.569336", "-18.000000 0.000000 0.000000");
SpawnObject("Land_RoadCone", "3566.935303 17.986359 8400.358398", "-9.000000 0.000000 0.000000");
SpawnObject("Land_RoadCone", "3573.688232 17.825872 8395.147461", "158.545792 -0.000000 -0.000000");
SpawnObject("Land_RoadCone", "3569.169434 17.713715 8393.762695", "-18.000000 0.000000 0.000000");



}

void SpawnObject( string type, vector position, vector orientation )
{
    auto obj = GetGame().CreateObject( type, position );
    obj.SetPosition( position );
    obj.SetOrientation( orientation );
    obj.SetOrientation( obj.GetOrientation() ); //Collision fix
    obj.Update();
    obj.SetAffectPathgraph( true, false );
    if( obj.CanAffectPathgraph() ) GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( GetGame().UpdatePathgraphRegionByObject, 100, false, obj );
}