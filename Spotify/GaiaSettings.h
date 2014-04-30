/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:12 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTGaiaDeviceStateManagerObserver.h>

@interface GaiaSettings : NSObject <SPTGaiaDeviceStateManagerObserver> {
	BOOL _gaiaActive; 
	SessionController* _sessionController; 
	SPTGaiaDeviceManager* _deviceManager; 
}
@property (assign,getter=isGaiaActive,nonatomic) BOOL gaiaActive; 				//@synthesize gaiaActive=_gaiaActive - In the implementation block
@property (nonatomic,retain) SessionController* sessionController; 				//@synthesize sessionController=_sessionController - In the implementation block
@property (nonatomic,retain) SPTGaiaDeviceManager* deviceManager; 				//@synthesize deviceManager=_deviceManager - In the implementation block
+(void)setSharedSettings:(id)arg1;
+(id)sharedSettings;
-(void)setSessionController:(id)arg1;
-(BOOL)isGaiaProtocolEnabled;
-(id)initWithSessionController:(id)arg1 gaiaDeviceManager:(id)arg2;
-(void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
-(BOOL)isGaiaAllowed;
-(BOOL)shouldShowGaiaUI;
-(void)setGaiaActive:(BOOL)arg1;
-(int)rawGaiaFeatureFlagValue;
-(id)userKeyForString:(id)arg1;
-(void)dealloc;
-(void)setDeviceManager:(id)arg1;
-(void).cxx_destruct;
@end