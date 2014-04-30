/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:59 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol PlayableContextProtocolDelegate
@required
-(void)contextAvailable(id):arg1 ;
-(void)contextAvailable(id):arg1 ;
@end

@protocol TrackActionsControllerDelegate
@optional
-(void)trackActionsControllerToggledStar(id):arg1 ;
-(void)trackActionsControllerShowedAddToPlaylist(id):arg1 ;
-(void)trackActionsControllerShowedShare(id):arg1 ;
-(void)trackActionsControllerShowedArtist(id):arg1 ;
-(void)trackActionsControllerShowedAlbum(id):arg1 ;
-(void)trackActionsControllerQueuedTrack(id):arg1 ;
-(void)trackActionsControllerDismissedShare(id):arg1 ;
-(void)trackActionsControllerDismissedAddToPlaylist(id):arg1 ;
@end

@protocol UIWebViewDelegate
@optional
-(void)webView(id):arg1 didFailLoadWithError(id):arg2 ;
-(BOOL)webView(id):arg1 shouldStartLoadWithRequest(id):arg2 navigationType(int):arg3 ;
-(void)webViewDidStartLoad(id):arg1 ;
-(void)webViewDidFinishLoad(id):arg1 ;
@end

@protocol SPButtonWithDisableAlertDelegate
@optional
-(BOOL)shouldShowDisabledAlertForButton(id):arg1 ;
-(void)didShowDisabledAlertForButton(id):arg1 ;
@end

@protocol SPForegroundObserverDelegate
@required
-(void)foregroundObserverDidAwake(id):arg1 ;
-(void)foregroundObserverDidHibernate(id):arg1 ;
-(void)foregroundObserverDidAwake(id):arg1 ;
-(void)foregroundObserverDidHibernate(id):arg1 ;
@end

@protocol ImageSlideViewDelegate
@optional
-(void)imageSlideViewStartedSliding;
-(void)imageSlideViewStoppedSliding;
-(void)imageSlideViewDidSlideLeftWhileDisabled;
-(void)imageSlideViewDidSlideRightWhileDisabled;
@required
-(BOOL)canSlideImageRight;
-(BOOL)canSlideImageLeft;
-(void)didSlideImageLeft;
-(void)didSlideImageRight;
-(BOOL)alwaysShowRightPlaceholder;
-(id)leftLeftTrack;
-(BOOL)canShowLeftImage;
-(id)leftTrack;
-(id)rightTrack;
-(BOOL)canShowRightImage;
-(id)rightRightTrack;
-(void)imageSlideViewWasTapped;
-(id)currentTrack;
-(BOOL)canSlideImageRight;
-(BOOL)canSlideImageLeft;
-(void)didSlideImageLeft;
-(void)didSlideImageRight;
-(BOOL)alwaysShowRightPlaceholder;
-(id)leftLeftTrack;
-(BOOL)canShowLeftImage;
-(id)leftTrack;
-(id)rightTrack;
-(BOOL)canShowRightImage;
-(id)rightRightTrack;
-(void)imageSlideViewWasTapped;
-(id)currentTrack;
@end
