/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:54 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBSettings : NSObject {
}
+(BOOL)limitEventAndDataUsage;
+(void)setLimitEventAndDataUsage:(BOOL)arg1;
+(void)publishInstall:(id)arg1;
+(id)loggingBehavior;
+(id)defaultAppID;
+(id)defaultDisplayName;
+(float)defaultJPEGCompressionQuality;
+(id)defaultUrlSchemeSuffix;
+(void)autoPublishInstall:(id)arg1;
+(void)setDefaultAppID:(id)arg1;
+(void)setDefaultUrlSchemeSuffix:(id)arg1;
+(BOOL)shouldAutoPublishInstall;
+(void)autoPublishInstallImpl:(id)arg1;
+(void)publishInstall:(id)arg1 withHandler:(id)arg2 isAutoPublish:(BOOL)arg3;
+(void)publishInstall:(id)arg1 withHandler:(id)arg2;
+(void)setShouldAutoPublishInstall:(BOOL)arg1;
+(id)sdkVersion;
+(void)setLoggingBehavior:(id)arg1;
+(void)setClientToken:(id)arg1;
+(void)setDefaultDisplayName:(id)arg1;
+(void)setResourceBundleName:(id)arg1;
+(id)resourceBundleName;
+(void)setFacebookDomainPart:(id)arg1;
+(id)facebookDomainPart;
+(id)defaultURLSchemeWithAppID:(id)arg1 urlSchemeSuffix:(id)arg2;
+(void)setdefaultJPEGCompressionQuality:(float)arg1;
+(void)enableBetaFeatures:(unsigned)arg1;
+(void)enableBetaFeature:(unsigned)arg1;
+(void)disableBetaFeature:(unsigned)arg1;
+(BOOL)isBetaFeatureEnabled:(unsigned)arg1;
+(id)clientToken;
+(id)appVersion;
+(void)setAppVersion:(id)arg1;
@end