/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:45 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPOfflineStateProtocol.h>
#import <PlaylistFolderVCTableContentItem.h>
#import <SPPlaylistContainerItem.h>

@interface SPPlaylistContainer : SPObject <SPOfflineStateProtocol, PlaylistFolderVCTableContentItem, SPPlaylistContainerItem> {
}
@property (getter=isWriteable,nonatomic,copy) BOOL writeable; 
@property (nonatomic,copy) BOOL isAvailableOffline; 
@property (assign,nonatomic) BOOL makeAvailableOffline; 
@property (nonatomic,copy) int offlineState; 
@property (nonatomic,copy) float offlineProgress; 
@property (nonatomic,copy) SPPlaylistOfflineSyncStatus* offlineSyncStatus; 
@property (nonatomic,copy) NSString* detailDescriptionText; 
@property (getter=isLoaded,nonatomic,copy) BOOL loaded; 
@property (nonatomic,copy) NSMutableArray* children; 
@property (nonatomic,copy) NSMutableArray* playlists; 
@property (copy) NSArray* actualPlaylists; 
@property (copy) NSArray* folders; 
@property (nonatomic,copy) NSString* name; 
@property (nonatomic,copy) SPURL* link; 
@property (nonatomic,copy) NSString* ownerCanonicalUsername; 
@property (nonatomic,copy) unsigned nodeType; 
+(id)containerWithCpp:(struct PlaylistContainer*)arg1;
+(id)folderWithURI:(id)arg1;
-(struct RefCountedInterface*)cpp;
-(id)newPlaylistAtIndex:(unsigned)arg1 named:(id)arg2;
-(unsigned)countOfTracks;
-(void)setMakeAvailableOffline:(BOOL)arg1;
-(id)findFolderByURL:(id)arg1;
-(void)countTracks:(unsigned*)arg1 playlists:(unsigned*)arg2;
-(void)recursivelyRemoveContents;
-(void)shallowCountPlaylists:(unsigned*)arg1 folders:(unsigned*)arg2;
-(id)playlistFolderCellReuseIdentifierForEditing:(BOOL)arg1;
-(Class)playlistFolderCellClassForEditing:(BOOL)arg1;
-(id)findPlaylistByURL:(id)arg1;
-(void)removeCallbacks;
-(void)addCallbacks;
-(unsigned)countOfChildren;
-(unsigned)countOfPlaylists;
-(int)entryTypeAtIndex:(unsigned)arg1;
-(id)objectInPlaylistsAtIndex:(unsigned)arg1;
-(id)folderNameAtIndex:(unsigned)arg1;
-(unsigned long long)folderIdAtIndex:(unsigned)arg1;
-(id)entryStringAtIndex:(unsigned)arg1;
-(id)objectInChildrenAtIndex:(unsigned)arg1;
-(void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned)arg2;
-(void)removeObjectFromChildrenAtIndex:(unsigned)arg1;
-(void)moveChildAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2;
-(void)insertObject:(id)arg1 inPlaylistsAtIndex:(unsigned)arg2;
-(void)removeObjectFromPlaylistsAtIndex:(unsigned)arg1;
-(unsigned)countOfTracksCached;
-(id)description;
-(id)debugDescription;
-(void)setName:(id)arg1;
-(struct PlaylistContainer*)container;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
-(id)tracks;
-(id)callbacks;
@end