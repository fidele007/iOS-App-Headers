/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:30 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPSearchResponse : SPSessionResponse {
	NSArray* _artists; 
	NSArray* _albums; 
	NSArray* _playlistInfos; 
	SPPlaylist* _tracks; 
	int _totalCountOfArtists; 
	int _totalCountOfAlbums; 
	int _totalCountOfPlaylists; 
	int _totalCountOfTracks; 
	NSString* _didYouMean; 
}
@property (nonatomic,retain) NSArray* artists; 				//@synthesize artists=_artists - In the implementation block
@property (nonatomic,retain) NSArray* albums; 				//@synthesize albums=_albums - In the implementation block
@property (nonatomic,retain) NSArray* playlistInfos; 				//@synthesize playlistInfos=_playlistInfos - In the implementation block
@property (nonatomic,retain) SPPlaylist* tracks; 				//@synthesize tracks=_tracks - In the implementation block
@property (assign,nonatomic) int totalCountOfArtists; 				//@synthesize totalCountOfArtists=_totalCountOfArtists - In the implementation block
@property (assign,nonatomic) int totalCountOfAlbums; 				//@synthesize totalCountOfAlbums=_totalCountOfAlbums - In the implementation block
@property (assign,nonatomic) int totalCountOfPlaylists; 				//@synthesize totalCountOfPlaylists=_totalCountOfPlaylists - In the implementation block
@property (assign,nonatomic) int totalCountOfTracks; 				//@synthesize totalCountOfTracks=_totalCountOfTracks - In the implementation block
@property (nonatomic,retain) NSString* didYouMean; 				//@synthesize didYouMean=_didYouMean - In the implementation block
-(void)setArtists:(id)arg1;
-(void)setPlaylistInfos:(id)arg1;
-(void)setDidYouMean:(id)arg1;
-(SEL)resultParserSelector;
-(void)parseReturnCode:(int)arg1 result:(struct SearchResult*)arg2 unknown:(unsigned)arg3;
-(void)setTotalCountOfAlbums:(int)arg1;
-(void)setTotalCountOfArtists:(int)arg1;
-(void)setTotalCountOfPlaylists:(int)arg1;
-(void)setTotalCountOfTracks:(int)arg1;
-(void)setTracks:(id)arg1;
-(void)dealloc;
-(void)setAlbums:(id)arg1;
@end