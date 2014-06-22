/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:32 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGAssetPlayerView : UIView {
	BOOL _isPlaying; 
	BOOL _seeking; 
	AVAsset* _asset; 
	id<IGAssetPlayerViewDelegate> _delegate; 
	AVPlayer* _player; 
	AVPlayerLayer* _playerLayer; 
	id _currentTimeObserver; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} _startTime; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} _seekTime; 
}
@property (nonatomic,retain) AVAsset* asset; 				//@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) struct startTime; 				//@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) struct endTime; 
@property (assign,nonatomic) BOOL isPlaying; 				//@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic,__weak) id<IGAssetPlayerViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayer* player; 				//@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerLayer* playerLayer; 				//@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) id currentTimeObserver; 				//@synthesize currentTimeObserver=_currentTimeObserver - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking; 				//@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) struct seekTime; 				//@synthesize seekTime=_seekTime - In the implementation block
-(void)playFromStart;
-(void)playFromTime:(struct )arg1;
-(void)onPlayerItemPlayedToEnd;
-(void)registerCurrentTimeObserver;
-(void)setCurrentTimeObserver:(id)arg1;
-(void)seekToTime:(struct )arg1;
-(void)setSeeking:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(void)setStartTime:(struct )arg1;
-(void)setAsset:(id)arg1;
-(void)stop;
-(void)setPlayerLayer:(id)arg1;
-(void)setEndTime:(struct )arg1;
-(void).cxx_destruct;
-(void)setPlayer:(id)arg1;
-(void)setSeekTime:(struct )arg1;
-(void)setIsPlaying:(BOOL)arg1;
@end