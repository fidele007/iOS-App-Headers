/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:10 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBSessionManualTokenCachingStrategy : FBSessionTokenCachingStrategy {
	NSString* _accessToken; 
	NSDate* _expirationDate; 
}
@property (copy) NSString* accessToken; 				//@synthesize accessToken=_accessToken - In the implementation block
@property (copy) NSDate* expirationDate; 				//@synthesize expirationDate=_expirationDate - In the implementation block
-(void)clearToken;
-(void)cacheTokenInformation:(id)arg1;
-(id)fetchTokenInformation;
-(void)setAccessToken:(id)arg1;
-(void)dealloc;
-(void)setExpirationDate:(id)arg1;
@end