#pragma once


 
namespace SDK
{





enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4
};









struct FElementID
{
	int                                                IDValue;                                                  
};



struct FVertexInstanceID : public FElementID
{

};



struct FMeshTriangle
{
	struct FVertexInstanceID                           VertexInstanceID0;                                        
	struct FVertexInstanceID                           VertexInstanceID1;                                        
	struct FVertexInstanceID                           VertexInstanceID2;                                        
};



struct FPolygonID : public FElementID
{

};



struct FPolygonGroupID : public FElementID
{

};



struct FEdgeID : public FElementID
{

};



struct FVertexID : public FElementID
{

};

}

