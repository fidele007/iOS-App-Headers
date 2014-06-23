/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:26 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface HitokotoBalloonView : UIView {
	NSString* label_; 
	float maximumWidth_; 
	UIFont* font_; 
	NMAttributedLabel* sLabel; 
	unsigned direction_; 
	BOOL useHighlightedImage_; 
	UIImageView* arrow_; 
	UIButton* button_; 
	unsigned color_; 
	int customColor_; 
	struct UIEdgeInsets insets_; 
	BOOL isAppliedEdgeInset_; 
	id<HitokotoBalloonViewDelegate> delegate; 
}
@property (nonatomic,retain) NSString* label; 
@property (assign,nonatomic) float maximumWidth; 
@property (nonatomic,retain) UIFont* font; 
@property (assign,nonatomic) id<HitokotoBalloonViewDelegate> delegate; 
@property (assign,nonatomic) BOOL useHighlightedImage; 
@property (assign,nonatomic) unsigned color; 
-(id)initWithDirection:(unsigned)arg1;
-(void)renderWithRuleset:(id)arg1;
-(void)updateBackground;
-(void)setUseHighlightedImage:(BOOL)arg1;
-(void)showArrow:(BOOL)arg1;
-(CGSize)render;
-(void)onTouchUpInside:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)accessibilityLabel;
-(void)setFont:(id)arg1;
-(void)setMaximumWidth:(float)arg1;
-(void)setLabel:(id)arg1;
-(void)setColor:(unsigned)arg1;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void).cxx_destruct;
@end