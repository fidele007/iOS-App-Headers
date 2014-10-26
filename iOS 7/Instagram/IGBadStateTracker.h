/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:19 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGBadStateTracker : NSObject {
	BOOL _tracking; 
	BOOL _backgroundedWhileTracking; 
}
@property (assign) BOOL tracking; 				//@synthesize tracking=_tracking - In the implementation block
@property (assign) BOOL backgroundedWhileTracking; 				//@synthesize backgroundedWhileTracking=_backgroundedWhileTracking - In the implementation block
+(void)initialize;
+(id)sharedTracker;
-(void)appBecameActive;
-(void)appBackgrounded;
-(void)setBackgroundedWhileTracking:(BOOL)arg1;
-(void)beginTracking;
-(void)dealloc;
-(id)init;
-(void)setTracking:(BOOL)arg1;
-(void)endTracking;
@end