/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:54 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SecurityTokenServiceGetSessionTokenRequest : AmazonServiceRequestConfig {
	NSNumber* durationSeconds; 
	NSString* serialNumber; 
	NSString* tokenCode; 
}
@property (nonatomic,retain) NSNumber* durationSeconds; 
@property (nonatomic,retain) NSString* serialNumber; 
@property (nonatomic,retain) NSString* tokenCode; 
-(void)setDurationSeconds:(id)arg1;
-(void)setTokenCode:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setSerialNumber:(id)arg1;
@end