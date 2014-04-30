/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:37 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface UpsellButtonView : UIView <SPTThemableView> {
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	UIButton* _primaryButton; 
	UIButton* _secondaryButton; 
}
@property (retain) UIButton* primaryButton; 				//@synthesize primaryButton=_primaryButton - In the implementation block
@property (retain) UIButton* secondaryButton; 				//@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(id)initWithFrame:(CGRect)arg1 withPrimaryButtonTitle:(id)arg2 withSecondaryButtonTitle:(id)arg3;
-(void)setPrimaryButton:(id)arg1;
-(void)setSecondaryButton:(id)arg1;
-(void)dealloc;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end