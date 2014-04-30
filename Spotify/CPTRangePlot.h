/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:38 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTRangePlot : CPTPlot {
	CPTLineStyle* barLineStyle; 
	float barWidth; 
	float gapHeight; 
	float gapWidth; 
	CPTFill* areaFill; 
}
@property (nonatomic,copy) CPTLineStyle* barLineStyle; 
@property (assign,nonatomic) float barWidth; 
@property (assign,nonatomic) float gapHeight; 
@property (assign,nonatomic) float gapWidth; 
@property (nonatomic,copy) CPTFill* areaFill; 
@property (nonatomic,@dynamic,copy) NSArray* xValues; 
@property (nonatomic,@dynamic,copy) NSArray* yValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* highValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* lowValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* leftValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* rightValues; 
@property (nonatomic,@dynamic,copy) NSArray* barLineStyles; 
+(BOOL)needsDisplayForKey:(id)arg1;
-(void)reloadDataInIndexRange:(struct _NSRange)arg1;
-(id)fieldIdentifiersForCoordinate:(int)arg1;
-(void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned)arg2;
-(BOOL)pointingDeviceDownEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned)arg2 inRect:(CGRect)arg3 inContext:(struct CGContext*)arg4;
-(unsigned)numberOfFields;
-(id)fieldIdentifiers;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)arg1;
-(void)calculateViewPoints:(CGPointError*)arg1 withDrawPointFlags:(BOOL*)arg2 numberOfPoints:(unsigned)arg3;
-(unsigned)extremeDrawnPointIndexForFlags:(BOOL*)arg1 numberOfPoints:(unsigned)arg2 extremeNumIsLowerBound:(BOOL)arg3;
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(void)alignViewPointsToUserSpace:(CGPointError*)arg1 withContent:(struct CGContext*)arg2 drawPointFlags:(BOOL*)arg3 numberOfPoints:(unsigned)arg4;
-(void)setAreaFill:(id)arg1;
-(void)setXValues:(id)arg1;
-(void)setYValues:(id)arg1;
-(void)setBarWidth:(float)arg1;
-(id)barLineStyleForIndex:(unsigned)arg1;
-(void)setBarLineStyles:(id)arg1;
-(void)setHighValues:(id)arg1;
-(void)setLowValues:(id)arg1;
-(void)setLeftValues:(id)arg1;
-(void)setRightValues:(id)arg1;
-(void)calculatePointsToDraw:(BOOL*)arg1 numberOfPoints:(unsigned)arg2 forPlotSpace:(id)arg3 includeVisiblePointsOnly:(BOOL)arg4;
-(void)drawRangeInContext:(struct CGContext*)arg1 lineStyle:(id)arg2 viewPoint:(CGPointError*)arg3 halfGapSize:(CGSize)arg4 halfBarWidth:(float)arg5 alignPoints:(BOOL)arg6;
-(void)setBarLineStyle:(id)arg1;
-(void)setGapHeight:(float)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setGapWidth:(float)arg1;
@end