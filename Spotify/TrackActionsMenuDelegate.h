/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:58 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol AddToPlaylistDelegate
@optional
-(void)addToPlaylist(id):arg1 addedTracks(id):arg2 toPlaylist(id):arg3 ;
-(void)addToPlaylistDismissed(id):arg1 ;
@end

@protocol ShareSheetDelegate
@required
-(void)shareSheetWasDismissed(id):arg1 ;
-(void)shareSheetWasDismissed(id):arg1 ;
@end

@protocol TrackActionsMenuDelegate
@optional
-(void)trackActionsMenu(id):arg1 toggleStarredFromSender(id):arg2 ;
-(void)trackActionsMenu(id):arg1 addToPlaylistFromSender(id):arg2 ;
-(void)trackActionsMenu(id):arg1 shareFromSender(id):arg2 ;
-(void)trackActionsMenu(id):arg1 showArtistFromSender(id):arg2 ;
-(void)trackActionsMenu(id):arg1 showAlbumFromSender(id):arg2 ;
-(void)trackActionsMenu(id):arg1 queueFromSender(id):arg2 ;
-(void)trackActionsMenu(id):arg1 startRadioFromSender(id):arg2 ;
@end
