/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:19:07 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITHockeyAppClient : NSObject {
	NSURL* _baseURL; 
	NSOperationQueue* _operationQueue; 
}
@property (nonatomic,retain) NSURL* baseURL; 				//@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue* operationQueue; 				//@synthesize operationQueue=_operationQueue - In the implementation block
+(id)queryStringFromParameters:(id)arg1 withEncoding:(unsigned)arg2;
+(id)dataWithPostValue:(id)arg1 forKey:(id)arg2 boundary:(id)arg3;
-(unsigned)cancelOperationsWithPath:(id)arg1 method:(id)arg2;
-(id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
-(id)operationWithURLRequest:(id)arg1 completion:(id)arg2;
-(void)enqeueHTTPOperation:(id)arg1;
-(void)getPath:(id)arg1 parameters:(id)arg2 completion:(id)arg3;
-(void)postPath:(id)arg1 parameters:(id)arg2 completion:(id)arg3;
-(void)setOperationQueue:(id)arg1;
-(void)dealloc;
-(void)setBaseURL:(id)arg1;
-(id)initWithBaseURL:(id)arg1;
-(void).cxx_destruct;
@end