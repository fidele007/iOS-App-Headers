/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:35 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineVerificationSessionData : NSObject {
	NSString* __sessionId; 
	int __method; 
	NSString* __callback; 
	NSString* __normalizedPhone; 
	NSString* __countryCode; 
	NSString* __nationalSignificantNumber; 
	NSArray* __availableVerificationMethods; 
	struct {
		unsigned int method:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* sessionId; 				//@synthesize _sessionId=__sessionId - In the implementation block
@property (assign,nonatomic) int method; 				//@synthesize _method=__method - In the implementation block
@property (nonatomic,retain) NSString* callback; 				//@synthesize _callback=__callback - In the implementation block
@property (nonatomic,retain) NSString* normalizedPhone; 				//@synthesize _normalizedPhone=__normalizedPhone - In the implementation block
@property (nonatomic,retain) NSString* countryCode; 				//@synthesize _countryCode=__countryCode - In the implementation block
@property (nonatomic,retain) NSString* nationalSignificantNumber; 				//@synthesize _nationalSignificantNumber=__nationalSignificantNumber - In the implementation block
@property (nonatomic,retain) NSArray* availableVerificationMethods; 				//@synthesize _availableVerificationMethods=__availableVerificationMethods - In the implementation block
-(void)read:(id)arg1;
-(void)setNormalizedPhone:(id)arg1;
-(void)setNationalSignificantNumber:(id)arg1;
-(void)setAvailableVerificationMethods:(id)arg1;
-(void)setCallback:(id)arg1;
-(void)setCountryCode:(id)arg1;
-(void)setSessionId:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
-(void)setMethod:(int)arg1;
@end