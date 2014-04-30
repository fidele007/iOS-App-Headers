/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:04 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <AdsUnitDelegate.h>

@interface AdsBreak : NSObject <AdsUnitDelegate> {
	BOOL _isReadyToPlay; 
	BOOL _inProgress; 
	BOOL _rewardEarned; 
	id<AdsBreakDelegate> _breakDelegate; 
	id<AdsPlaybackDelegate> _playbackDelegate; 
	int _rewardTime; 
	AdsUnit* _currentUnit; 
	AdsUnit* _tappedUnit; 
	AdsUnit* _upcomingUnit; 
	LaserTagResponse* _response; 
}
@property (assign,nonatomic,__weak) id<AdsBreakDelegate> breakDelegate; 				//@synthesize breakDelegate=_breakDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AdsPlaybackDelegate> playbackDelegate; 				//@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (nonatomic,copy) AdsUnitView* view; 
@property (assign,nonatomic) BOOL isReadyToPlay; 				//@synthesize isReadyToPlay=_isReadyToPlay - In the implementation block
@property (assign,nonatomic) BOOL inProgress; 				//@synthesize inProgress=_inProgress - In the implementation block
@property (assign,nonatomic) BOOL rewardEarned; 				//@synthesize rewardEarned=_rewardEarned - In the implementation block
@property (assign,nonatomic) int rewardTime; 				//@synthesize rewardTime=_rewardTime - In the implementation block
@property (nonatomic,retain) AdsUnit* currentUnit; 				//@synthesize currentUnit=_currentUnit - In the implementation block
@property (nonatomic,retain) AdsUnit* tappedUnit; 				//@synthesize tappedUnit=_tappedUnit - In the implementation block
@property (nonatomic,retain) AdsUnit* upcomingUnit; 				//@synthesize upcomingUnit=_upcomingUnit - In the implementation block
@property (nonatomic,retain) LaserTagResponse* response; 				//@synthesize response=_response - In the implementation block
-(void)setIsReadyToPlay:(BOOL)arg1;
-(void)setRewardEarned:(BOOL)arg1;
-(void)setRewardTime:(int)arg1;
-(void)setCurrentUnit:(id)arg1;
-(void)setTappedUnit:(id)arg1;
-(void)setUpcomingUnit:(id)arg1;
-(void)initAdUnit;
-(void)switchAdUnit:(id)arg1;
-(id)initWithLaserTagResponse:(id)arg1;
-(void)setBreakDelegate:(id)arg1;
-(void)setupVideoLayer;
-(void)tearDownVideoLayer;
-(void)playBackgrounded:(BOOL)arg1;
-(void)unitReadyToPlay:(id)arg1;
-(void)unitFailedToLoad:(id)arg1;
-(void)unitFinished:(id)arg1;
-(void)unitTapped:(int)arg1 withURL:(id)arg2;
-(void)unitTimedOut:(id)arg1;
-(void)skipCurrentAd;
-(BOOL)areControlsAllowed;
-(void)setResponse:(id)arg1;
-(void)setPlaybackDelegate:(id)arg1;
-(BOOL)isPlaying;
-(void)pause;
-(void)setInProgress:(BOOL)arg1;
-(void).cxx_destruct;
@end