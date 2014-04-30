/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:15 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTProgressView : UIView <SPTThemableView> {
	BOOL _loadingViewShown; 
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	unsigned _mode; 
	unsigned _customIcon; 
	UIView* _containerView; 
	UIView* _indicatorView; 
	UILabel* _titleLabel; 
}
@property (nonatomic,copy) NSString* title; 
@property (assign,nonatomic) unsigned mode; 				//@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned customIcon; 				//@synthesize customIcon=_customIcon - In the implementation block
@property (nonatomic,retain) UIView* containerView; 				//@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView* indicatorView; 				//@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign) BOOL loadingViewShown; 				//@synthesize loadingViewShown=_loadingViewShown - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)progressView;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)setCustomIcon:(unsigned)arg1;
-(void)showInView:(id)arg1 afterDelay:(double)arg2;
-(void)hideAfterDelay:(double)arg1;
-(void)updateProgressMode;
-(void)setLoadingViewShown:(BOOL)arg1;
-(void)triggerAnimations;
-(void)animateShowing;
-(void)animateHiding;
-(void)setIndicatorView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1;
-(void)setMode:(unsigned)arg1;
-(void)hide;
-(void)showInView:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setContainerView:(id)arg1;
-(void).cxx_destruct;
@end