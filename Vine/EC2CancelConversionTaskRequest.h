/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:29 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2CancelConversionTaskRequest : AmazonServiceRequestConfig {
	NSString* conversionTaskId; 
	NSString* reasonMessage; 
}
@property (nonatomic,retain) NSString* conversionTaskId; 
@property (nonatomic,retain) NSString* reasonMessage; 
-(void)setReasonMessage:(id)arg1;
-(void)setConversionTaskId:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end