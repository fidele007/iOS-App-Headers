/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:33 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2CreateSpotDatafeedSubscriptionResponse : EC2Response {
	EC2SpotDatafeedSubscription* spotDatafeedSubscription; 
}
@property (nonatomic,retain) EC2SpotDatafeedSubscription* spotDatafeedSubscription; 
-(void)setSpotDatafeedSubscription:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setException:(id)arg1;
@end