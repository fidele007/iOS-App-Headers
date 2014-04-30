/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:45 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2ModifySnapshotAttributeRequest : AmazonServiceRequestConfig {
	NSString* snapshotId; 
	NSString* attribute; 
	NSString* operationType; 
	NSMutableArray* userIds; 
	NSMutableArray* groupNames; 
	EC2CreateVolumePermissionModifications* createVolumePermission; 
}
@property (nonatomic,retain) NSString* snapshotId; 
@property (nonatomic,retain) NSString* attribute; 
@property (nonatomic,retain) NSString* operationType; 
@property (nonatomic,retain) NSMutableArray* userIds; 
@property (nonatomic,retain) NSMutableArray* groupNames; 
@property (nonatomic,retain) EC2CreateVolumePermissionModifications* createVolumePermission; 
-(void)setSnapshotId:(id)arg1;
-(void)addGroupName:(id)arg1;
-(void)setGroupNames:(id)arg1;
-(id)initWithSnapshotId:(id)arg1 andAttribute:(id)arg2 andOperationType:(id)arg3;
-(void)addUserId:(id)arg1;
-(void)setUserIds:(id)arg1;
-(void)setCreateVolumePermission:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setAttribute:(id)arg1;
-(void)setOperationType:(id)arg1;
@end