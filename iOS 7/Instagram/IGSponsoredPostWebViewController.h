/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:55 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface IGSponsoredPostWebViewController : IGViewController <UIWebViewDelegate> {
	IGWebView* _webView; 
	UIActivityIndicatorView* _spinner; 
}
@property (nonatomic,retain) IGWebView* webView; 				//@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* spinner; 				//@synthesize spinner=_spinner - In the implementation block
-(void)onCloseTapped;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setWebView:(id)arg1;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidStartLoad:(id)arg1;
-(void)webViewDidFinishLoad:(id)arg1;
-(void)setSpinner:(id)arg1;
-(void).cxx_destruct;
@end