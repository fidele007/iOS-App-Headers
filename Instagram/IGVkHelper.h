/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:12 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGVkAuthDelegate.h>
#import <IGServiceHelperProtocol.h>

@interface IGVkHelper : NSObject <IGVkAuthDelegate, IGServiceHelperProtocol> {
	NSString* _accessToken; 
}
@property (nonatomic,copy) NSString* accessToken; 				//@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString* serviceName; 
@property (nonatomic,copy) NSString* shortServiceName; 
+(id)sharedHelper;
-(id)sharingInfo;
-(void)logoutAndUnlink;
-(BOOL)isConfigurable;
-(BOOL)hasAdvancedOptions;
-(BOOL)isAvailableInCurrentLocale;
-(BOOL)supportsMediaType:(int)arg1;
-(BOOL)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(BOOL)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(BOOL)hasEverBeenConfigured;
-(id)callbackURLString;
-(id)authURLString;
-(id)accessTokenKey;
-(void)setAccessToken:(id)arg1 save:(BOOL)arg2;
-(void)vkAuthControllerLoginFailed:(id)arg1;
-(void)vkAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2;
-(void)setAccessToken:(id)arg1;
-(void)logout;
-(id)clientID;
-(BOOL)isConfigured;
-(void).cxx_destruct;
@end