/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:11 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTXYAxis : CPTAxis {
	=exponentblengthbisNegativebisCompactbreservedbmantissaS[=8411188] orthogonalCoordinateDecimal; 
	CPTConstraints* axisConstraints; 
}
@property (assign,nonatomic) =bbbbbS[=8411188] orthogonalCoordinateDecimal; 
@property (nonatomic,retain) CPTConstraints* axisConstraints; 
-(void)setOrthogonalCoordinateDecimal:(=bbbbbS[=8411188])arg1;
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(CGPoint)viewPointForCoordinateDecimalNumber:(=bbbbbS[=8411188])arg1;
-(=bbbbbS[=8411188])defaultTitleLocation;
-(void)drawGridLinesInContext:(struct CGContext*)arg1 isMajor:(BOOL)arg2;
-(void)drawBackgroundBandsInContext:(struct CGContext*)arg1;
-(void)drawBackgroundLimitsInContext:(struct CGContext*)arg1;
-(CGPoint)viewPointForOrthogonalCoordinateDecimal:(=bbbbbS[=8411188])arg1 axisCoordinateDecimal:(=bbbbbS[=8411188])arg2;
-(void)orthogonalCoordinateViewLowerBound:(float*)arg1 upperBound:(float*)arg2;
-(void)drawTicksInContext:(struct CGContext*)arg1 atLocations:(id)arg2 withLength:(float)arg3 inRange:(id)arg4 isMajor:(BOOL)arg5;
-(void)setAxisConstraints:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)description;
-(id)initWithLayer:(id)arg1;
-(void)setCoordinate:(int)arg1;
@end