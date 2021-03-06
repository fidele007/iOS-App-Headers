/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:26 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface InboxController : NSObject {
	SPPlaylistContext* _context; 
	PlayController* _playController; 
}
@property (nonatomic,copy) SPPlaylist* playlist; 
@property (nonatomic,retain) SPPlaylistContext* context; 				//@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PlayController* playController; 				//@synthesize playController=_playController - In the implementation block
-(void)setPlayController:(id)arg1;
-(id)initWithPlayController:(id)arg1;
-(void)unreadCountChanged;
-(void)dealloc;
-(void)setContext:(id)arg1;
@end