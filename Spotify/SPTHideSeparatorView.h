/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:27 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTHideSeparatorView : UIView <SPTThemableView> {
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
}
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)hideSeparatorViewForCell:(id)arg1;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void).cxx_destruct;
@end