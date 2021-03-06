/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:30 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBSessionAppEventsState : NSObject {
	BOOL requestInFlight; 
	NSMutableArray* _accumulatedEvents; 
	NSMutableArray* _inFlightEvents; 
	int numSkippedEventsDueToFullBuffer; 
}
@property (retain) NSMutableArray* accumulatedEvents; 				//@synthesize accumulatedEvents=_accumulatedEvents - In the implementation block
@property (retain) NSMutableArray* inFlightEvents; 				//@synthesize inFlightEvents=_inFlightEvents - In the implementation block
@property (assign) int numSkippedEventsDueToFullBuffer; 
@property (assign) BOOL requestInFlight; 
-(void)setAccumulatedEvents:(id)arg1;
-(void)setInFlightEvents:(id)arg1;
-(void)setNumSkippedEventsDueToFullBuffer:(int)arg1;
-(void)addEvent:(id)arg1 isImplicit:(BOOL)arg2;
-(unsigned)getAccumulatedEventCount;
-(void)clearInFlightAndStats;
-(id)jsonEncodeInFlightEvents:(BOOL)arg1;
-(void)setRequestInFlight:(BOOL)arg1;
-(void)dealloc;
-(id)init;
@end