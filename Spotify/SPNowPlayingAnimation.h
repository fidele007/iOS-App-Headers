/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:21 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPNowPlayingAnimation : SPAnimation {
	CGPoint _minimizedCoverPosition; 
	CGPoint _maximizedCoverPosition; 
	BOOL _makeVisible; 
	UIView* _interstitial; 
	NowPlayingViewController* _nowPlaying; 
	CoverArtView* _npTransitionCover; 
	UIView* _npVignette; 
	UIView* _npVignetteOriginalParent; 
	UIImage* _coverImage; 
	CGRect _targetRect; 
}
@property (nonatomic,retain) UIView* interstitial; 				//@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,retain) NowPlayingViewController* nowPlaying; 				//@synthesize nowPlaying=_nowPlaying - In the implementation block
@property (assign,nonatomic) BOOL makeVisible; 				//@synthesize makeVisible=_makeVisible - In the implementation block
@property (nonatomic,retain) UIImage* coverImage; 				//@synthesize coverImage=_coverImage - In the implementation block
@property (assign,nonatomic) CGRect targetRect; 				//@synthesize targetRect=_targetRect - In the implementation block
@property (nonatomic,retain) CoverArtView* npTransitionCover; 				//@synthesize npTransitionCover=_npTransitionCover - In the implementation block
@property (nonatomic,retain) UIView* npVignette; 				//@synthesize npVignette=_npVignette - In the implementation block
@property (nonatomic,retain) UIView* npVignetteOriginalParent; 				//@synthesize npVignetteOriginalParent=_npVignetteOriginalParent - In the implementation block
-(void)setMakeVisible:(BOOL)arg1;
-(void)setInterstitial:(id)arg1;
-(void)setCoverImage:(id)arg1;
-(void)setNpTransitionCover:(id)arg1;
-(void)setNpVignette:(id)arg1;
-(void)setNpVignetteOriginalParent:(id)arg1;
-(void)startShowAnimation;
-(void)startHideAnimation;
-(void)animationCleanup;
-(void)startAnimation;
-(void)run;
-(void)setTargetRect:(CGRect)arg1;
-(void)setNowPlaying:(id)arg1;
-(void).cxx_destruct;
@end