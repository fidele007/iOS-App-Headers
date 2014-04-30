/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:49 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTTableView : UITableView <SPTThemableView> {
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
}
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)dealloc;
-(void)layoutSubviews;
-(float)rowHeight;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2;
-(void).cxx_destruct;
@end