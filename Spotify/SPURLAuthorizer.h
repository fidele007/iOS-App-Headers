/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:09 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPURLAuthorizer : NSObject {
	NSURL* undecoratedURL; 
	id<SPURLAuthorizerDelegate> delegate; 
	NSString* username; 
	NSString* password; 
	NSMutableData* data; 
	NSURLConnection* connection; 
}
@property (retain) NSURL* undecoratedURL; 
@property (retain) NSString* username; 
@property (retain) NSString* password; 
@property (assign) id<SPURLAuthorizerDelegate> delegate; 
@property (retain) NSMutableData* data; 
@property (retain) NSURLConnection* connection; 
+(id)urlByAppendingToken:(id)arg1 withKey:(id)arg2 toURL:(id)arg3;
+(id)authenticateURL:(id)arg1 as:(id)arg2 usingPassword:(id)arg3 delegate:(id)arg4;
-(void)setUndecoratedURL:(id)arg1;
-(void)handleLoginTokenRecieved:(id)arg1 forURL:(id)arg2;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)setPassword:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)setData:(id)arg1;
-(void)cancel;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void)setConnection:(id)arg1;
-(void)setUsername:(id)arg1;
@end