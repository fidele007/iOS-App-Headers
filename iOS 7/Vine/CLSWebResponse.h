/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:09 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CLSWebResponse : NSObject {
	NSURL* _requestURL; 
	unsigned _statusCode; 
	id _body; 
	NSError* _error; 
	NSMutableData* _responseData; 
}
@property (nonatomic,retain) NSURL* requestURL; 				//@synthesize requestURL=_requestURL - In the implementation block
@property (assign,nonatomic) unsigned statusCode; 				//@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) id body; 				//@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSError* error; 				//@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSData* responseData; 				//@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) BOOL wasSuccessful; 
-(void)setError:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)appendData:(id)arg1;
-(void)setBody:(id)arg1;
-(void)setStatusCode:(unsigned)arg1;
-(void)setRequestURL:(id)arg1;
@end