/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:53 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPSocialLookupDelegate.h>

@interface SPSearch : NSObject <SPSocialLookupDelegate> {
	int _searchType; 
	struct SPSectionValues* _sectionValues; 
	NSMutableArray* _requests; 
	NSArray* _artists; 
	NSArray* _albums; 
	NSArray* _playlistInfos; 
	SPPlaylist* _tracks; 
	NSArray* _friends; 
	id _topHit; 
	NSString* _query; 
	id _changedBlock; 
	SPSocialLookup* _socialLookup; 
}
@property (nonatomic,retain) NSString* query; 				//@synthesize query=_query - In the implementation block
@property (nonatomic,copy) int searchType; 				//@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,retain) NSArray* artists; 				//@synthesize artists=_artists - In the implementation block
@property (nonatomic,retain) NSArray* albums; 				//@synthesize albums=_albums - In the implementation block
@property (nonatomic,retain) NSArray* playlistInfos; 				//@synthesize playlistInfos=_playlistInfos - In the implementation block
@property (nonatomic,retain) SPPlaylist* tracks; 				//@synthesize tracks=_tracks - In the implementation block
@property (nonatomic,retain) NSArray* friends; 				//@synthesize friends=_friends - In the implementation block
@property (nonatomic,retain) id topHit; 				//@synthesize topHit=_topHit - In the implementation block
@property (nonatomic,copy) id changedBlock; 				//@synthesize changedBlock=_changedBlock - In the implementation block
@property (getter=isEmpty,nonatomic,copy) BOOL empty; 
@property (nonatomic,retain) SPSocialLookup* socialLookup; 				//@synthesize socialLookup=_socialLookup - In the implementation block
-(void)setSocialLookup:(id)arg1;
-(void)socialLookup:(id)arg1 didFindFriends:(id)arg2;
-(void)socialLookup:(id)arg1 didFailWithError:(id)arg2;
-(void)setChangedBlock:(id)arg1;
-(void)fillExtras:(int)arg1;
-(void)handleSearchResponse:(id)arg1;
-(void)setArtists:(id)arg1;
-(void)setPlaylistInfos:(id)arg1;
-(void)setTopHit:(id)arg1;
-(BOOL)isIgnoringSection:(int)arg1;
-(int)topHitMatch:(id)arg1;
-(id)initWithSearch:(id)arg1;
-(void)addObjects:(id)arg1 toSection:(int)arg2 array:(id)arg3;
-(BOOL)canExtendSection:(int)arg1;
-(BOOL)isExtendingSection:(int)arg1;
-(id)searchSectionStringFromSection:(int)arg1;
-(void)handleExtendedSearchResponse:(id)arg1 section:(int)arg2;
-(void)emptySection:(int)arg1;
-(void)extend:(int)arg1 by:(int)arg2;
-(id)initWithQuery:(id)arg1 extras:(int)arg2 searchType:(int)arg3 initialCount:(int)arg4 onChange:(id)arg5;
-(void)setIgnore:(BOOL)arg1 section:(int)arg2;
-(void)setQuery:(id)arg1;
-(void)setFriends:(id)arg1;
-(void)setTracks:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(void)setAlbums:(id)arg1;
@end