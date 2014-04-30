/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:26 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface APLCompositionDebugView : UIView {
	CALayer* drawingLayer; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} duration; 
	float compositionRectWidth; 
	NSArray* compositionTracks; 
	NSArray* audioMixTracks; 
	NSArray* videoCompositionStages; 
	float scaledDurationToWidth; 
	AVPlayer* _player; 
}
@property (retain) AVPlayer* player; 				//@synthesize player=_player - In the implementation block
-(double)horizontalPositionForTime:(struct )arg1;
-(void)synchronizeToComposition:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
-(id)initWithFrame:(CGRect)arg1;
-(void)drawRect:(CGRect)arg1;
-(void)willMoveToSuperview:(id)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void).cxx_destruct;
-(void)setPlayer:(id)arg1;
@end