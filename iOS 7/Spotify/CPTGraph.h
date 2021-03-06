/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:08 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTGraph : CPTBorderedLayer {
	CPTGraphHostingView* hostingView; 
	CPTPlotAreaFrame* plotAreaFrame; 
	NSMutableArray* plots; 
	NSMutableArray* plotSpaces; 
	NSString* title; 
	CPTTextStyle* titleTextStyle; 
	int titlePlotAreaFrameAnchor; 
	CGPoint titleDisplacement; 
	CPTLayerAnnotation* titleAnnotation; 
	CPTLegend* legend; 
	CPTLayerAnnotation* legendAnnotation; 
	int legendAnchor; 
	CGPoint legendDisplacement; 
}
@property (assign,nonatomic) CPTGraphHostingView* hostingView; 
@property (nonatomic,copy) NSString* title; 
@property (nonatomic,copy) CPTTextStyle* titleTextStyle; 
@property (assign,nonatomic) CGPoint titleDisplacement; 
@property (assign,nonatomic) int titlePlotAreaFrameAnchor; 
@property (nonatomic,@dynamic,retain) CPTAxisSet* axisSet; 
@property (nonatomic,retain) CPTPlotAreaFrame* plotAreaFrame; 
@property (nonatomic,@dynamic,copy) CPTPlotSpace* defaultPlotSpace; 
@property (nonatomic,@dynamic,retain) NSArray* topDownLayerOrder; 
@property (nonatomic,@dynamic,retain) CPTLegend* legend; 
@property (assign,nonatomic) int legendAnchor; 
@property (assign,nonatomic) CGPoint legendDisplacement; 
@property (nonatomic,retain) NSMutableArray* plots; 
@property (nonatomic,retain) NSMutableArray* plotSpaces; 
@property (nonatomic,retain) CPTLayerAnnotation* titleAnnotation; 
@property (nonatomic,retain) CPTLayerAnnotation* legendAnnotation; 
+(BOOL)needsDisplayForKey:(id)arg1;
-(void)addPlot:(id)arg1;
-(id)plotWithIdentifier:(id)arg1;
-(BOOL)pointingDeviceDownEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(BOOL)pointingDeviceUpEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(BOOL)pointingDeviceDraggedEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(BOOL)pointingDeviceCancelledEvent:(struct UIEvent*)arg1;
-(void)setAxisSet:(id)arg1;
-(void)setPlotAreaFrame:(id)arg1;
-(id)newPlotSpace;
-(void)addPlotSpace:(id)arg1;
-(id)newAxisSet;
-(void)layoutAndRenderInContext:(struct CGContext*)arg1;
-(void)addPlot:(id)arg1 toPlotSpace:(id)arg2;
-(void)removePlot:(id)arg1;
-(void)insertPlot:(id)arg1 atIndex:(unsigned)arg2 intoPlotSpace:(id)arg3;
-(void)insertPlot:(id)arg1 atIndex:(unsigned)arg2;
-(void)plotSpaceMappingDidChange:(id)arg1;
-(CGPoint)contentAnchorForLegend;
-(void)setLegendAnnotation:(id)arg1;
-(void)setTopDownLayerOrder:(id)arg1;
-(id)allPlots;
-(id)plotAtIndex:(unsigned)arg1;
-(void)removePlotWithIdentifier:(id)arg1;
-(id)allPlotSpaces;
-(id)plotSpaceAtIndex:(unsigned)arg1;
-(id)plotSpaceWithIdentifier:(id)arg1;
-(void)removePlotSpace:(id)arg1;
-(void)applyTheme:(id)arg1;
-(void)setLegendAnchor:(int)arg1;
-(void)setLegendDisplacement:(CGPoint)arg1;
-(void)setTitleDisplacement:(CGPoint)arg1;
-(void)setTitlePlotAreaFrameAnchor:(int)arg1;
-(void)setHostingView:(id)arg1;
-(void)setPlots:(id)arg1;
-(void)setPlotSpaces:(id)arg1;
-(void)reloadDataIfNeeded;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(void)reloadData;
-(void)setTitle:(id)arg1;
-(void)setPaddingTop:(float)arg1;
-(void)setPaddingLeft:(float)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setPaddingBottom:(float)arg1;
-(void)setPaddingRight:(float)arg1;
-(void)setLegend:(id)arg1;
-(void)setTitleTextStyle:(id)arg1;
-(void)setTitleAnnotation:(id)arg1;
@end