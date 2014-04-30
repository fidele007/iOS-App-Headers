/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:47 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPVASTRequestDelegate.h>
#import <SPTHTTPImageLoaderDelegate.h>
#import <SPTNowPlayingDurationViewDataSource.h>

@interface AdsUnit : NSObject <SPVASTRequestDelegate, SPTHTTPImageLoaderDelegate, SPTNowPlayingDurationViewDataSource> {
	BOOL _isReadyToPlay; 
	BOOL _activePlayerStatusContextObserver; 
	BOOL _mediaLoaded; 
	BOOL _imageLoaded; 
	BOOL _playbackIsStalled; 
	BOOL _tapped; 
	int _adType; 
	NSDictionary* _metadata; 
	AdsUnitView* _view; 
	int _preferredBitrate; 
	id<AdsUnitDelegate> _delegate; 
	SPVASTRequest* _vastRequest; 
	SPTHTTPImageLoader* _imageLoader; 
	AVPlayer* _player; 
	NSDictionary* _currentMediaInfo; 
	id _playerObserver; 
	NSTimer* _bufferingTimer; 
	NSString* _title; 
	NSArray* _trackingEvents; 
	NSArray* _impressionURLs; 
	NSArray* _errorURLs; 
	NSURL* _clickThroughURL; 
	NSString* _mediaType; 
	NSURL* _bestMediaURL; 
	NSURL* _companionImageURL; 
	UIImage* _companionImage; 
	UIImage* _lockscreenCompanionImage; 
	UIControl* _playerView; 
}
@property (assign,nonatomic) int adType; 				//@synthesize adType=_adType - In the implementation block
@property (nonatomic,copy) BOOL isReadyToPlay; 				//@synthesize isReadyToPlay=_isReadyToPlay - In the implementation block
@property (nonatomic,retain) NSDictionary* metadata; 				//@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) AdsUnitView* view; 				//@synthesize view=_view - In the implementation block
@property (assign,nonatomic) int preferredBitrate; 				//@synthesize preferredBitrate=_preferredBitrate - In the implementation block
@property (assign,nonatomic,__weak) id<AdsUnitDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SPVASTRequest* vastRequest; 				//@synthesize vastRequest=_vastRequest - In the implementation block
@property (nonatomic,retain) SPTHTTPImageLoader* imageLoader; 				//@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) AVPlayer* player; 				//@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSDictionary* currentMediaInfo; 				//@synthesize currentMediaInfo=_currentMediaInfo - In the implementation block
@property (assign,nonatomic) id playerObserver; 				//@synthesize playerObserver=_playerObserver - In the implementation block
@property (assign,nonatomic) BOOL activePlayerStatusContextObserver; 				//@synthesize activePlayerStatusContextObserver=_activePlayerStatusContextObserver - In the implementation block
@property (nonatomic,retain) NSTimer* bufferingTimer; 				//@synthesize bufferingTimer=_bufferingTimer - In the implementation block
@property (assign,nonatomic) BOOL mediaLoaded; 				//@synthesize mediaLoaded=_mediaLoaded - In the implementation block
@property (assign,nonatomic) BOOL imageLoaded; 				//@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (assign,nonatomic) BOOL playbackIsStalled; 				//@synthesize playbackIsStalled=_playbackIsStalled - In the implementation block
@property (nonatomic,retain) NSString* title; 				//@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray* trackingEvents; 				//@synthesize trackingEvents=_trackingEvents - In the implementation block
@property (nonatomic,retain) NSArray* impressionURLs; 				//@synthesize impressionURLs=_impressionURLs - In the implementation block
@property (nonatomic,retain) NSArray* errorURLs; 				//@synthesize errorURLs=_errorURLs - In the implementation block
@property (nonatomic,retain) NSURL* clickThroughURL; 				//@synthesize clickThroughURL=_clickThroughURL - In the implementation block
@property (nonatomic,retain) NSString* mediaType; 				//@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSURL* bestMediaURL; 				//@synthesize bestMediaURL=_bestMediaURL - In the implementation block
@property (nonatomic,retain) NSURL* companionImageURL; 				//@synthesize companionImageURL=_companionImageURL - In the implementation block
@property (nonatomic,retain) UIImage* companionImage; 				//@synthesize companionImage=_companionImage - In the implementation block
@property (nonatomic,retain) UIImage* lockscreenCompanionImage; 				//@synthesize lockscreenCompanionImage=_lockscreenCompanionImage - In the implementation block
@property (assign,nonatomic) BOOL tapped; 				//@synthesize tapped=_tapped - In the implementation block
@property (assign,nonatomic,__weak) UIControl* playerView; 				//@synthesize playerView=_playerView - In the implementation block
+(id)supportedMimeTypes;
+(void)fireTrackingUrl:(id)arg1 forEvent:(id)arg2;
+(void)fireTrackingUrls:(id)arg1 forEvent:(id)arg2;
+(void)fireTrackingUrl:(id)arg1;
+(void)fireTrackingUrls:(id)arg1;
-(void)imageLoader:(id)arg1 didFinishLoadingImage:(id)arg2 forURL:(id)arg3 context:(id)arg4 loadedSynchronously:(BOOL)arg5;
-(void)setImageLoader:(id)arg1;
-(void)setClickThroughURL:(id)arg1;
-(void)setPlayerView:(id)arg1;
-(void)setTrackingEvents:(id)arg1;
-(void)setupVideoLayer;
-(void)tearDownVideoLayer;
-(void)playBackgrounded:(BOOL)arg1;
-(void)setPreferredBitrate:(int)arg1;
-(void)setupView;
-(void)setVastRequest:(id)arg1;
-(BOOL)parseAd:(id)arg1;
-(void)failedToLoad:(id)arg1 withError:(id)arg2;
-(void)setMediaLoaded:(BOOL)arg1;
-(void)setImageLoaded:(BOOL)arg1;
-(void)setPlaybackIsStalled:(BOOL)arg1;
-(void)setImpressionURLs:(id)arg1;
-(void)setErrorURLs:(id)arg1;
-(void)setBestMediaURL:(id)arg1;
-(void)setCompanionImageURL:(id)arg1;
-(void)setActivePlayerStatusContextObserver:(BOOL)arg1;
-(void)setPlayerObserver:(id)arg1;
-(void)preloaded;
-(void)playbackStalled;
-(void)bufferingTimedOut;
-(void)setBufferingTimer:(id)arg1;
-(void)setCompanionImage:(id)arg1;
-(void)setLockscreenCompanionImage:(id)arg1;
-(void)setTapped:(BOOL)arg1;
-(void)endAd;
-(void)enableVideo:(BOOL)arg1;
-(void)updateMediaItemInfo;
-(double)getPlaybackDuration;
-(void)onTap:(id)arg1;
-(void)request:(id)arg1 didFinishLoadingResponse:(id)arg2;
-(double)durationViewCurrentPosition:(id)arg1;
-(double)durationViewCurrentDuration:(id)arg1;
-(BOOL)durationViewShouldAnimate:(id)arg1;
-(BOOL)durationViewDisallowSeeking:(id)arg1;
-(id)initWithAdTagURL:(id)arg1;
-(void)skip;
-(id)addPlaybackTimeObserver:(id)arg1;
-(void)removePlaybackTimeObserver:(id)arg1;
-(void)setAdType:(int)arg1;
-(void)setCurrentMediaInfo:(id)arg1;
-(BOOL)isPlaying;
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)playbackFinished:(id)arg1;
-(void)playbackResumed;
-(void)preload;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(void)setView:(id)arg1;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void)pause;
-(void)setMediaType:(id)arg1;
-(void)setMetadata:(id)arg1;
-(void).cxx_destruct;
-(void)setPlayer:(id)arg1;
@end