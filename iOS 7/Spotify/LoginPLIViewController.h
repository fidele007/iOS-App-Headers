/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:49 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface LoginPLIViewController : SPTWelcomeViewController <UIWebViewDelegate> {
	UIWebView* _webView; 
	UIView* _statusbarBlurBackground; 
}
@property (nonatomic,copy) UIWebView* webView; 				//@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) UIView* statusbarBlurBackground; 				//@synthesize statusbarBlurBackground=_statusbarBlurBackground - In the implementation block
-(id)viewEventURI;
-(id)initWithLoginPLIController:(id)arg1;
-(void)navigateToLoginViewController;
-(BOOL)shouldWrapInScrollView;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidFinishLoad:(id)arg1;
-(void).cxx_destruct;
@end