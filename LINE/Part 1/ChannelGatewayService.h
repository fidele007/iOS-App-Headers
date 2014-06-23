/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:28 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ChannelGatewayService : NSObject {
	NSMutableDictionary* channels_; 
	NSMutableSet* whitelist_; 
	NSNumber* channelLocalRevision_; 
	NSString* currentLanguage_; 
	NSDate* expiredTime_; 
	NSSet* defaultChannelIDs_; 
	struct dispatch_queue_s* syncQueue_; 
}
+(id)myhomeWebAppChannelID;
+(id)currentLocaleString;
+(id)LineAtChannelID;
+(void)deleteAllChannelsCookies;
+(id)sharedService;
-(void)getChannelInfoForChannelIDString:(id)arg1 withWillRequestBlock:(id)arg2 completeBlock:(id)arg3;
-(id)myhomeChannelID;
-(id)approvedChannels;
-(void)updateApprovedChannelsWithCompleteBlock:(id)arg1;
-(BOOL)notificationSettingsWithCompleteBlock:(id)arg1;
-(BOOL)unapprovedChannelSettingWithCompleteBlock:(id)arg1;
-(BOOL)updateNotificationSettings:(id)arg1 withCompleteBlock:(id)arg2;
-(id)cachedChannelForChannelIDString:(id)arg1;
-(BOOL)updateUnapprovedChannelSettingWithChannelSetting:(id)arg1 withCompleteBlock:(id)arg2;
-(id)channelWhiteList;
-(void)onAppWillTerminate:(id)arg1;
-(void)onAppDidEnterBackground:(id)arg1;
-(BOOL)approveChannelAndIssueTokenWithChannel:(id)arg1 withCompleteBlock:(id)arg2;
-(BOOL)issueChannelToken:(id)arg1 withCompleteBlock:(id)arg2;
-(void)getUnmanagedChannelsWithCompleteBlock:(id)arg1;
-(void)initializeCommunicationEnvironment;
-(void)addObservingEvents;
-(void)loadChannelCache;
-(void)initializeDefaultChannels;
-(void)removeObservingEvents;
-(id)timelineChannelID;
-(id)groupboardChannelID;
-(id)lineAlbumChannelID;
-(void)saveChannelCache;
-(id)cacheFileURL;
-(void)setLastSyncedChannelRevision:(long long)arg1;
-(int)errorCodeFromLineChannelServiceError:(id)arg1;
-(id)channelErrorFromError:(id)arg1;
-(id)channelFromChannelID:(id)arg1;
-(void)updateChannelFromChannelInfo:(id)arg1 toChannel:(id)arg2;
-(void)setChannel:(id)arg1 forChannelID:(id)arg2;
-(void)processChannelInfo:(id)arg1;
-(id)mutableWhitelist;
-(void)processApprovedChannels:(id)arg1;
-(id)serviceResponseWithResultProcessor:(id)arg1 completeBlock:(id)arg2;
-(void)processChannels:(id)arg1;
-(void)processWhitelistDomains:(id)arg1;
-(void)setSyncedDataExpiredTime:(long long)arg1;
-(void)setIssuedChannelTokenToChannel:(id)arg1 withIssuedToken:(id)arg2;
-(void)removeChannel:(id)arg1;
-(id)serviceResponseWithResultBlock:(id)arg1;
-(void)requestSyncChannelDataWithLastSynced:(long long)arg1 withCompleteBlock:(id)arg2;
-(BOOL)isEmptyChannelData;
-(void)requestUnmanagedChannelsWithCompleteBlock:(id)arg1;
-(void)ensureIssuedChannelTokenWithChannelID:(id)arg1 completeBlock:(id)arg2;
-(id)publicChannelsWithApprovedOnly:(BOOL)arg1;
-(void)requestApprovedChannelsWithCompleteBlock:(id)arg1;
-(void)requestChannelInfoWithChannel:(id)arg1 completeBlock:(id)arg2;
-(void)requestIssueChannelTokenWithID:(id)arg1 completeBlock:(id)arg2;
-(void)requestApproveChannelAndIssueChannelTokenWithChannelID:(id)arg1 completeBlock:(id)arg2;
-(void)requestRequestTokenWithID:(id)arg1 otpID:(id)arg2 sourceApplication:(id)arg3 returnURL:(id)arg4 completeBlock:(id)arg5;
-(void)requestRevokeChannelWithChannelID:(id)arg1 completeBlock:(id)arg2;
-(id)mutableChannels;
-(void)requestChannelNotificationSettingsWithCompleteBlock:(id)arg1;
-(void)requestChannelNotificationSettingsWithChannelID:(id)arg1 completeBlock:(id)arg2;
-(void)requestToUpdateChannelNotificationSettings:(id)arg1 withCompleteBlock:(id)arg2;
-(void)removeAllChannels;
-(void)getFriendChannelMatricesWithChannelIds:(id)arg1 completeBlock:(id)arg2;
-(void)reserveCoinsWithRequest:(id)arg1 completionBlock:(id)arg2;
-(void)synchronizeIfNeed;
-(void)refreshGroupBoardChannelWithCompleteBlock:(id)arg1;
-(void)refreshLineAlbumChannelWithCompleteBlock:(id)arg1;
-(BOOL)issueRequestTokenWithChannelIDString:(id)arg1 otpID:(id)arg2 sourceApplication:(id)arg3 returnUrl:(id)arg4 completeBlock:(id)arg5;
-(BOOL)revokeChannel:(id)arg1 withCompleteBlock:(id)arg2;
-(void)flushCurrentChannelCache;
-(id)timelineChannel;
-(id)myhomeChannel;
-(id)groupboardChannel;
-(id)lineAlbumChannel;
-(id)lineAtChannel;
-(void)fetchNotificationItemsWithLocalRev:(long long)arg1 completionBlock:(id)arg2;
-(void)notificationBadgeCountWithLocalRev:(long long)arg1 completionBlock:(id)arg2;
-(BOOL)notificationSettingsWithChannel:(id)arg1 completeBlock:(id)arg2;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(void)setWhitelist:(id)arg1;
-(void).cxx_destruct;
@end