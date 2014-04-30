/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:06 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SDAVAssetExportSession : NSObject {
	NSError* _error; 
	double duration; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} lastSamplePresentationTime; 
	BOOL _shouldOptimizeForNetworkUse; 
	id<SDAVAssetExportSessionDelegate> _delegate; 
	AVAsset* _asset; 
	AVVideoComposition* _videoComposition; 
	AVAudioMix* _audioMix; 
	NSString* _outputFileType; 
	NSURL* _outputURL; 
	NSDictionary* _videoSettings; 
	NSDictionary* _audioSettings; 
	NSArray* _metadata; 
	float _progress; 
	AVAssetReader* _reader; 
	AVAssetReaderVideoCompositionOutput* _videoOutput; 
	AVAssetReaderAudioMixOutput* _audioOutput; 
	AVAssetWriter* _writer; 
	AVAssetWriterInput* _videoInput; 
	AVAssetWriterInputPixelBufferAdaptor* _videoPixelBufferAdaptor; 
	AVAssetWriterInput* _audioInput; 
	struct dispatch_queue_s* _inputQueue; 
	id _completionHandler; 
	struct {
		 start;
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
		 duration;
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} _timeRange; 
}
@property (assign,nonatomic,__weak) id<SDAVAssetExportSessionDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) AVAsset* asset; 				//@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) AVVideoComposition* videoComposition; 				//@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,copy) AVAudioMix* audioMix; 				//@synthesize audioMix=_audioMix - In the implementation block
@property (nonatomic,copy) NSString* outputFileType; 				//@synthesize outputFileType=_outputFileType - In the implementation block
@property (nonatomic,copy) NSURL* outputURL; 				//@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,copy) NSDictionary* videoSettings; 				//@synthesize videoSettings=_videoSettings - In the implementation block
@property (nonatomic,copy) NSDictionary* audioSettings; 				//@synthesize audioSettings=_audioSettings - In the implementation block
@property (assign,nonatomic) struct timeRange; 				//@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 				//@synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse - In the implementation block
@property (nonatomic,copy) NSArray* metadata; 				//@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSError* error; 
@property (assign,nonatomic) float progress; 				//@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) int status; 
@property (nonatomic,retain) AVAssetReader* reader; 				//@synthesize reader=_reader - In the implementation block
@property (nonatomic,retain) AVAssetReaderVideoCompositionOutput* videoOutput; 				//@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,retain) AVAssetReaderAudioMixOutput* audioOutput; 				//@synthesize audioOutput=_audioOutput - In the implementation block
@property (nonatomic,retain) AVAssetWriter* writer; 				//@synthesize writer=_writer - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput* videoInput; 				//@synthesize videoInput=_videoInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor* videoPixelBufferAdaptor; 				//@synthesize videoPixelBufferAdaptor=_videoPixelBufferAdaptor - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput* audioInput; 				//@synthesize audioInput=_audioInput - In the implementation block
@property (assign,nonatomic) struct dispatch_queue_s* inputQueue; 				//@synthesize inputQueue=_inputQueue - In the implementation block
@property (nonatomic,copy) id completionHandler; 				//@synthesize completionHandler=_completionHandler - In the implementation block
+(id)exportSessionWithAsset:(id)arg1;
-(void)setVideoOutput:(id)arg1;
-(id)buildDefaultVideoComposition;
-(void)setVideoInput:(id)arg1;
-(void)setVideoPixelBufferAdaptor:(id)arg1;
-(void)setAudioOutput:(id)arg1;
-(void)setAudioInput:(id)arg1;
-(void)setInputQueue:(struct dispatch_queue_s*)arg1;
-(BOOL)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
-(void)setAudioSettings:(id)arg1;
-(void)setVideoComposition:(id)arg1;
-(void)cancelExport;
-(void)setVideoSettings:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setProgress:(float)arg1;
-(void)reset;
-(id)initWithAsset:(id)arg1;
-(void)setCompletionHandler:(id)arg1;
-(void)complete;
-(void)finish;
-(void)setReader:(id)arg1;
-(void)setWriter:(id)arg1;
-(void)setMetadata:(id)arg1;
-(void)setAudioMix:(id)arg1;
-(void)setOutputFileType:(id)arg1;
-(void)setOutputURL:(id)arg1;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
-(void)setTimeRange:(struct )arg1;
-(void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
-(void).cxx_destruct;
@end