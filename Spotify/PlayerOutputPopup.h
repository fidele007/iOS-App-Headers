/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:11 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PlayerOutputPopup : UIView {
	BOOL _animating; 
	UIImageView* _backgroundView; 
	UIImageView* _arrowView; 
	UIImage* _downArrow; 
	UIImage* _arrow; 
	MPVolumeView* _volumeView; 
}
@property (nonatomic,retain) UIImageView* backgroundView; 				//@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView* arrowView; 				//@synthesize arrowView=_arrowView - In the implementation block
@property (nonatomic,retain) UIImage* downArrow; 				//@synthesize downArrow=_downArrow - In the implementation block
@property (nonatomic,retain) UIImage* arrow; 				//@synthesize arrow=_arrow - In the implementation block
@property (nonatomic,retain) MPVolumeView* volumeView; 				//@synthesize volumeView=_volumeView - In the implementation block
@property (assign,nonatomic) BOOL animating; 				//@synthesize animating=_animating - In the implementation block
-(void)setArrowView:(id)arg1;
-(void)setArrow:(id)arg1;
-(void)setDownArrow:(id)arg1;
-(void)showAtPoint:(CGPoint)arg1 isDown:(BOOL)arg2;
-(id)init;
-(void)setBackgroundView:(id)arg1;
-(float)height;
-(void)setAnimating:(BOOL)arg1;
-(void)hide;
-(void)setVolumeView:(id)arg1;
-(void).cxx_destruct;
@end