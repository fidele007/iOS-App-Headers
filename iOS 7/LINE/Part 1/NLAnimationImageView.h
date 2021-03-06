/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:08 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLAnimationImageView : UIImageView {
	BOOL _isInAnimation; 
	BOOL _isDecoding; 
	BOOL _isPlayingReserved; 
	BOOL _isPlayingAnimationReserved; 
	BOOL _isPlayingSoundReserved; 
	id _completionBlock; 
	NSURL* _animationFileUrl; 
	NSURL* _soundFileUrl; 
	NLApngObject* _apngObject; 
	CAKeyframeAnimation* _keyFrameAnimation; 
	NSString* _soundCategoryReserved; 
	AVAudioPlayer* _soundPlayer; 
}
@property (nonatomic,copy) id completionBlock; 				//@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSURL* animationFileUrl; 				//@synthesize animationFileUrl=_animationFileUrl - In the implementation block
@property (nonatomic,retain) NSURL* soundFileUrl; 				//@synthesize soundFileUrl=_soundFileUrl - In the implementation block
@property (nonatomic,retain) NLApngObject* apngObject; 				//@synthesize apngObject=_apngObject - In the implementation block
@property (nonatomic,retain) CAKeyframeAnimation* keyFrameAnimation; 				//@synthesize keyFrameAnimation=_keyFrameAnimation - In the implementation block
@property (assign,nonatomic) BOOL isInAnimation; 				//@synthesize isInAnimation=_isInAnimation - In the implementation block
@property (assign,nonatomic) BOOL isDecoding; 				//@synthesize isDecoding=_isDecoding - In the implementation block
@property (assign,nonatomic) BOOL isPlayingReserved; 				//@synthesize isPlayingReserved=_isPlayingReserved - In the implementation block
@property (assign,nonatomic) BOOL isPlayingAnimationReserved; 				//@synthesize isPlayingAnimationReserved=_isPlayingAnimationReserved - In the implementation block
@property (assign,nonatomic) BOOL isPlayingSoundReserved; 				//@synthesize isPlayingSoundReserved=_isPlayingSoundReserved - In the implementation block
@property (nonatomic,retain) NSString* soundCategoryReserved; 				//@synthesize soundCategoryReserved=_soundCategoryReserved - In the implementation block
@property (nonatomic,retain) AVAudioPlayer* soundPlayer; 				//@synthesize soundPlayer=_soundPlayer - In the implementation block
+(void)stopCurrentlyPlayingSound;
+(void)initialize;
-(void)clearAnimation;
-(void)clearSound;
-(void)playContentsOfAnimation:(BOOL)arg1 sound:(BOOL)arg2 soundCategory:(id)arg3;
-(void)setupAnimationOfURL:(id)arg1;
-(void)setupSoundOfURL:(id)arg1;
-(void)setIsInAnimation:(BOOL)arg1;
-(void)setAnimationFileUrl:(id)arg1;
-(void)setIsDecoding:(BOOL)arg1;
-(void)setApngObject:(id)arg1;
-(void)setIsPlayingReserved:(BOOL)arg1;
-(void)setIsPlayingAnimationReserved:(BOOL)arg1;
-(void)setIsPlayingSoundReserved:(BOOL)arg1;
-(void)setSoundCategoryReserved:(id)arg1;
-(void)setSoundPlayer:(id)arg1;
-(void)setSoundFileUrl:(id)arg1;
-(void)clearBlocks;
-(void)setKeyFrameAnimation:(id)arg1;
-(void)stopPlaying;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
-(void)willMoveToSuperview:(id)arg1;
-(void)setCompletionBlock:(id)arg1;
-(void)playSound;
-(void).cxx_destruct;
@end