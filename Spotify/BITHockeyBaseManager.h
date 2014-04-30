/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:40 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITHockeyBaseManager : NSObject {
	UINavigationController* _navController; 
	NSDateFormatter* _rfc3339Formatter; 
	BOOL _isAppStoreEnvironment; 
	NSString* _serverURL; 
	int _barStyle; 
	UIColor* _navigationBarTintColor; 
	int _modalPresentationStyle; 
	NSString* _appIdentifier; 
}
@property (nonatomic,copy) NSString* serverURL; 				//@synthesize serverURL=_serverURL - In the implementation block
@property (assign,nonatomic) int barStyle; 				//@synthesize barStyle=_barStyle - In the implementation block
@property (nonatomic,retain) UIColor* navigationBarTintColor; 				//@synthesize navigationBarTintColor=_navigationBarTintColor - In the implementation block
@property (assign,nonatomic) int modalPresentationStyle; 				//@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (nonatomic,retain) NSString* appIdentifier; 				//@synthesize appIdentifier=_appIdentifier - In the implementation block
-(id)parseRFC3339Date:(id)arg1;
-(BOOL)isAppStoreEnvironment;
-(id)executableUUID;
-(id)stringValueFromKeychainForKey:(id)arg1;
-(BOOL)isPreiOS7Environment;
-(void)showView:(id)arg1;
-(id)findVisibleWindow;
-(id)encodedAppIdentifier;
-(id)getDevicePlatform;
-(BOOL)addStringValueToKeychain:(id)arg1 forKey:(id)arg2;
-(BOOL)removeKeyFromKeychain:(id)arg1;
-(id)customNavigationControllerWithRootViewController:(id)arg1 presentationStyle:(int)arg2;
-(id)initWithAppIdentifier:(id)arg1 isAppStoreEnvironment:(BOOL)arg2;
-(BOOL)addStringValueToKeychainForThisDeviceOnly:(id)arg1 forKey:(id)arg2;
-(void)setAppIdentifier:(id)arg1;
-(id)init;
-(void)setBarStyle:(int)arg1;
-(void)setNavigationBarTintColor:(id)arg1;
-(void)setModalPresentationStyle:(int)arg1;
-(void)setServerURL:(id)arg1;
-(void)startManager;
-(void)reportError:(id)arg1;
-(void).cxx_destruct;
@end