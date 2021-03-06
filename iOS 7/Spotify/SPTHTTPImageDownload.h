/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:01 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSURLConnectionDataDelegate.h>
#import <NSURLConnectionDelegate.h>

@interface SPTHTTPImageDownload : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate> {
	BOOL _wasLoadedFromCache; 
	id<SPTHTTPImageDownloadDelegate> _delegate; 
	NSURL* _URL; 
	id _context; 
	UIImage* _image; 
	NSURLConnection* _connection; 
	NSMutableData* _data; 
	double _duration; 
	double _startTime; 
}
@property (assign,nonatomic,__weak) id<SPTHTTPImageDownloadDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL* URL; 				//@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) id context; 				//@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIImage* image; 				//@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double duration; 				//@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL wasLoadedFromCache; 				//@synthesize wasLoadedFromCache=_wasLoadedFromCache - In the implementation block
@property (nonatomic,retain) NSURLConnection* connection; 				//@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData* data; 				//@synthesize data=_data - In the implementation block
@property (assign,nonatomic) double startTime; 				//@synthesize startTime=_startTime - In the implementation block
+(id)downloadWithURL:(id)arg1 delegate:(id)arg2 context:(id)arg3;
-(void)setWasLoadedFromCache:(BOOL)arg1;
-(void)handleDownloadFinishedWithData:(id)arg1;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)dealloc;
-(void)setImage:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setDuration:(double)arg1;
-(void)setStartTime:(double)arg1;
-(void)setData:(id)arg1;
-(void)setContext:(id)arg1;
-(void)cancel;
-(void)setURL:(id)arg1;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void)setConnection:(id)arg1;
-(void).cxx_destruct;
@end