/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:48 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineFileDownload : NSObject {
	NSURL* remoteURL; 
	NSURL* originalURL; 
	NSMutableSet* localFileURLs; 
	NLObjectStorageOperation* operation; 
	NSURL* tempFileURL; 
	NSMutableData* _dataDownloaded; 
	NSMutableArray* progressBlocks; 
	long long downloadedByteCount; 
	long long expectedByteCount; 
	id verificationBlock; 
	NSMutableArray* completionBlocks; 
	unsigned tryCount; 
	unsigned retryCount; 
	MessageUBALoggerMessageType* _ubaLoggerMessageType; 
	int _statusCode; 
}
@property (nonatomic,copy) long long downloadedByteCount; 
@property (nonatomic,copy) long long expectedByteCount; 
@property (nonatomic,copy) float progress; 
@property (nonatomic,copy) id verificationBlock; 
@property (assign,nonatomic) unsigned retryCount; 
@property (nonatomic,retain) MessageUBALoggerMessageType* ubaLoggerMessageType; 				//@synthesize ubaLoggerMessageType=_ubaLoggerMessageType - In the implementation block
@property (assign,nonatomic) int statusCode; 				//@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSURL* remoteURL; 
@property (nonatomic,copy) NSURL* originalRemoteURL; 
+(id)downloadForURL:(id)arg1;
+(void)initialize;
-(id)dataDownloaded;
-(void)setRetryCount:(unsigned)arg1;
-(void)setUbaLoggerMessageType:(id)arg1;
-(void)setVerificationBlock:(id)arg1;
-(void)addDestinationFileURL:(id)arg1;
-(void)_removeCachedURLInfo;
-(id)buildTempFileURL;
-(void)operationDidFinishLoading;
-(void)operationDidFailed;
-(void)operationDidReceiveDataWithSize:(unsigned long long)arg1 total:(unsigned long long)arg2;
-(void)_resetTryCount;
-(void)_finish;
-(BOOL)_needRetry;
-(void)_fireProgressBlocks;
-(void)finishDownloadingWithDestinationURL:(id)arg1;
-(BOOL)isConnectionAlive;
-(void)removeCompletionBlock:(id)arg1;
-(void)removeAllCompletionBlocks;
-(void)addProgressBlock:(id)arg1;
-(void)removeProgressBlock:(id)arg1;
-(void)removeAllProgressBlocks;
-(void)downloadTo:(id)arg1 completionBlock:(id)arg2;
-(void)_cancel:(unsigned)arg1;
-(void)dealloc;
-(void)cancel;
-(id)initWithURL:(id)arg1;
-(void)setStatusCode:(int)arg1;
-(void)addCompletionBlock:(id)arg1;
-(void).cxx_destruct;
@end