/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:26 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSArray* abSources; 
@property (nonatomic,copy) NSNumber* allowUserGeneratedContent; 
@property (nonatomic,copy) NSString* anchor; 
@property (assign,nonatomic) BOOL censorSpeech; 
@property (nonatomic,copy) NSString* countryCode; 
@property (nonatomic,copy) NSNumber* debugFlags; 
@property (nonatomic,copy) NSArray* deviceCapabilities; 
@property (nonatomic,copy) NSString* deviceVersion; 
@property (nonatomic,copy) NSString* firstName; 
@property (assign,nonatomic) BOOL handsFree; 
@property (nonatomic,copy) NSString* lastName; 
@property (nonatomic,copy) NSArray* meCards; 
@property (nonatomic,copy) NSString* osVersion; 
@property (nonatomic,copy) NSArray* parentalRestrictions; 
@property (nonatomic,copy) NSString* region; 
@property (nonatomic,copy) NSNumber* storefront; 
@property (nonatomic,copy) NSString* temperatureUnit; 
@property (nonatomic,copy) NSString* timeZoneId; 
@property (nonatomic,retain) SAVoice* ttsVoice; 
@property (nonatomic,copy) NSNumber* twentyFourHourTimeDisplay; 
@property (nonatomic,copy) NSNumber* uiScale; 
@property (assign,nonatomic) BOOL voiceOver; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)setAssistantData;
+(id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setAnchor:(id)arg1;
-(void)setCountryCode:(id)arg1;
-(void)setOsVersion:(id)arg1;
-(void)setDeviceVersion:(id)arg1;
-(void)setRegion:(id)arg1;
-(void)setFirstName:(id)arg1;
-(void)setLastName:(id)arg1;
-(id)encodedClassName;
-(void)setTimeZoneId:(id)arg1;
-(void)setCensorSpeech:(BOOL)arg1;
-(void)setHandsFree:(BOOL)arg1;
-(void)setAbSources:(id)arg1;
-(void)setAllowUserGeneratedContent:(id)arg1;
-(void)setDebugFlags:(id)arg1;
-(void)setDeviceCapabilities:(id)arg1;
-(void)setMeCards:(id)arg1;
-(void)setParentalRestrictions:(id)arg1;
-(void)setStorefront:(id)arg1;
-(void)setTemperatureUnit:(id)arg1;
-(void)setTtsVoice:(id)arg1;
-(void)setTwentyFourHourTimeDisplay:(id)arg1;
-(void)setUiScale:(id)arg1;
-(void)setVoiceOver:(BOOL)arg1;
@end