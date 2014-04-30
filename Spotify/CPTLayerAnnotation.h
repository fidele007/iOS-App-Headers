/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:52 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTLayerAnnotation : CPTAnnotation {
	CPTLayer* anchorLayer; 
	CPTConstraints* xConstraints; 
	CPTConstraints* yConstraints; 
	int rectAnchor; 
}
@property (nonatomic,copy) CPTLayer* anchorLayer; 
@property (assign,nonatomic) int rectAnchor; 
@property (nonatomic,retain) CPTConstraints* xConstraints; 
@property (nonatomic,retain) CPTConstraints* yConstraints; 
-(id)initWithAnchorLayer:(id)arg1;
-(void)setRectAnchor:(int)arg1;
-(void)positionContentLayer;
-(void)setConstraints;
-(void)setXConstraints:(id)arg1;
-(void)setYConstraints:(id)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
@end