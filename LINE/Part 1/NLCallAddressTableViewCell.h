/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:00 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLCallAddressTableViewCell : NLCallCommonTableViewCell {
	NLCallImageView* _imageViewProfile; 
	NMAttributedLabel* _viewName; 
	NLCallSenderButton* _buttonCall; 
	UIView* _viewVerticalLine; 
	UIView* _viewBottomLine; 
}
@property (assign,nonatomic) NLCallImageView* imageViewProfile; 				//@synthesize imageViewProfile=_imageViewProfile - In the implementation block
@property (assign,nonatomic) NMAttributedLabel* viewName; 				//@synthesize viewName=_viewName - In the implementation block
@property (assign,nonatomic) NLCallSenderButton* buttonCall; 				//@synthesize buttonCall=_buttonCall - In the implementation block
@property (assign,nonatomic) UIView* viewVerticalLine; 				//@synthesize viewVerticalLine=_viewVerticalLine - In the implementation block
@property (assign,nonatomic) UIView* viewBottomLine; 				//@synthesize viewBottomLine=_viewBottomLine - In the implementation block
+(id)viewFromNib;
-(void)setButtonCall:(id)arg1;
-(void)initDefault;
-(void)setUserInfo:(id)arg1 withDelegate:(id)arg2 withSearchKeyword:(id)arg3;
-(void)actionButtonCall:(id)arg1;
-(void)setImageViewProfile:(id)arg1;
-(void)setViewName:(id)arg1;
-(void)setViewVerticalLine:(id)arg1;
-(void)setViewBottomLine:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@end