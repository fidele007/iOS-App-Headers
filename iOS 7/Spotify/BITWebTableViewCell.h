/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:25 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface BITWebTableViewCell : UITableViewCell <UIWebViewDelegate> {
	UIWebView* _webView; 
	NSString* _webViewContent; 
	UIColor* _cellBackgroundColor; 
	CGSize _webViewSize; 
}
@property (nonatomic,retain) UIWebView* webView; 				//@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString* webViewContent; 				//@synthesize webViewContent=_webViewContent - In the implementation block
@property (assign,nonatomic) CGSize webViewSize; 				//@synthesize webViewSize=_webViewSize - In the implementation block
@property (nonatomic,retain) UIColor* cellBackgroundColor; 				//@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
-(void)setWebViewContent:(id)arg1;
-(void)setCellBackgroundColor:(id)arg1;
-(void)addWebView;
-(void)removeWebView;
-(void)showWebView;
-(void)setWebViewSize:(CGSize)arg1;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)prepareForReuse;
-(void)setWebView:(id)arg1;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidFinishLoad:(id)arg1;
-(void).cxx_destruct;
@end