/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBSessionTokenCachingStrategy : NSObject {
	NSString* _accessTokenInformationKeyName; 
}
+(id)nullCacheInstance;
+(BOOL)isValidTokenInformation:(id)arg1;
+(id)defaultInstance;
-(id)fetchFBAccessTokenData;
-(void)clearToken;
-(void)cacheFBAccessTokenData:(id)arg1;
-(void)cacheTokenInformation:(id)arg1;
-(id)fetchTokenInformation;
-(id)initWithUserDefaultTokenInformationKeyName:(id)arg1;
-(void)dealloc;
-(id)init;
@end