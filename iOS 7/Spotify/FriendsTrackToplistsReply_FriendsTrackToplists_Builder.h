/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:15 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FriendsTrackToplistsReply_FriendsTrackToplists_Builder : PBGeneratedMessage_Builder {
	FriendsTrackToplistsReply_FriendsTrackToplists* result; 
}
@property (retain) FriendsTrackToplistsReply_FriendsTrackToplists* result; 
-(id)buildPartial;
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)internalGetResult;
-(id)clone;
-(id)clearFriends;
-(id)setFriendsArray:(id)arg1;
-(BOOL)hasUri;
-(id)friendsAtIndex:(unsigned)arg1;
-(id)addFriends:(id)arg1;
-(id)clearUri;
-(id)setFriendsValues:(id*)arg1 count:(unsigned)arg2;
-(id)defaultInstance;
-(id)friends;
-(void)dealloc;
-(id)init;
-(id)clear;
-(void)setResult:(id)arg1;
-(id)uri;
-(id)build;
-(id)setUri:(id)arg1;
@end