/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:38 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGQuadtreeCluster : NSObject {
	QuadtreePoint* _cachedMaxPointThatIsNotRemoved; 
	double _minLatitude; 
	double _maxLatitude; 
	double _minLongitude; 
	double _maxLongitude; 
	BOOL _isSorted; 
	int _cachedNumberOfRemovedPoints; 
	BOOL _isNewCluster; 
	BOOL _isTightCluster; 
	NSMutableArray* _points; 
	QuadtreePoint* _maxPoint; 
	id _userInfo; 
	CGPoint _centerPoint; 
	double _maxPointValue; 
	struct {
		double latitude;
		double longitude;
	} _centerCoordinate; 
}
@property (nonatomic,copy) NSMutableArray* points; 				//@synthesize points=_points - In the implementation block
@property (nonatomic,copy) QuadtreePoint* maxPoint; 				//@synthesize maxPoint=_maxPoint - In the implementation block
@property (assign,nonatomic) struct centerCoordinate; 				//@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) CGPoint centerPoint; 				//@synthesize centerPoint=_centerPoint - In the implementation block
@property (assign,nonatomic) BOOL isNewCluster; 				//@synthesize isNewCluster=_isNewCluster - In the implementation block
@property (assign,nonatomic) BOOL isTightCluster; 				//@synthesize isTightCluster=_isTightCluster - In the implementation block
@property (nonatomic,retain) id userInfo; 				//@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) double maxPointValue; 				//@synthesize maxPointValue=_maxPointValue - In the implementation block
-(int)numPoints;
-(int)numActivePoints;
-(id)maxPointThatIsNotRemoved;
-(id)emptyCopyWithSameCenterCoordinate;
-(void)upadteAfterEdits:(id)arg1;
-(void)setIsTightCluster:(BOOL)arg1;
-(void)addPoints:(id)arg1;
-(void)setIsNewCluster:(BOOL)arg1;
-(void)setMaxPointValue:(double)arg1;
-(id)minGeoPoint;
-(id)maxGeoPoint;
-(double)boundingBoxWidthInPixels:(id)arg1;
-(struct)boundingRegion;
-(id)init;
-(void)reset;
-(void)addPoint:(id)arg1;
-(void)setUserInfo:(id)arg1;
-(void)sort;
-(void)setCenterPoint:(CGPoint)arg1;
-(void)setCenterCoordinate:(struct )arg1;
-(void).cxx_destruct;
@end