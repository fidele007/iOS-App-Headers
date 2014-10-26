/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:58 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <AddToPlaylistDelegate.h>
#import <ShareSheetDelegate.h>
#import <TrackActionsMenuDelegate.h>

@interface TrackActionsController : NSObject <AddToPlaylistDelegate, ShareSheetDelegate, TrackActionsMenuDelegate> {
	SPTrackContext* _context; 
	int _index; 
	SPTrack* _track; 
	id<SPRadioManager> _radioManager; 
	id<TrackActionsMenu> _menu; 
	id<TrackActionsControllerDelegate> _delegate; 
	ShareSheet* _shareSheet; 
}
@property (nonatomic,retain) SPTrackContext* context; 				//@synthesize context=_context - In the implementation block
@property (assign,nonatomic) int index; 				//@synthesize index=_index - In the implementation block
@property (nonatomic,retain) SPTrack* track; 				//@synthesize track=_track - In the implementation block
@property (nonatomic,retain) id<SPRadioManager> radioManager; 				//@synthesize radioManager=_radioManager - In the implementation block
@property (nonatomic,retain) id<TrackActionsMenu> menu; 				//@synthesize menu=_menu - In the implementation block
@property (assign,nonatomic,__weak) id<TrackActionsControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ShareSheet* shareSheet; 				//@synthesize shareSheet=_shareSheet - In the implementation block
-(void)addToPlaylist:(id)arg1 addedTracks:(id)arg2 toPlaylist:(id)arg3;
-(void)addToPlaylistDismissed:(id)arg1;
-(void)setRadioManager:(id)arg1;
-(void)shareSheetWasDismissed:(id)arg1;
-(void)setShareSheet:(id)arg1;
-(void)trackActionsMenu:(id)arg1 toggleStarredFromSender:(id)arg2;
-(void)trackActionsMenu:(id)arg1 addToPlaylistFromSender:(id)arg2;
-(void)trackActionsMenu:(id)arg1 shareFromSender:(id)arg2;
-(void)trackActionsMenu:(id)arg1 showArtistFromSender:(id)arg2;
-(void)trackActionsMenu:(id)arg1 showAlbumFromSender:(id)arg2;
-(void)trackActionsMenu:(id)arg1 queueFromSender:(id)arg2;
-(void)trackActionsMenu:(id)arg1 startRadioFromSender:(id)arg2;
-(void)configureForIndex:(int)arg1 inContext:(id)arg2;
-(void)configureWithTrack:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)setContext:(id)arg1;
-(void)setMenu:(id)arg1;
-(void)setIndex:(int)arg1;
-(void)setTrack:(id)arg1;
-(void).cxx_destruct;
@end