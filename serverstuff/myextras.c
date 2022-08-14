void AddMyObjects()
{ 
 //SpawnObject("fods_canister_red", "3459.7 69.84 4510.86", "90 0 0");  need fodsitems addon
// SpawnObject("fods_canister_red", "7607.7 24.32 4846.86", "90 0 0"); 
// SpawnObject("fods_canister_red", "3553.3 27.7 8423.7", "90 0 0"); 
// SpawnObject("MCK_KeyGrinder", "3420.2 42.68 4507.8", "90 0 0");    needs muchcarkey
 //SpawnObject("MCK_KeyGrinder", "5355.3 73.04 6899.6", "90 0 0");
 //SpawnObject("MCK_KeyGrinder", "3547.5 18.4 8403.0", "90 0 0");
// SpawnObject("FBF_FireplaceIgnited", "3447.66 40.5705 4500.01", "90 0 0");   needs foreverfire thingy
// SpawnObject("FBF_FireplaceIgnited", "3577.5 18.978 8428.54", "90 0 0");    
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