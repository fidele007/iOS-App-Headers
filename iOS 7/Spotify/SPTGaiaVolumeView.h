/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:33 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTGaiaVolumeView : UIView <SPTThemableView> {
	BOOL _shouldShowRemoteVolumeSlider; 
	BOOL _remoteVolumeEnabled; 
	id<SPTThemableViewLayoutDelegate> layoutDelegate; 
	id _remoteVolumeChangedBlock; 
	MPVolumeView* _internalVolumeSlider; 
	UISlider* _remoteVolumeSlider; 
	UIImageView* _volumeIconView; 
}
@property (assign,nonatomic) BOOL shouldShowRemoteVolumeSlider; 				//@synthesize shouldShowRemoteVolumeSlider=_shouldShowRemoteVolumeSlider - In the implementation block
@property (assign,getter=isRemoteVolumeEnabled,nonatomic) BOOL remoteVolumeEnabled; 				//@synthesize remoteVolumeEnabled=_remoteVolumeEnabled - In the implementation block
@property (assign,nonatomic) float remoteVolume; 
@property (nonatomic,copy) id remoteVolumeChangedBlock; 				//@synthesize remoteVolumeChangedBlock=_remoteVolumeChangedBlock - In the implementation block
@property (nonatomic,retain) MPVolumeView* internalVolumeSlider; 				//@synthesize internalVolumeSlider=_internalVolumeSlider - In the implementation block
@property (nonatomic,retain) UISlider* remoteVolumeSlider; 				//@synthesize remoteVolumeSlider=_remoteVolumeSlider - In the implementation block
@property (nonatomic,retain) UIImageView* volumeIconView; 				//@synthesize volumeIconView=_volumeIconView - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)createVolumeViewWithFrame:(CGRect)arg1;
-(void)remoteVolumeSliderChanged:(id)arg1;
-(void)setupSliderAppearance;
-(void)setupSliderLegacyAppearance;
-(void)setInternalVolumeSlider:(id)arg1;
-(void)setRemoteVolume:(float)arg1;
-(void)setRemoteVolumeEnabled:(BOOL)arg1;
-(void)setShouldShowRemoteVolumeSlider:(BOOL)arg1;
-(void)setRemoteVolumeChangedBlock:(id)arg1;
-(void)setRemoteVolumeSlider:(id)arg1;
-(void)setVolumeIconView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(CGSize)intrinsicContentSize;
-(void).cxx_destruct;
@end