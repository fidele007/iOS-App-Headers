/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:52 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2AttachVolumeRequest : AmazonServiceRequestConfig {
	NSString* volumeId; 
	NSString* instanceId; 
	NSString* device; 
}
@property (nonatomic,retain) NSString* volumeId; 
@property (nonatomic,retain) NSString* instanceId; 
@property (nonatomic,retain) NSString* device; 
-(void)setInstanceId:(id)arg1;
-(id)initWithVolumeId:(id)arg1 andInstanceId:(id)arg2 andDevice:(id)arg3;
-(void)setVolumeId:(id)arg1;
-(void)setDevice:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end