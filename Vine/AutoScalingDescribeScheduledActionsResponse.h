/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:30 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AutoScalingDescribeScheduledActionsResponse : AutoScalingResponse {
	NSMutableArray* scheduledUpdateGroupActions; 
	NSString* nextToken; 
}
@property (nonatomic,retain) NSMutableArray* scheduledUpdateGroupActions; 
@property (nonatomic,retain) NSString* nextToken; 
-(void)setNextToken:(id)arg1;
-(id)scheduledUpdateGroupActionsObjectAtIndex:(int)arg1;
-(void)setScheduledUpdateGroupActions:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setException:(id)arg1;
@end