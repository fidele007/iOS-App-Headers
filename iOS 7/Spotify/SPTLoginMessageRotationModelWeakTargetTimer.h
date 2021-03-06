/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:13 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTLoginMessageRotationModelWeakTargetTimer : NSObject {
	id _target; 
	SEL _action; 
	NSTimer* _timer; 
}
@property (nonatomic,copy) id target; 				//@synthesize target=_target - In the implementation block
@property (nonatomic,copy) SEL action; 				//@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSTimer* timer; 				//@synthesize timer=_timer - In the implementation block
-(id)initWithInterval:(double)arg1 target:(id)arg2 action:(SEL)arg3 repeats:(BOOL)arg4;
-(void)invalidate;
-(void)timerFired:(id)arg1;
-(void).cxx_destruct;
@end