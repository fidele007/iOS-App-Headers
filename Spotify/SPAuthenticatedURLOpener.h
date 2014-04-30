/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:11 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPURLAuthorizerDelegate.h>

@interface SPAuthenticatedURLOpener : NSObject <SPURLAuthorizerDelegate> {
	SPFadedOverlay* overlay; 
	SPURLAuthorizer* authorizer; 
}
@property (retain) SPFadedOverlay* overlay; 
@property (retain) SPURLAuthorizer* authorizer; 
+(void)openURL:(id)arg1 as:(id)arg2 usingPassword:(id)arg3;
-(void)authorizer:(id)arg1 constructedURL:(id)arg2;
-(void)authorizer:(id)arg1 failedConstructingURL:(id)arg2 withError:(id)arg3;
-(void)setAuthorizer:(id)arg1;
-(void)dealloc;
-(void)cancel;
-(void)done;
-(void)setOverlay:(id)arg1;
@end