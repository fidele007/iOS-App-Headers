/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:12 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface _SRRunLoopThread : NSThread {
	struct dispatch_group_s* _waitGroup; 
	NSRunLoop* _runLoop; 
}
@property (nonatomic,copy) NSRunLoop* runLoop; 				//@synthesize runLoop=_runLoop - In the implementation block
-(void)dealloc;
-(id)init;
-(void)main;
-(void).cxx_destruct;
@end