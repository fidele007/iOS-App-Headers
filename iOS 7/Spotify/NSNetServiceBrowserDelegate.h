/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:04 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol NSNetServiceBrowserDelegate
@optional
-(void)netServiceBrowser(id):arg1 didNotSearch(id):arg2 ;
-(void)netServiceBrowserWillSearch(id):arg1 ;
-(void)netServiceBrowser(id):arg1 didFindDomain(id):arg2 moreComing(BOOL):arg3 ;
-(void)netServiceBrowser(id):arg1 didFindService(id):arg2 moreComing(BOOL):arg3 ;
-(void)netServiceBrowser(id):arg1 didRemoveDomain(id):arg2 moreComing(BOOL):arg3 ;
-(void)netServiceBrowser(id):arg1 didRemoveService(id):arg2 moreComing(BOOL):arg3 ;
-(void)netServiceBrowserDidStopSearch(id):arg1 ;
@end