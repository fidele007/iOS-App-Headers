/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:34 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPURL : NSURL {
	struct {
		int _what;
		String _s;
		( ;
		char* t;
		StrPtrStruct)* _d;
		String _a;
		( ;
		char* t;
		StrPtrStruct)* _d;
		String _a2;
		( ;
		char* t;
		StrPtrStruct)* _d;
		unsigned _start_offs;
		unsigned _disc_number;
		int _track_action;
		int _profile_section;
		( ;
		unsigned int _album:AlumId;
		unsigned char[16] _id;
		ArtistId _artist;
		unsigned char[16] _id;
		TrackId _track;
		unsigned char[16] _id;
		PlaylistId _playlist;
		unsigned char[16] _id;
		TrackInfo* _track_info;
		AlbumInfo* _album_info;
		ArtistInfo* _artist_info;
		int _internal_view;
		AdId _ad;
		unsigned char[16] _id;
		unsigned _radio_genres;
		unsigned _login_delay;
		unsigned long long _uid;
		String* _version;
		ImageId _image;
		unsigned char[20] _id;
		Array<spSpotifyLink, const spSpotifyLink &, 64, true>* _mosaic_image_links;
		 ;
		Array<spTrackId, const spTrackId &, 64, true>* _track_set;
		int _track_set_nr;
		 ;
		FileId _file;
		unsigned char[20] _id;
		int _format;
		 ;
		int _toplist_type;
		I) _toplist_region;
	} _link; 
}
@property (nonatomic,copy) NSString* name; 
@property (nonatomic,copy) SPURL* authorLink; 
@property (nonatomic,copy) NSData* imageIdForContent; 
@property (nonatomic,copy) BOOL isInternalViewLinkNowPlaying; 
@property (assign,nonatomic) struct SpotifyLink link; 				//@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSURL* URLRedirectingThroughHTTP; 
@property (nonatomic,copy) NSData* albumId; 
@property (nonatomic,copy) NSData* artistId; 
@property (nonatomic,copy) NSData* trackId; 
@property (nonatomic,copy) NSData* imageId; 
@property (nonatomic,copy) NSString* searchQuery; 
@property (nonatomic,copy) NSString* internalData; 
@property (nonatomic,copy) NSString* application; 
@property (nonatomic,copy) int internalView; 
@property (nonatomic,copy) NSString* radioId; 
@property (nonatomic,copy) NSArray* mosaicImageLinks; 
@property (nonatomic,copy) unsigned long long folderId; 
@property (nonatomic,copy) NSString* username; 
@property (nonatomic,copy) unsigned trackOffset; 
@property (nonatomic,copy) BOOL isArtist; 
@property (nonatomic,copy) BOOL isArtistTopTracks; 
@property (nonatomic,copy) BOOL isAlbum; 
@property (nonatomic,copy) BOOL isApplication; 
@property (nonatomic,copy) BOOL isSearch; 
@property (nonatomic,copy) BOOL isPlaylist; 
@property (nonatomic,copy) BOOL isStarred; 
@property (nonatomic,copy) BOOL isInbox; 
@property (nonatomic,copy) BOOL isProfile; 
@property (nonatomic,copy) BOOL isJustStartApp; 
@property (nonatomic,copy) BOOL isSpotifyTrack; 
@property (nonatomic,copy) BOOL isLocalTrack; 
@property (nonatomic,copy) BOOL isTrack; 
@property (nonatomic,copy) BOOL isSpotifyImage; 
@property (nonatomic,copy) BOOL isLocalFileImage; 
@property (nonatomic,copy) BOOL isMosaicImage; 
@property (nonatomic,copy) BOOL isImage; 
@property (nonatomic,copy) BOOL isInternalData; 
@property (nonatomic,copy) BOOL isInternalViewLink; 
@property (nonatomic,copy) BOOL isEmpty; 
@property (nonatomic,copy) BOOL isRadio; 
@property (nonatomic,copy) BOOL isAd; 
@property (nonatomic,copy) BOOL isPlaylistRoot; 
@property (nonatomic,copy) BOOL isPlaylistRootTree; 
@property (nonatomic,copy) BOOL isPlaylistFolder; 
@property (nonatomic,copy) BOOL isPublishedRoot; 
@property (nonatomic,copy) BOOL isLocalFilesPlaylist; 
@property (nonatomic,copy) BOOL isToplist; 
@property (nonatomic,copy) BOOL isFollowPage; 
@property (nonatomic,copy) BOOL isCollection; 
@property (nonatomic,copy) BOOL isCollectionUnion; 
@property (nonatomic,copy) BOOL isCollectionUnionArtist; 
@property (nonatomic,copy) BOOL isCollectionUnionArtistAllTracks; 
@property (nonatomic,copy) BOOL isCollectionUnionAlbum; 
@property (nonatomic,copy) BOOL isCollectionUnionMissingAlbum; 
+(id)URLWithPlaylistImageIdentifier:(id)arg1;
+(id)URLWithURL:(id)arg1;
+(id)URLWithSpotifyLink:(struct rSpotifyLink*)arg1;
+(id)URLWithFuzzyString:(id)arg1;
+(id)URLWithMosaicLinkForTrackContext:(id)arg1 maxImagesOnSide:(int)arg2;
+(id)trackToCollectionTracksURL:(id)arg1;
+(id)emptyURL;
+(id)URLWithUTF8String:(r*)arg1;
+(id)URLWithString:(id)arg1;
-(id)initWithApplication:(id)arg1 arguments:(id)arg2;
-(id)initWithArtist:(id)arg1;
-(id)initWithArtistId:(struct NSData*)arg1;
-(id)playlistName;
-(id)initWithImageId:(ImageId=C[=20])arg1;
-(id)initAsMosaicWithImageLinks:(id)arg1;
-(id)initWithTrackId:(struct NSData*)arg1;
-(BOOL)isInternalCollectionArtists;
-(BOOL)isInternalCollectionPlaylists;
-(BOOL)isInternalCollectionAlbums;
-(BOOL)isInternalCollectionTracks;
-(id)initWithCollectionUnionForUsername:(id)arg1 album:(id)arg2;
-(BOOL)isInternalCollectionOverview;
-(id)collectionTracksURLToTrackID;
-(id)initWithCollectionUnionForUsername:(id)arg1 artist:(id)arg2;
-(id)initWithAlbum:(id)arg1;
-(id)initWithAlbumId:(struct NSData*)arg1;
-(id)loadMetadataAndPerformBlock:(id)arg1;
-(id)initWithSearchQuery:(id)arg1;
-(id)initWithSpotifyLink:(struct rSpotifyLink*)arg1;
-(id)initWithFuzzyString:(id)arg1;
-(id)initWithPlaylistImageIdentifier:(id)arg1;
-(id)initWithCollectionForUsername:(id)arg1;
-(id)initWithCollectionUnionForUsername:(id)arg1;
-(id)initWithCollectionUnionForUsername:(id)arg1 localArtistName:(id)arg2;
-(id)initWithCollectionUnionForUsername:(id)arg1 allTracksArtist:(id)arg2;
-(id)initWithCollectionUnionForUsername:(id)arg1 allTracksLocalArtistName:(id)arg2;
-(id)initWithCollectionUnionForUsername:(id)arg1 artistName:(id)arg2 localAlbumName:(id)arg3;
-(id)initWithCollectionUnionForUsername:(id)arg1 missingAlbum:(id)arg2;
-(id)initWithCollectionUnionForUsername:(id)arg1 artistName:(id)arg2 missingLocalAlbumName:(id)arg3;
-(id)URIString;
-(id)initWithUser:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(id)initWithString:(id)arg1;
-(struct NSData*)identifier;
-(id)absoluteString;
-(id).cxx_construct;
-(id)initWithURL:(id)arg1;
-(void)setLink:(struct SpotifyLink)arg1;
-(id)initWithPlaylist:(id)arg1;
-(id)URI;
-(id)initWithTrack:(id)arg1;
-(id)initWithUserName:(id)arg1;
-(void).cxx_destruct;
@end