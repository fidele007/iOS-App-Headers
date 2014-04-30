/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:20 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPSessionDelegate
@required
-(void)session(id):arg1 messageToUser(id):arg2 messageId(int):arg3 type(int):arg4 ;
-(void)session(id):arg1 autoUpdateWithURL(id):arg2 ;
-(void)session(id):arg1 incognitoModeChangedByTimeout(BOOL):arg2 ;
-(void)session(id):arg1 playlistError(id):arg2 ;
-(void)session(id):arg1 tokenLostError(id):arg2 ;
-(void)session(id):arg1 offlineSyncError(id):arg2 ;
-(void)session(id):arg1 temporaryConnectionError(id):arg2 ;
-(void)sessionProductStatedUpdated(id):arg1 ;
-(void)session(id):arg1 changedLoginMode(BOOL):arg2 ;
-(void)session(id):arg1 socialChange(int):arg2 description(id):arg3 ;
-(void)session(id):arg1 socialError(id):arg2 ;
-(void)session(id):arg1 playTrackCommand(id):arg2 ;
-(void)session(id):arg1 playCappingUpdated(id):arg2 ;
-(void)session(id):arg1 audioStreamerError(id):arg2 ;
-(void)session(id):arg1 messageToUser(id):arg2 messageId(int):arg3 type(int):arg4 ;
-(void)session(id):arg1 autoUpdateWithURL(id):arg2 ;
-(void)session(id):arg1 incognitoModeChangedByTimeout(BOOL):arg2 ;
-(void)session(id):arg1 playlistError(id):arg2 ;
-(void)session(id):arg1 tokenLostError(id):arg2 ;
-(void)session(id):arg1 offlineSyncError(id):arg2 ;
-(void)session(id):arg1 temporaryConnectionError(id):arg2 ;
-(void)sessionProductStatedUpdated(id):arg1 ;
-(void)session(id):arg1 changedLoginMode(BOOL):arg2 ;
-(void)session(id):arg1 socialChange(int):arg2 description(id):arg3 ;
-(void)session(id):arg1 socialError(id):arg2 ;
-(void)session(id):arg1 playTrackCommand(id):arg2 ;
-(void)session(id):arg1 playCappingUpdated(id):arg2 ;
-(void)session(id):arg1 audioStreamerError(id):arg2 ;
@end

@protocol SPTOfflineModeState
@property (getter=isOffline,nonatomic,copy) BOOL offline; 
@required
-(void)addOfflineModeObserver(id):arg1 ;
-(void)removeOfflineModeObserver(id):arg1 ;
-(BOOL)isOffline;
-(void)addOfflineModeObserver(id):arg1 ;
-(void)removeOfflineModeObserver(id):arg1 ;
-(BOOL)isOffline;
@end
