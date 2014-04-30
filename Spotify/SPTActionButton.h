/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:32 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTActionButton : UIButton <SPTThemableView> {
	BOOL _dynamicWidth; 
	BOOL _shouldDisplayIconOnRight; 
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	unsigned _size; 
	unsigned _style; 
	unsigned _iconAlignment; 
	NSMutableDictionary* _iconStates; 
	NSMutableDictionary* _backgroundColorStates; 
	NSMutableDictionary* _borderColorStates; 
	NSValue* _iconSizeValue; 
}
@property (nonatomic,copy) unsigned size; 				//@synthesize size=_size - In the implementation block
@property (nonatomic,copy) unsigned style; 				//@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned iconAlignment; 				//@synthesize iconAlignment=_iconAlignment - In the implementation block
@property (assign,nonatomic) BOOL dynamicWidth; 				//@synthesize dynamicWidth=_dynamicWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayIconOnRight; 				//@synthesize shouldDisplayIconOnRight=_shouldDisplayIconOnRight - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* iconStates; 				//@synthesize iconStates=_iconStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* backgroundColorStates; 				//@synthesize backgroundColorStates=_backgroundColorStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* borderColorStates; 				//@synthesize borderColorStates=_borderColorStates - In the implementation block
@property (nonatomic,retain) NSValue* iconSizeValue; 				//@synthesize iconSizeValue=_iconSizeValue - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)shuffleActionButton;
+(id)actionButtonWithSize:(unsigned)arg1 style:(unsigned)arg2;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)setIconAlignment:(unsigned)arg1;
-(void)setIcon:(unsigned)arg1 forState:(unsigned)arg2;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned)arg2;
-(void)setBorderColor:(id)arg1 forState:(unsigned)arg2;
-(id)initWithSize:(unsigned)arg1 style:(unsigned)arg2;
-(void)applyStyle;
-(void)applySize;
-(id)backgroundColorForState:(unsigned)arg1;
-(id)borderColorForState:(unsigned)arg1;
-(unsigned)iconForState:(unsigned)arg1;
-(void)setIconSizeValue:(id)arg1;
-(void)setIcon:(unsigned)arg1 title:(id)arg2 forState:(unsigned)arg3;
-(void)applyInsets;
-(void)setIcon:(unsigned)arg1 iconSize:(CGSize)arg2 title:(id)arg3 forState:(unsigned)arg4;
-(void)setShouldDisplayIconOnRight:(BOOL)arg1;
-(void)setIconStates:(id)arg1;
-(void)setBackgroundColorStates:(id)arg1;
-(void)setBorderColorStates:(id)arg1;
-(void)setDynamicWidth:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setFrame:(CGRect)arg1;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(void)setEnabled:(BOOL)arg1;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1;
-(void)setSelected:(BOOL)arg1;
-(void).cxx_destruct;
@end