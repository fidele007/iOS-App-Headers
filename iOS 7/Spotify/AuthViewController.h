/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:36 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface AuthViewController : UIViewController <UIWebViewDelegate> {
	UIWebView* _webView; 
	UIActivityIndicatorView* _activityIndicatorView; 
	SPWebTokenRequest* _webTokenRequest; 
	NSString* _webToken; 
	NSURL* _URL; 
}
@property (nonatomic,retain) UIWebView* webView; 				//@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* activityIndicatorView; 				//@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) SPWebTokenRequest* webTokenRequest; 				//@synthesize webTokenRequest=_webTokenRequest - In the implementation block
@property (nonatomic,retain) NSString* webToken; 				//@synthesize webToken=_webToken - In the implementation block
@property (nonatomic,retain) NSURL* URL; 				//@synthesize URL=_URL - In the implementation block
-(void)setActivityIndicatorView:(id)arg1;
-(void)setWebTokenRequest:(id)arg1;
-(void)setWebToken:(id)arg1;
-(void)loadWebView;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)setWebView:(id)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(void)setURL:(id)arg1;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidStartLoad:(id)arg1;
-(void)webViewDidFinishLoad:(id)arg1;
-(id)initWithURL:(id)arg1;
-(void).cxx_destruct;
@end