/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:41 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBLoginDialog : FBDialog {
	id<FBLoginDialogDelegate> _loginDelegate; 
}
-(id)initWithURL:(id)arg1 loginParams:(id)arg2 delegate:(id)arg3;
-(void)dialogDidSucceed:(id)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(void)dialogDidCancel:(id)arg1;
@end