/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:20 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNLoaderView : UIActivityIndicatorView {
	float _offset; 
	NSMutableArray* _circles; 
	NSTimer* _drawTimer; 
	CADisplayLink* _displayLink; 
	CGPoint _frameOffset; 
}
@property (assign,nonatomic) CGPoint frameOffset; 				//@synthesize frameOffset=_frameOffset - In the implementation block
-(void)setFrameOffset:(CGPoint)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end