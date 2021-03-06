/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:51 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LCNotificationPageView : UIView {
	UIWebView* mWebView; 
	UIImageView* mBackgroundView; 
	UIButton* mCloseButton; 
	UIActivityIndicatorView* mIndicator; 
	UIView* mIndicatorBackgroundView; 
	UIView* mErrorView; 
	LCNoticeErrorView* mErrorMessageView; 
}
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
-(void)startIndicatorAnimating;
-(void)stopIndicatorAnimating;
-(void)hideErrorUI;
-(void)showErrorUI;
-(void)dealloc;
-(void)layoutSubviews;
-(void)loadRequest:(id)arg1;
-(void)stopLoading;
@end