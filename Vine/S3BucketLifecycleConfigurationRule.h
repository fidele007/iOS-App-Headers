/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:12 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3BucketLifecycleConfigurationRule : NSObject {
	NSString* ruleId; 
	NSString* status; 
	NSString* prefix; 
	int expirationInDays; 
	NSDate* expirationDate; 
	NSArray* transitions; 
	NSString* _ruleId; 
	NSString* _status; 
	NSString* _prefix; 
	NSDate* _expirationDate; 
	NSArray* _transitions; 
}
@property (nonatomic,retain) NSString* ruleId; 				//@synthesize ruleId=_ruleId - In the implementation block
@property (nonatomic,retain) NSString* status; 				//@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString* prefix; 				//@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) int expirationInDays; 
@property (nonatomic,retain) NSDate* expirationDate; 				//@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSArray* transitions; 				//@synthesize transitions=_transitions - In the implementation block
-(id)toXml;
-(id)initWithId:(id)arg1 andPrefix:(id)arg2 andExpirationDate:(id)arg3 andStatus:(id)arg4;
-(void)setRuleId:(id)arg1;
-(void)setExpirationInDays:(int)arg1;
-(id)initWithId:(id)arg1 andPrefix:(id)arg2 andStatus:(id)arg3;
-(id)initWithId:(id)arg1 andPrefix:(id)arg2 andExpirationInDays:(int)arg3 andStatus:(id)arg4;
-(void)setTransitions:(id)arg1;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setStatus:(id)arg1;
-(void)setExpirationDate:(id)arg1;
-(void)setPrefix:(id)arg1;
@end