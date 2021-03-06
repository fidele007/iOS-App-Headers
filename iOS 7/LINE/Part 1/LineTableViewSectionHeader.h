/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:01 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineTableViewSectionHeader : UIView {
	UILabel* titleLabel_; 
	UIView* topBar_; 
	BOOL tapCapable_; 
	BOOL collapsed_; 
	CALayer* topBar1pxLayer_; 
	UIView* favoriteIconView_; 
	UIImageView* arrowView_; 
	id<LineTableViewSectionHeaderDelegate> delegate_; 
	UIView* _bottomBar; 
}
@property (nonatomic,copy) UIView* topBar; 
@property (nonatomic,retain) CALayer* topBar1pxLayer; 
@property (nonatomic,retain) UIView* bottomBar; 				//@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,copy) UIView* favoriteIconView; 
@property (nonatomic,copy) UIImageView* arrowView; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (assign,getter=isTapCapable,nonatomic) BOOL tapCapable; 
@property (assign,nonatomic) id<LineTableViewSectionHeaderDelegate> delegate; 
+(id)headerViewWithText:(id)arg1;
-(id)initWithTitleLabelText:(id)arg1;
-(void)setTitleLabelText:(id)arg1;
-(id)initWithFrame:(CGRect)arg1 forTapCapable:(BOOL)arg2;
-(void)setTapCapable:(BOOL)arg1;
-(void)headerTapped;
-(id)initForTapAction;
-(void)setTopBar1pxLayer:(id)arg1;
-(BOOL)render;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)layoutSubviews;
-(void)setCollapsed:(BOOL)arg1;
-(void)setBottomBar:(id)arg1;
-(void).cxx_destruct;
@end