/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:19 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UserViewTableModel : AggregatedTableModel {
	SPUser* _user; 
	SPProfileContext* _profileContext; 
	id<SPTableModelDelegate> _delegate; 
	SPPlaylistContainer* _playlistContainer; 
	ArtistInfoModel* _infoModel; 
	SPTopListRequest* _topArtistsBrowseRequest; 
	NSArray* _topArtists; 
	NSArray* _allPlaylists; 
	NSTimer* _isLoadingTimer; 
	SPKVObservation* _profileContextLoadedObservation; 
}
@property (nonatomic,retain) SPUser* user; 				//@synthesize user=_user - In the implementation block
@property (nonatomic,retain) ArtistInfoModel* infoModel; 				//@synthesize infoModel=_infoModel - In the implementation block
@property (nonatomic,copy) NSArray* topArtists; 				//@synthesize topArtists=_topArtists - In the implementation block
@property (nonatomic,copy) NSArray* allPlaylists; 				//@synthesize allPlaylists=_allPlaylists - In the implementation block
@property (nonatomic,retain) SPProfileContext* profileContext; 				//@synthesize profileContext=_profileContext - In the implementation block
@property (nonatomic,retain) SPPlaylistContainer* playlistContainer; 				//@synthesize playlistContainer=_playlistContainer - In the implementation block
@property (nonatomic,retain) SPTopListRequest* topArtistsBrowseRequest; 				//@synthesize topArtistsBrowseRequest=_topArtistsBrowseRequest - In the implementation block
@property (nonatomic,retain) NSTimer* isLoadingTimer; 				//@synthesize isLoadingTimer=_isLoadingTimer - In the implementation block
@property (nonatomic,retain) SPKVObservation* profileContextLoadedObservation; 				//@synthesize profileContextLoadedObservation=_profileContextLoadedObservation - In the implementation block
-(unsigned)contextRowForIndexPath:(id)arg1;
-(void)setInfoModel:(id)arg1;
-(void)usernameUpdated;
-(void)setupContext;
-(void)setTopArtistsBrowseRequest:(id)arg1;
-(void)setTopArtists:(id)arg1;
-(void)reloadModel;
-(void)setPlaylistContainer:(id)arg1;
-(void)setProfileContext:(id)arg1;
-(void)profileContextIsLoaded;
-(void)setProfileContextLoadedObservation:(id)arg1;
-(void)checkStillLoading;
-(void)contextTracksChanged;
-(void)setIsLoadingTimer:(id)arg1;
-(BOOL)hasTopArtists;
-(void)setAllPlaylists:(id)arg1;
-(id)initWithUser:(id)arg1;
-(void)setUser:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(id)context;
-(void).cxx_destruct;
@end