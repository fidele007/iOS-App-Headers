/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:53 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTPlaylistBackendManager : NSObject {
	struct PlaylistBackendManager* _playlistBackendManager; 
	BOOL _reset; 
}
@property (assign,getter=isReset,nonatomic) BOOL reset; 				//@synthesize reset=_reset - In the implementation block
-(void)synchronisePlaylistContainer:(id)arg1;
-(void)synchronisePlaylist:(id)arg1;
-(id)cachedAttributesForPlaylist:(id)arg1;
-(struct PlaylistSyncReason)playlistSyncReason:(struct SpotifyLink)arg1;
-(id)initWithPlaylistBackendManager:(struct PlaylistBackendManager*)arg1;
-(void)setReset:(BOOL)arg1;
@end