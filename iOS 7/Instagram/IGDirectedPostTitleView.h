/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:53 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIGestureRecognizerDelegate.h>

@interface IGDirectedPostTitleView : UIView <UIGestureRecognizerDelegate> {
	id<IGDirectedPostTitleViewDelegate> _delegate; 
	IGPost* _post; 
	UILabel* _titleLabel; 
}
@property (assign,nonatomic,__weak) id<IGDirectedPostTitleViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGPost* post; 				//@synthesize post=_post - In the implementation block
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
-(void)setPost:(id)arg1;
-(void)buildComposedName;
-(void)handleTap:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(void)setTitleLabel:(id)arg1;
-(void).cxx_destruct;
@end