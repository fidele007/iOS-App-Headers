/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:23 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CloudWatchStatisticSet : NSObject {
	NSNumber* sampleCount; 
	NSNumber* sum; 
	NSNumber* minimum; 
	NSNumber* maximum; 
}
@property (nonatomic,retain) NSNumber* sampleCount; 
@property (nonatomic,retain) NSNumber* sum; 
@property (nonatomic,retain) NSNumber* minimum; 
@property (nonatomic,retain) NSNumber* maximum; 
-(void)setSum:(id)arg1;
-(void)setMinimum:(id)arg1;
-(void)setMaximum:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setSampleCount:(id)arg1;
@end