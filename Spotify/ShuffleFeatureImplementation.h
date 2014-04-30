/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:31 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ShuffleProductStateWatcherDelegate.h>
#import <SPFeature.h>
#import <ShuffleFeature.h>

@interface ShuffleFeatureImplementation : NSObject <ShuffleProductStateWatcherDelegate, SPFeature, ShuffleFeature> {
	id<BaseFeature> _baseUI; 
	id<LegacyFeature> _legacy; 
	id<NowPlayingFeature> _nowplaying; 
	id<UpsellFeature> _upsell; 
	id<SPContextMenuFeature> _contextMenu; 
	ShuffleManagerImplementation* _shuffleManager; 
	ShufflePlaybackManager* _shufflePlaybackManager; 
	id<ShuffleControllerObjC> _shuffleController; 
	ShuffleProductStateWatcher* _productStateWatcher; 
	ShuffleViewsManagerImplementation* _shuffleViewsManager; 
}
@property (assign,nonatomic,__weak) id<BaseFeature> baseUI; 				//@synthesize baseUI=_baseUI - In the implementation block
@property (assign,nonatomic,__weak) id<LegacyFeature> legacy; 				//@synthesize legacy=_legacy - In the implementation block
@property (assign,nonatomic,__weak) id<NowPlayingFeature> nowplaying; 				//@synthesize nowplaying=_nowplaying - In the implementation block
@property (assign,nonatomic,__weak) id<UpsellFeature> upsell; 				//@synthesize upsell=_upsell - In the implementation block
@property (assign,nonatomic,__weak) id<SPContextMenuFeature> contextMenu; 				//@synthesize contextMenu=_contextMenu - In the implementation block
@property (nonatomic,retain) ShuffleManagerImplementation* shuffleManager; 				//@synthesize shuffleManager=_shuffleManager - In the implementation block
@property (nonatomic,retain) ShufflePlaybackManager* shufflePlaybackManager; 				//@synthesize shufflePlaybackManager=_shufflePlaybackManager - In the implementation block
@property (nonatomic,retain) id<ShuffleControllerObjC> shuffleController; 				//@synthesize shuffleController=_shuffleController - In the implementation block
@property (nonatomic,retain) ShuffleProductStateWatcher* productStateWatcher; 				//@synthesize productStateWatcher=_productStateWatcher - In the implementation block
@property (nonatomic,retain) ShuffleViewsManagerImplementation* shuffleViewsManager; 				//@synthesize shuffleViewsManager=_shuffleViewsManager - In the implementation block
+(id)featureIdentifier;
+(id)featureDependencies;
-(void)setShuffleManager:(id)arg1;
-(void)configureWithFeatures:(id)arg1;
-(void)setContextMenu:(id)arg1;
-(void)setUpsell:(id)arg1;
-(id)provideShuffleManager;
-(id)provideShuffleControllerObjC;
-(void)setShuffleController:(id)arg1;
-(void)setBaseUI:(id)arg1;
-(void)setNowplaying:(id)arg1;
-(void)enableShuffleMode;
-(void)setProductStateWatcher:(id)arg1;
-(void)setShufflePlaybackManager:(id)arg1;
-(void)setShuffleViewsManager:(id)arg1;
-(void)disableShuffleMode;
-(void)shuffleProductStateWatcherDidEnableShuffleMode:(id)arg1;
-(void)shuffleProductStateWatcherDidDisableShuffleMode:(id)arg1;
-(id)provideShufflePlaylistViewController:(id)arg1;
-(id)provideShuffleAlbumViewController:(id)arg1;
-(id)provideShuffleArtistViewController:(id)arg1;
-(id)provideShuffleViewsManager;
-(void)unload;
-(void)load;
-(void)setLegacy:(id)arg1;
-(void).cxx_destruct;
@end