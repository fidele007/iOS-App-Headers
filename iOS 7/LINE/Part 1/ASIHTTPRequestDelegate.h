/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:06 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol ASIHTTPRequestDelegate
@optional
-(void)requestStarted(id):arg1 ;
-(void)request(id):arg1 didReceiveResponseHeaders(id):arg2 ;
-(void)request(id):arg1 willRedirectToURL(id):arg2 ;
-(void)requestFinished(id):arg1 ;
-(void)requestFailed(id):arg1 ;
-(void)requestRedirected(id):arg1 ;
-(void)request(id):arg1 didReceiveData(id):arg2 ;
-(void)authenticationNeededForRequest(id):arg1 ;
-(void)proxyAuthenticationNeededForRequest(id):arg1 ;
@end