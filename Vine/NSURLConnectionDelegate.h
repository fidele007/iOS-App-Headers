/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:03 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol NSURLConnectionDelegate
@optional
-(void)connection(id):arg1 didFailWithError(id):arg2 ;
-(BOOL)connectionShouldUseCredentialStorage(id):arg1 ;
-(void)connection(id):arg1 willSendRequestForAuthenticationChallenge(id):arg2 ;
-(BOOL)connection(id):arg1 canAuthenticateAgainstProtectionSpace(id):arg2 ;
-(void)connection(id):arg1 didReceiveAuthenticationChallenge(id):arg2 ;
-(void)connection(id):arg1 didCancelAuthenticationChallenge(id):arg2 ;
@end
