/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:30 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FriendsPlaylistsReply_Builder : PBGeneratedMessage_Builder {
	FriendsPlaylistsReply* result; 
}
@property (retain) FriendsPlaylistsReply* result; 
-(id)playlists;
-(id)buildPartial;
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)internalGetResult;
-(id)clone;
-(id)setPlaylistsArray:(id)arg1;
-(id)playlistsAtIndex:(unsigned)arg1;
-(id)addPlaylists:(id)arg1;
-(id)setPlaylistsValues:(id*)arg1 count:(unsigned)arg2;
-(id)clearPlaylists;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(id)clear;
-(void)setResult:(id)arg1;
-(id)build;
@end