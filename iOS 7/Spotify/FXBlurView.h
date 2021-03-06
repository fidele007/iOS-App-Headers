/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:28 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FXBlurView : UIView {
	BOOL _blurEnabled; 
	BOOL _dynamic; 
	BOOL _iterationsSet; 
	BOOL _blurRadiusSet; 
	BOOL _dynamicSet; 
	BOOL _blurEnabledSet; 
	unsigned _iterations; 
	float _blurRadius; 
	UIColor* _tintColor; 
	UIView* _underlyingView; 
	NSDate* _lastUpdate; 
	double _updateInterval; 
}
@property (assign,getter=isBlurEnabled,nonatomic) BOOL blurEnabled; 				//@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic; 				//@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) unsigned iterations; 				//@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double updateInterval; 				//@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) float blurRadius; 				//@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,retain) UIColor* tintColor; 				//@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic,__weak) UIView* underlyingView; 				//@synthesize underlyingView=_underlyingView - In the implementation block
@property (assign,nonatomic) BOOL iterationsSet; 				//@synthesize iterationsSet=_iterationsSet - In the implementation block
@property (assign,nonatomic) BOOL blurRadiusSet; 				//@synthesize blurRadiusSet=_blurRadiusSet - In the implementation block
@property (assign,nonatomic) BOOL dynamicSet; 				//@synthesize dynamicSet=_dynamicSet - In the implementation block
@property (assign,nonatomic) BOOL blurEnabledSet; 				//@synthesize blurEnabledSet=_blurEnabledSet - In the implementation block
@property (nonatomic,retain) NSDate* lastUpdate; 				//@synthesize lastUpdate=_lastUpdate - In the implementation block
+(void)setBlurEnabled:(BOOL)arg1;
+(void)setUpdatesEnabled;
+(void)setUpdatesDisabled;
-(void)setUp;
-(BOOL)shouldUpdate;
-(void)updateAsynchronously:(BOOL)arg1 completion:(id)arg2;
-(void)setBlurEnabled:(BOOL)arg1;
-(void)setLastUpdate:(id)arg1;
-(id)prepareUnderlyingViewForSnapshot;
-(void)restoreSuperviewAfterSnapshot:(id)arg1;
-(id)snapshotOfUnderlyingView;
-(id)blurredSnapshot:(id)arg1;
-(void)setLayerContents:(id)arg1;
-(void)setUnderlyingView:(id)arg1;
-(void)setIterationsSet:(BOOL)arg1;
-(void)setBlurRadiusSet:(BOOL)arg1;
-(void)setDynamicSet:(BOOL)arg1;
-(void)setBlurEnabledSet:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)initWithCoder:(id)arg1;
-(void)didMoveToWindow;
-(void)setBlurRadius:(float)arg1;
-(void)setTintColor:(id)arg1;
-(void)didMoveToSuperview;
-(void)setIterations:(unsigned)arg1;
-(void)setDynamic:(BOOL)arg1;
-(void)displayLayer:(id)arg1;
-(void)setUpdateInterval:(double)arg1;
-(void)schedule;
-(void).cxx_destruct;
@end