/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:38 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SQSSendMessageBatchRequestEntry : AmazonServiceRequestConfig {
	NSString* idValue; 
	NSString* messageBody; 
	NSNumber* delaySeconds; 
}
@property (nonatomic,retain) NSString* idValue; 
@property (nonatomic,retain) NSString* messageBody; 
@property (nonatomic,retain) NSNumber* delaySeconds; 
-(id)initWithIdValue:(id)arg1 andMessageBody:(id)arg2;
-(void)setDelaySeconds:(id)arg1;
-(void)setIdValue:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setMessageBody:(id)arg1;
@end