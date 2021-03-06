/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:38 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGFilmStripView : UIView {
	NSCache* _thumbnailCache; 
	float _firstTumbnailTime; 
	float _pixelsPerSecond; 
	float _maxVideoDuration; 
	float _secondsPerThumbnail; 
	BOOL _generatingThumbnails; 
	AVURLAsset* _asset; 
	AVAssetImageGenerator* _imageGenerator; 
	UIView* _thumbnailContainerView; 
	NSMutableIndexSet* _loadedImagesSet; 
}
@property (nonatomic,retain) AVURLAsset* asset; 				//@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetImageGenerator* imageGenerator; 				//@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,retain) UIView* thumbnailContainerView; 				//@synthesize thumbnailContainerView=_thumbnailContainerView - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet* loadedImagesSet; 				//@synthesize loadedImagesSet=_loadedImagesSet - In the implementation block
-(void)updateVisibleThumbnails;
-(id)initWithFrame:(CGRect)arg1 maxVideoDuration:(float)arg2 pixelsPerSecond:(float)arg3 secondsPerThumbnail:(float)arg4;
-(void)setThumbnail:(id)arg1 forIndex:(unsigned)arg2;
-(void)setLoadedImagesSet:(id)arg1;
-(void)generateVisibleThumbnails:(id)arg1;
-(id)cachedThumbnailForIndex:(unsigned)arg1;
-(id)cacheKeyForIndex:(unsigned)arg1;
-(void)setThumbnailContainerView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)layoutSubviews;
-(void)setAsset:(id)arg1;
-(void)setImageGenerator:(id)arg1;
-(void).cxx_destruct;
@end