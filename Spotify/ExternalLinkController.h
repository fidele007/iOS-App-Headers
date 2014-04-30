/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:26 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ExternalLinkController : NSObject {
	NSMutableArray* _whenLoggedIn; 
	SPTrackContext* _contextToPlay; 
	SPDependency* _contextToPlayDep; 
}
@property (nonatomic,retain) NSMutableArray* whenLoggedIn; 				//@synthesize whenLoggedIn=_whenLoggedIn - In the implementation block
@property (nonatomic,retain) SPTrackContext* contextToPlay; 				//@synthesize contextToPlay=_contextToPlay - In the implementation block
@property (nonatomic,retain) SPDependency* contextToPlayDep; 				//@synthesize contextToPlayDep=_contextToPlayDep - In the implementation block
+(void)openPendingLinks;
+(BOOL)handleURL:(id)arg1 fromApplication:(id)arg2 annotation:(id)arg3;
+(BOOL)canHandleURL:(id)arg1;
+(id)sharedLinkController;
-(void)openPendingLinks;
-(BOOL)handleURL:(id)arg1 fromApplication:(id)arg2 annotation:(id)arg3;
-(void)playTrack:(id)arg1;
-(BOOL)handleSpotifyURL:(id)arg1 fromApplication:(id)arg2 annotation:(id)arg3;
-(BOOL)handleSpotifyActionURL:(id)arg1 fromApplication:(id)arg2 annotation:(id)arg3;
-(BOOL)handleFacebookURL:(id)arg1 fromApplication:(id)arg2 annotation:(id)arg3;
-(BOOL)urlIsFacebookAuthWithToken:(id)arg1;
-(void)showInvalidLinkMessage;
-(BOOL)handleInternalLink:(id)arg1;
-(void)showWillOpenOnLogin:(id)arg1;
-(void)openContentLink:(id)arg1 fromApplication:(id)arg2 annotation:(id)arg3;
-(void)performNowOrWhenLoggedIn:(id)arg1;
-(void)setContextToPlay:(id)arg1;
-(void)setContextToPlayDep:(id)arg1;
-(void)setWhenLoggedIn:(id)arg1;
-(void)dealloc;
-(void).cxx_destruct;
@end