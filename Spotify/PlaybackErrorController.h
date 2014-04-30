/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:32 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PlaybackErrorController : NSObject {
	SPTrack* errorTrack; 
	id<PlaybackErrorControllerDelegate> _delegate; 
	NSPointerArray* _observers; 
}
@property (assign,nonatomic,__weak) id<PlaybackErrorControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SPTrack* errorTrack; 
@property (nonatomic,retain) NSPointerArray* observers; 				//@synthesize observers=_observers - In the implementation block
+(int)chooseDialogForAvailability:(int)arg1 streamability:(int)arg2 connectivity:(int)arg3;
+(int)chooseDialogForTrackAvailability:(int)arg1;
+(id)nameForDialog:(int)arg1;
-(void)disableForceOffline;
-(void)handlePlaybackError:(id)arg1;
-(void)desktopUpsell;
-(void)learnAboutSyncing;
-(void)setErrorTrack:(id)arg1;
-(BOOL)alertForDialog:(int)arg1;
-(BOOL)showUpsellForTrack:(id)arg1 usingDialog:(int)arg2;
-(BOOL)showPlaybackErrorForTrack:(id)arg1 availability:(int)arg2;
-(void)popNowPlayingView;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)removeObserver:(id)arg1;
-(void)setObservers:(id)arg1;
-(void)addObserver:(id)arg1;
-(void).cxx_destruct;
@end