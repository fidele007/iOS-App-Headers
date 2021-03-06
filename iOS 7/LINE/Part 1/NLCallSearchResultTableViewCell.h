/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:43 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLCallSearchResultTableViewCell : NLCallCommonTableViewCell {
	NLCallUserInfo* mUserInfo; 
	NSString* mUserPhoneNumberInputed; 
	NLCallImageView* _imageViewProfile; 
	UILabel* _labelUserName; 
	NMAttributedLabel* _viewPhoneNumber; 
	UIView* _viewBottomLine; 
}
@property (assign,nonatomic) NLCallImageView* imageViewProfile; 				//@synthesize imageViewProfile=_imageViewProfile - In the implementation block
@property (assign,nonatomic) UILabel* labelUserName; 				//@synthesize labelUserName=_labelUserName - In the implementation block
@property (assign,nonatomic) NMAttributedLabel* viewPhoneNumber; 				//@synthesize viewPhoneNumber=_viewPhoneNumber - In the implementation block
@property (assign,nonatomic) UIView* viewBottomLine; 				//@synthesize viewBottomLine=_viewBottomLine - In the implementation block
+(id)viewFromNib;
-(void)setUserInfo:(id)arg1 withUserNumberInputed:(id)arg2;
-(void)setImageViewProfile:(id)arg1;
-(void)setViewBottomLine:(id)arg1;
-(void)setLabelUserName:(id)arg1;
-(void)setViewPhoneNumber:(id)arg1;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
@end