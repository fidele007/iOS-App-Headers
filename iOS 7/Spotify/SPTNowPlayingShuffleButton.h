/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:22 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTNowPlayingShuffleButton : UIButton <SPTThemableView> {
	BOOL _shuffling; 
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
}
@property (assign,getter=isShuffling,nonatomic) BOOL shuffling; 				//@synthesize shuffling=_shuffling - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)button;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)setShuffling:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)description;
-(void).cxx_destruct;
@end