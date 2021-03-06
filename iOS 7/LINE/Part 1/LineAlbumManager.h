/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:06 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineAlbumManager : NSObject {
	NSString* phase; 
	NSString* obsApplicationHeader; 
	id<LineAlbumDataSource> dataSource; 
	NSString* _obsServerUrl; 
	NSString* _obsSSLServerUrl; 
}
@property (nonatomic,retain) NSString* phase; 
@property (nonatomic,copy) NSString* obsServerUrl; 				//@synthesize obsServerUrl=_obsServerUrl - In the implementation block
@property (nonatomic,copy) NSString* obsSSLServerUrl; 				//@synthesize obsSSLServerUrl=_obsSSLServerUrl - In the implementation block
@property (assign,nonatomic) id<LineAlbumDataSource> dataSource; 
@property (nonatomic,retain) NSString* obsApplicationHeader; 
+(id)sharedInstance;
-(void)setupObsApplicationHeader:(id)arg1;
-(void)setObsApplicationHeader:(id)arg1;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 withPresentationStyle:(int)arg3;
-(id)schemeParseURI:(id)arg1;
-(void)presentPhotoListOfGroup:(id)arg1 albumID:(id)arg2 photoId:(id)arg3 fromViewController:(id)arg4;
-(void)setHasNew:(BOOL)arg1 mid:(id)arg2 albumId:(id)arg3;
-(void)setHasNewStatus:(unsigned)arg1 mid:(id)arg2;
-(unsigned)hasNewWithMid:(id)arg1;
-(void)setBlocked:(BOOL)arg1 forUser:(id)arg2;
-(id)channelAccessToken;
-(void)presentAlbumListOfGroup:(id)arg1 type:(int)arg2 presentationStyle:(int)arg3 fromViewController:(id)arg4;
-(void)presentAlbumListOfGroup:(id)arg1 object:(id)arg2 presentationStyle:(int)arg3 fromViewController:(id)arg4;
-(void)presentAlbumListOfGroup:(id)arg1 picker:(id)arg2 mediaInfos:(id)arg3 fromViewController:(id)arg4;
-(void)messageImage:(id)arg1 cafeID:(id)arg2 groupID:(id)arg3 withResultBlock:(id)arg4;
-(BOOL)openAlbumURLScheme:(id)arg1 currentViewController:(id)arg2;
-(void)checkNewMarkAPI:(id)arg1 resultBlock:(id)arg2;
-(id)currentUser;
-(void)user:(id)arg1 completionBlock:(id)arg2;
-(id)photoQuality;
-(void)updateMyProfileImage;
-(void)setObsServerUrl:(id)arg1;
-(void)setObsSSLServerUrl:(id)arg1;
-(void)dealloc;
-(void)setDataSource:(id)arg1;
-(void)setPhase:(id)arg1;
-(id)groupMembers:(id)arg1;
-(void).cxx_destruct;
@end