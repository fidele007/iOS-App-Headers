/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:22 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2DescribeInstancesResponse : EC2Response {
	NSMutableArray* reservations; 
}
@property (nonatomic,retain) NSMutableArray* reservations; 
-(id)reservationsObjectAtIndex:(int)arg1;
-(void)setReservations:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setException:(id)arg1;
@end