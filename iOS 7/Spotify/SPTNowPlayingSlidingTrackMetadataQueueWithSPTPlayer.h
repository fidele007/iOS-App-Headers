/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:45 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTPlayerObserver.h>

@interface SPTNowPlayingSlidingTrackMetadataQueueWithSPTPlayer : SPTNowPlayingSlidingTrackMetadataQueue <SPTPlayerObserver> {
	SPTPlayer* _player; 
	SPTPlayerState* _lastUpdateState; 
	int _reverseDepth; 
	int _futureDepth; 
	int _currentIndex; 
	NSURL* _currentContextURL; 
	NSURL* _currentTrackURI; 
	NSURL* _nextTrackURI; 
	NSURL* _previousTrackURI; 
}
@property (nonatomic,retain) SPTPlayer* player; 				//@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SPTPlayerState* lastUpdateState; 				//@synthesize lastUpdateState=_lastUpdateState - In the implementation block
@property (assign,nonatomic) int reverseDepth; 				//@synthesize reverseDepth=_reverseDepth - In the implementation block
@property (assign,nonatomic) int futureDepth; 				//@synthesize futureDepth=_futureDepth - In the implementation block
@property (assign,nonatomic) int currentIndex; 				//@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) NSURL* currentContextURL; 				//@synthesize currentContextURL=_currentContextURL - In the implementation block
@property (nonatomic,retain) NSURL* currentTrackURI; 				//@synthesize currentTrackURI=_currentTrackURI - In the implementation block
@property (nonatomic,retain) NSURL* nextTrackURI; 				//@synthesize nextTrackURI=_nextTrackURI - In the implementation block
@property (nonatomic,retain) NSURL* previousTrackURI; 				//@synthesize previousTrackURI=_previousTrackURI - In the implementation block
-(void)skipToPreviousTrack;
-(void)skipToNextTrack;
-(void)player:(id)arg1 stateDidChange:(id)arg2;
-(void)loadSlidingTrackMetadataQueue;
-(BOOL)canUserPeekAtTrackAtRelativePosition:(int)arg1;
-(id)trackAtRelativePositionWithPeekingAllowed:(int)arg1;
-(id)trackAtRelativePosition:(int)arg1;
-(void)setNextTrackURI:(id)arg1;
-(void)setPreviousTrackURI:(id)arg1;
-(void)setCurrentTrackURI:(id)arg1;
-(void)setCurrentContextURL:(id)arg1;
-(void)setLastUpdateState:(id)arg1;
-(id)relativeTrackIndexForPlayerState:(id)arg1;
-(id)initWithPlayer:(id)arg1 reverseDepth:(int)arg2 futureDepth:(int)arg3 delegate:(id)arg4;
-(void)setReverseDepth:(int)arg1;
-(void)setFutureDepth:(int)arg1;
-(void)setCurrentIndex:(int)arg1;
-(void).cxx_destruct;
-(void)setPlayer:(id)arg1;
@end