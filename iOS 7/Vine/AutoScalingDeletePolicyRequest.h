/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:31 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AutoScalingDeletePolicyRequest : AmazonServiceRequestConfig {
	NSString* autoScalingGroupName; 
	NSString* policyName; 
}
@property (nonatomic,retain) NSString* autoScalingGroupName; 
@property (nonatomic,retain) NSString* policyName; 
-(void)setAutoScalingGroupName:(id)arg1;
-(void)setPolicyName:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end