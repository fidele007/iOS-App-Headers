/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:41 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface TestFlight : NSObject {
}
+(void)addCustomEnvironmentInformation:(id)arg1 forKey:(id)arg2;
+(void)_automaticStartSession;
+(void)_automaticEndSession;
+(void)_startSession:(BOOL)arg1;
+(void)takeOff:(id)arg1;
+(void)manuallyStartSession;
+(void)manuallyEndSession;
+(void)passCheckpoint:(id)arg1;
+(void)submitFeedback:(id)arg1;
+(void)_endSession:(BOOL)arg1;
+(void)flush;
+(void)initialize;
+(void)setOptions:(id)arg1;
+(void)setDeviceIdentifier:(id)arg1;
@end