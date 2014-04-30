/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:40 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface StatsController : NSObject {
	NSTimer* gatherTimer; 
	struct StatsCB cpp; 
	NSMutableArray* _statsCallbacks; 
	NSMutableArray* _stateCallbacks; 
}
+(void)reportState:(r*)arg1 forName:(r*)arg2;
+(id)sharedStats;
+(void)reportValue:(float)arg1 forStats:(r*)arg2;
-(void)addStatsDelegate:(id)arg1;
-(void)removeStatsDelegate:(id)arg1;
-(void)addStateDelegate:(id)arg1;
-(void)removeStateDelegate:(id)arg1;
-(void)statsNamed:(id)arg1 changedValue:(float)arg2;
-(void)stateNamed:(id)arg1 changedState:(id)arg2;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void)stop;
-(void).cxx_destruct;
@end