/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:40 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGQuadtreeClusterQuery : NSObject {
	IGQuadtree* _quadtree; 
	NSMutableArray* _clusters; 
	IGQuadtreeRegion* _region; 
}
@property (nonatomic,copy) NSMutableArray* clusters; 				//@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,copy) IGQuadtreeRegion* region; 				//@synthesize region=_region - In the implementation block
-(id)initWithQuadtree:(id)arg1;
-(id)getNamedClusters;
-(id)getClustersForRegion:(id)arg1 maxDistance:(float)arg2 mapView:(id)arg3 existingClusters:(id)arg4;
-(id)initWithQuadtreePoints:(id)arg1;
-(void).cxx_destruct;
@end