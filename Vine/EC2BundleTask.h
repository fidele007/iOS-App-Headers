/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:37 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2BundleTask : NSObject {
	NSString* instanceId; 
	NSString* bundleId; 
	NSString* state; 
	NSDate* startTime; 
	NSDate* updateTime; 
	EC2Storage* storage; 
	NSString* progress; 
	EC2BundleTaskError* bundleTaskError; 
}
@property (nonatomic,retain) NSString* instanceId; 
@property (nonatomic,retain) NSString* bundleId; 
@property (nonatomic,retain) NSString* state; 
@property (nonatomic,retain) NSDate* startTime; 
@property (nonatomic,retain) NSDate* updateTime; 
@property (nonatomic,retain) EC2Storage* storage; 
@property (nonatomic,retain) NSString* progress; 
@property (nonatomic,retain) EC2BundleTaskError* bundleTaskError; 
-(void)setInstanceId:(id)arg1;
-(void)setStorage:(id)arg1;
-(void)setBundleTaskError:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setStartTime:(id)arg1;
-(void)setState:(id)arg1;
-(void)setProgress:(id)arg1;
-(void)setUpdateTime:(id)arg1;
-(void)setBundleId:(id)arg1;
@end