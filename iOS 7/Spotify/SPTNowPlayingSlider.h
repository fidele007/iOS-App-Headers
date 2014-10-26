/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:39 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTNowPlayingSlider : SPSliderWithLabel {
	BOOL _animating; 
	id<SPTNowPlayingSliderDataSource> _dataSource; 
	CADisplayLink* _displayLink; 
	float _uncompensatedTrackingValue; 
	NSArray* _trackingSpeeds; 
	NSArray* _trackingSpeedChangeThresholds; 
	float _trackingSpeed; 
	double _currentPosition; 
	double _currentDuration; 
	CGPoint _startTrackingPoint; 
}
@property (assign,nonatomic,__weak) id<SPTNowPlayingSliderDataSource> dataSource; 				//@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) double currentPosition; 				//@synthesize currentPosition=_currentPosition - In the implementation block
@property (assign,nonatomic) double currentDuration; 				//@synthesize currentDuration=_currentDuration - In the implementation block
@property (assign,nonatomic) BOOL animating; 				//@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) CADisplayLink* displayLink; 				//@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) float uncompensatedTrackingValue; 				//@synthesize uncompensatedTrackingValue=_uncompensatedTrackingValue - In the implementation block
@property (assign,nonatomic) CGPoint startTrackingPoint; 				//@synthesize startTrackingPoint=_startTrackingPoint - In the implementation block
@property (nonatomic,retain) NSArray* trackingSpeeds; 				//@synthesize trackingSpeeds=_trackingSpeeds - In the implementation block
@property (nonatomic,retain) NSArray* trackingSpeedChangeThresholds; 				//@synthesize trackingSpeedChangeThresholds=_trackingSpeedChangeThresholds - In the implementation block
@property (assign,nonatomic) float trackingSpeed; 				//@synthesize trackingSpeed=_trackingSpeed - In the implementation block
-(void)setTrackingSpeeds:(id)arg1;
-(void)setTrackingSpeedChangeThresholds:(id)arg1;
-(void)setTrackingSpeed:(float)arg1;
-(void)onDisplayLink:(id)arg1;
-(float)positionToValue:(double)arg1;
-(float)pointsForValue:(float)arg1;
-(void)animateFrom:(float)arg1;
-(void)resetValueTo:(float)arg1;
-(void)setStartTrackingPoint:(CGPoint)arg1;
-(void)setUncompensatedTrackingValue:(float)arg1;
-(float)trackingSpeedForDistance:(float)arg1;
-(void)setCurrentPosition:(double)arg1;
-(void)setCurrentDuration:(double)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setDataSource:(id)arg1;
-(void)didMoveToWindow;
-(void)reloadData;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2;
-(void)willMoveToWindow:(id)arg1;
-(void)setDisplayLink:(id)arg1;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(BOOL)arg1;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
-(void).cxx_destruct;
@end