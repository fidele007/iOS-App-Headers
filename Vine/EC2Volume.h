/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:34 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2Volume : NSObject {
	NSString* volumeId; 
	NSNumber* size; 
	NSString* snapshotId; 
	NSString* availabilityZone; 
	NSString* state; 
	NSDate* createTime; 
	NSMutableArray* attachments; 
	NSMutableArray* tags; 
	NSString* volumeType; 
	NSNumber* iops; 
}
@property (nonatomic,retain) NSString* volumeId; 
@property (nonatomic,retain) NSNumber* size; 
@property (nonatomic,retain) NSString* snapshotId; 
@property (nonatomic,retain) NSString* availabilityZone; 
@property (nonatomic,retain) NSString* state; 
@property (nonatomic,retain) NSDate* createTime; 
@property (nonatomic,retain) NSMutableArray* attachments; 
@property (nonatomic,retain) NSMutableArray* tags; 
@property (nonatomic,retain) NSString* volumeType; 
@property (nonatomic,retain) NSNumber* iops; 
-(void)addTag:(id)arg1;
-(void)setSnapshotId:(id)arg1;
-(void)setVolumeId:(id)arg1;
-(void)setAvailabilityZone:(id)arg1;
-(void)setVolumeType:(id)arg1;
-(void)setIops:(id)arg1;
-(void)setCreateTime:(id)arg1;
-(void)setAttachments:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setState:(id)arg1;
-(void)setSize:(id)arg1;
-(void)addAttachment:(id)arg1;
-(void)setTags:(id)arg1;
@end