/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:54 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBIndicatorLayerView : UIView {
	UIImageView* mBgImage; 
	UIActivityIndicatorView* mIndicatorView; 
	UIImageView* mIconView; 
	UILabel* mMessageLabel; 
	int mType; 
	CGRect _superRect; 
}
@property (assign,nonatomic) CGRect superRect; 				//@synthesize superRect=_superRect - In the implementation block
+(id)indicatorLayerView;
+(id)indicatorLayerViewWithType:(int)arg1;
-(void)hideWithDuration:(float)arg1;
-(void)setSuperRect:(CGRect)arg1;
-(void)showWithLoadingMessage:(id)arg1;
-(void)layoutViews;
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 type:(int)arg2;
-(void).cxx_destruct;
@end