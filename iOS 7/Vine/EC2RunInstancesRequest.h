/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:24 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2RunInstancesRequest : AmazonServiceRequestConfig {
	NSString* imageId; 
	NSNumber* minCount; 
	NSNumber* maxCount; 
	NSString* keyName; 
	NSMutableArray* securityGroups; 
	NSMutableArray* securityGroupIds; 
	NSString* userData; 
	NSString* addressingType; 
	NSString* instanceType; 
	EC2Placement* placement; 
	NSString* kernelId; 
	NSString* ramdiskId; 
	NSMutableArray* blockDeviceMappings; 
	_Bool monitoring; 
	_Bool monitoringIsSet; 
	NSString* subnetId; 
	_Bool disableApiTermination; 
	_Bool disableApiTerminationIsSet; 
	NSString* instanceInitiatedShutdownBehavior; 
	EC2InstanceLicenseSpecification* license; 
	NSString* privateIpAddress; 
	NSString* clientToken; 
	NSString* additionalInfo; 
	NSMutableArray* networkInterfaces; 
	EC2IamInstanceProfileSpecification* iamInstanceProfile; 
	_Bool ebsOptimized; 
	_Bool ebsOptimizedIsSet; 
}
@property (nonatomic,retain) NSString* imageId; 
@property (nonatomic,retain) NSNumber* minCount; 
@property (nonatomic,retain) NSNumber* maxCount; 
@property (nonatomic,retain) NSString* keyName; 
@property (nonatomic,retain) NSMutableArray* securityGroups; 
@property (nonatomic,retain) NSMutableArray* securityGroupIds; 
@property (nonatomic,retain) NSString* userData; 
@property (nonatomic,retain) NSString* addressingType; 
@property (nonatomic,retain) NSString* instanceType; 
@property (nonatomic,retain) EC2Placement* placement; 
@property (nonatomic,retain) NSString* kernelId; 
@property (nonatomic,retain) NSString* ramdiskId; 
@property (nonatomic,retain) NSMutableArray* blockDeviceMappings; 
@property (assign,nonatomic) _Bool monitoring; 
@property (nonatomic,copy) _Bool monitoringIsSet; 
@property (nonatomic,retain) NSString* subnetId; 
@property (assign,nonatomic) _Bool disableApiTermination; 
@property (nonatomic,copy) _Bool disableApiTerminationIsSet; 
@property (nonatomic,retain) NSString* instanceInitiatedShutdownBehavior; 
@property (nonatomic,retain) EC2InstanceLicenseSpecification* license; 
@property (nonatomic,retain) NSString* privateIpAddress; 
@property (nonatomic,retain) NSString* clientToken; 
@property (nonatomic,retain) NSString* additionalInfo; 
@property (nonatomic,retain) NSMutableArray* networkInterfaces; 
@property (nonatomic,retain) EC2IamInstanceProfileSpecification* iamInstanceProfile; 
@property (assign,nonatomic) _Bool ebsOptimized; 
@property (nonatomic,copy) _Bool ebsOptimizedIsSet; 
-(void)setKeyName:(id)arg1;
-(void)addSecurityGroup:(id)arg1;
-(void)addBlockDeviceMapping:(id)arg1;
-(void)setSecurityGroups:(id)arg1;
-(void)setKernelId:(id)arg1;
-(void)setRamdiskId:(id)arg1;
-(void)setBlockDeviceMappings:(id)arg1;
-(void)setIamInstanceProfile:(id)arg1;
-(void)setPrivateIpAddress:(id)arg1;
-(void)setClientToken:(id)arg1;
-(void)addNetworkInterface:(id)arg1;
-(void)setEbsOptimized:(_Bool)arg1;
-(void)setPlacement:(id)arg1;
-(void)setMonitoring:(_Bool)arg1;
-(void)setSubnetId:(id)arg1;
-(void)setLicense:(id)arg1;
-(void)setNetworkInterfaces:(id)arg1;
-(void)setDisableApiTermination:(_Bool)arg1;
-(void)setInstanceInitiatedShutdownBehavior:(id)arg1;
-(void)setAddressingType:(id)arg1;
-(id)initWithImageId:(id)arg1 andMinCount:(id)arg2 andMaxCount:(id)arg3;
-(void)addSecurityGroupId:(id)arg1;
-(void)setSecurityGroupIds:(id)arg1;
-(void)setMaxCount:(id)arg1;
-(void)setMinCount:(id)arg1;
-(void)setImageId:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setUserData:(id)arg1;
-(void)setInstanceType:(id)arg1;
-(void)setAdditionalInfo:(id)arg1;
@end