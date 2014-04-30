/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:24 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface _CPTConstraintsFixed : CPTConstraints {
	float offset; 
	BOOL isFixedToLower; 
}
@property (assign,nonatomic) float offset; 
@property (assign,nonatomic) BOOL isFixedToLower; 
-(id)initWithLowerOffset:(float)arg1;
-(id)initWithUpperOffset:(float)arg1;
-(float)positionForLowerBound:(float)arg1 upperBound:(float)arg2;
-(BOOL)isEqualToConstraint:(id)arg1;
-(void)setIsFixedToLower:(BOOL)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)copyWithZone:(NSZone*)arg1;
-(Class)classForCoder;
-(void)setOffset:(float)arg1;
@end