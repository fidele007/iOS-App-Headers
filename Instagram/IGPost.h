/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:05 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGCommentModelDelegate.h>

@interface IGPost : IGStorableObject <IGCommentModelDelegate> {
	BOOL _hasLiked; 
	BOOL _moreCommentsAvailable; 
	BOOL _collapseComments; 
	BOOL _needsFetch; 
	int _mediaType; 
	IGUser* _user; 
	IGDate* _takenAt; 
	NSNumber* _deviceTimestamp; 
	NSDictionary* _imageVersions; 
	NSDictionary* _videoVersions; 
	int _videoLength; 
	IGLocation* _location; 
	CLLocation* _mediaCoord; 
	NSMutableOrderedSet* _likers; 
	int _likeCount; 
	NSMutableArray* _pendingComments; 
	NSArray* _activeComments; 
	NSMutableArray* _allComments; 
	IGCommentModel* _caption; 
	NSNumber* _commentCursor; 
	int _commentCount; 
	IGDate* _lastCommentTimeStamp; 
	IGDate* _lastReadTimeStamp; 
	NSString* _exploreContext; 
}
@property (copy) int mediaType; 				//@synthesize mediaType=_mediaType - In the implementation block
@property (copy) IGUser* user; 				//@synthesize user=_user - In the implementation block
@property (copy) IGDate* takenAt; 				//@synthesize takenAt=_takenAt - In the implementation block
@property (copy) NSNumber* deviceTimestamp; 				//@synthesize deviceTimestamp=_deviceTimestamp - In the implementation block
@property (copy) NSDictionary* imageVersions; 				//@synthesize imageVersions=_imageVersions - In the implementation block
@property (copy) NSDictionary* videoVersions; 				//@synthesize videoVersions=_videoVersions - In the implementation block
@property (copy) int videoLength; 				//@synthesize videoLength=_videoLength - In the implementation block
@property (copy) IGLocation* location; 				//@synthesize location=_location - In the implementation block
@property (copy) CLLocation* mediaCoord; 				//@synthesize mediaCoord=_mediaCoord - In the implementation block
@property (copy) NSMutableOrderedSet* likers; 				//@synthesize likers=_likers - In the implementation block
@property (copy) int likeCount; 				//@synthesize likeCount=_likeCount - In the implementation block
@property (copy) BOOL hasLiked; 				//@synthesize hasLiked=_hasLiked - In the implementation block
@property (copy) IGCommentModel* caption; 				//@synthesize caption=_caption - In the implementation block
@property (copy) NSNumber* commentCursor; 				//@synthesize commentCursor=_commentCursor - In the implementation block
@property (copy) int commentCount; 				//@synthesize commentCount=_commentCount - In the implementation block
@property (copy) NSMutableArray* allComments; 				//@synthesize allComments=_allComments - In the implementation block
@property (copy) BOOL moreCommentsAvailable; 				//@synthesize moreCommentsAvailable=_moreCommentsAvailable - In the implementation block
@property (copy) BOOL collapseComments; 				//@synthesize collapseComments=_collapseComments - In the implementation block
@property (retain) IGDate* lastCommentTimeStamp; 				//@synthesize lastCommentTimeStamp=_lastCommentTimeStamp - In the implementation block
@property (retain) IGDate* lastReadTimeStamp; 				//@synthesize lastReadTimeStamp=_lastReadTimeStamp - In the implementation block
@property (copy) NSString* exploreContext; 				//@synthesize exploreContext=_exploreContext - In the implementation block
@property (copy) NSArray* activeComments; 				//@synthesize activeComments=_activeComments - In the implementation block
@property (copy) NSArray* activeCaptionAndComments; 
@property (assign,nonatomic) BOOL needsFetch; 				//@synthesize needsFetch=_needsFetch - In the implementation block
@property (retain) NSMutableArray* pendingComments; 				//@synthesize pendingComments=_pendingComments - In the implementation block
+(int)videoVersionForCurrentNetworkConditions;
+(int)fullSizeImageVersionForDevice;
-(id)urlToPostComment;
-(void)commentPostRequestStarted:(id)arg1;
-(void)commentPostRequestFailed:(id)arg1;
-(void)commentPostRequestFinished:(id)arg1;
-(void)commentPostRequestFailedSpam:(id)arg1;
-(void)commentRemoveRequestStarted:(id)arg1;
-(id)urlToDeleteComment:(id)arg1;
-(void)commentRemoveRequestFailed:(id)arg1;
-(void)reportInappropriateWithCompletionHandler:(id)arg1;
-(void)commentRemoveRequestFinished:(id)arg1;
-(id)urlToFlagComment:(id)arg1;
-(void)fetchMoreCommentsWithCompletionHandler:(id)arg1;
-(void)setHasLiked:(BOOL)arg1;
-(void)performLike:(BOOL)arg1 userDidDoubleTap:(BOOL)arg2 completion:(id)arg3;
-(void)postPostUpdatedNotification;
-(void)updateLocalLikeStatus:(BOOL)arg1;
-(void)removeLocalLocationInformation;
-(id)imageURLForFullSizeImage;
-(id)imageURLForImageVersion:(int)arg1;
-(id)videoURLForVideoVersion:(int)arg1;
-(void)setLocationInfoFromDictionary:(id)arg1;
-(void)setLikeInfoFromDictionary:(id)arg1;
-(void)setCommentInfoFromDictionary:(id)arg1 append:(BOOL)arg2;
-(void)invalidateActiveComments;
-(void)setCommentCursor:(id)arg1;
-(void)setMoreCommentsAvailable:(BOOL)arg1;
-(void)setCollapseComments:(BOOL)arg1;
-(void)setAllComments:(id)arg1;
-(void)schedulePostUpdatedNotification;
-(void)setActiveComments:(id)arg1;
-(void)setTakenAt:(id)arg1;
-(void)setDeviceTimestamp:(id)arg1;
-(void)setImageVersions:(id)arg1;
-(void)setVideoVersions:(id)arg1;
-(void)setVideoLength:(int)arg1;
-(void)setMediaCoord:(id)arg1;
-(void)setLikers:(id)arg1;
-(void)setLikeCount:(int)arg1;
-(void)setPendingComments:(id)arg1;
-(void)setLastCommentTimeStamp:(id)arg1;
-(void)setLastReadTimeStamp:(id)arg1;
-(void)fetchAdditionalInfo;
-(void)removeCommentWithPK:(id)arg1;
-(void)setNeedsFetch:(BOOL)arg1;
-(id)allVideoURLs;
-(void)setUser:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(void)setMediaType:(int)arg1;
-(void)addComment:(id)arg1;
-(void)setCommentCount:(int)arg1;
-(BOOL)updateWithDictionary:(id)arg1;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1;
-(void)setCaption:(id)arg1;
@end