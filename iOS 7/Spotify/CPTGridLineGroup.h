/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:14 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTGridLineGroup : CPTLayer {
	CPTPlotArea* plotArea; 
	BOOL major; 
}
@property (assign,nonatomic) CPTPlotArea* plotArea; 
@property (assign,nonatomic) BOOL major; 
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setPlotArea:(id)arg1;
-(void)setMajor:(BOOL)arg1;
@end