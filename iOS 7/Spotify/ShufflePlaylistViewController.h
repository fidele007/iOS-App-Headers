/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:33 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPPopcountLookupDelegate.h>

@interface ShufflePlaylistViewController : ShuffleTrackListContextViewController <SPPopcountLookupDelegate> {
	SPPlaylist* _playlist; 
	SPUser* _user; 
	SPKVObservation* _playlistIsLoadingObservation; 
	SPKVObservation* _userLoadedObservation; 
	SPKVObservation* _playlistFreeformDescriptionObservation; 
	SPKVObservation* _playlistImageIdentObservation; 
	SPPopcountLookup* _popcountLookup; 
	SessionController* _sessionController; 
}
@property (nonatomic,retain) SPPlaylist* playlist; 				//@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) SPUser* user; 				//@synthesize user=_user - In the implementation block
@property (nonatomic,retain) SPKVObservation* playlistIsLoadingObservation; 				//@synthesize playlistIsLoadingObservation=_playlistIsLoadingObservation - In the implementation block
@property (nonatomic,retain) SPKVObservation* userLoadedObservation; 				//@synthesize userLoadedObservation=_userLoadedObservation - In the implementation block
@property (nonatomic,retain) SPKVObservation* playlistFreeformDescriptionObservation; 				//@synthesize playlistFreeformDescriptionObservation=_playlistFreeformDescriptionObservation - In the implementation block
@property (nonatomic,retain) SPKVObservation* playlistImageIdentObservation; 				//@synthesize playlistImageIdentObservation=_playlistImageIdentObservation - In the implementation block
@property (nonatomic,retain) SPPopcountLookup* popcountLookup; 				//@synthesize popcountLookup=_popcountLookup - In the implementation block
@property (assign,nonatomic,__weak) SessionController* sessionController; 				//@synthesize sessionController=_sessionController - In the implementation block
-(void)setPlaylist:(id)arg1;
-(void)setSessionController:(id)arg1;
-(void)setPopcountLookup:(id)arg1;
-(void)popCountLookup:(id)arg1 didFindSubscribers:(id)arg2 totalNumberOfSubscribers:(int)arg3;
-(void)popCountLookup:(id)arg1 didFailWithError:(id)arg2;
-(void)setUserLoadedObservation:(id)arg1;
-(void)playlistIsLoadingChanged;
-(void)setPlaylistIsLoadingObservation:(id)arg1;
-(void)setPlaylistFreeformDescriptionObservation:(id)arg1;
-(void)setPlaylistImageIdentObservation:(id)arg1;
-(id)initWithURL:(id)arg1 sessionController:(id)arg2 playController:(id)arg3 core:(id)arg4 metaViewController:(id)arg5;
-(void)setUser:(id)arg1;
-(void)dealloc;
-(void)viewDidLoad;
-(void).cxx_destruct;
@end