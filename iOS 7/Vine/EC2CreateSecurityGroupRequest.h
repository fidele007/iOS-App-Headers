/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:43 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2CreateSecurityGroupRequest : AmazonServiceRequestConfig {
	NSString* groupName; 
	NSString* descriptionValue; 
	NSString* vpcId; 
}
@property (nonatomic,retain) NSString* groupName; 
@property (nonatomic,retain) NSString* descriptionValue; 
@property (nonatomic,retain) NSString* vpcId; 
-(void)setDescriptionValue:(id)arg1;
-(id)initWithGroupName:(id)arg1 andDescriptionValue:(id)arg2;
-(void)setVpcId:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)setGroupName:(id)arg1;
@end