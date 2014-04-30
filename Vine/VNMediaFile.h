/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:52 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface VNMediaFile : NSObject <NSCoding> {
	long writerOnce; 
	long readerOnce; 
	long finishOnce; 
	BOOL finalized; 
	AVURLAsset* _asset; 
	NSMutableArray* _assetOpenWaiters; 
	NSMutableArray* _assetFinishWaiters; 
	NSError* _assetError; 
	VNLocalFile* _filename; 
	AVAssetWriter* _assetWriter; 
	AVAssetWriterInput* _videoInput; 
	AVAssetWriterInput* _audioInput; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} _videoStartTimestamp; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} _audioStartTimestamp; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} _lastVideoSampleTime; 
	struct {
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} _lastAudioSampleTime; 
}
@property (nonatomic,retain) VNLocalFile* filename; 				//@synthesize filename=_filename - In the implementation block
@property (copy) AVURLAsset* asset; 
@property (nonatomic,copy) AVAssetWriter* assetWriter; 				//@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput* videoInput; 				//@synthesize videoInput=_videoInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput* audioInput; 				//@synthesize audioInput=_audioInput - In the implementation block
@property (assign,nonatomic) struct videoStartTimestamp; 				//@synthesize videoStartTimestamp=_videoStartTimestamp - In the implementation block
@property (assign,nonatomic) struct audioStartTimestamp; 				//@synthesize audioStartTimestamp=_audioStartTimestamp - In the implementation block
@property (assign,nonatomic) struct lastVideoSampleTime; 				//@synthesize lastVideoSampleTime=_lastVideoSampleTime - In the implementation block
@property (assign,nonatomic) struct lastAudioSampleTime; 				//@synthesize lastAudioSampleTime=_lastAudioSampleTime - In the implementation block
-(id)initWithWorkingDirectory:(id)arg1;
-(void)setVideoInput:(id)arg1;
-(void)setAudioInput:(id)arg1;
-(BOOL)openWriter:(id*)arg1;
-(void)finishWriting:(id)arg1;
-(struct)audioFileTimestampFromPresentationTimestamp:(struct )arg1;
-(struct)videoFileTimestampFromPresentationTimestamp:(struct )arg1;
-(void)openAsset:(id)arg1;
-(void)updateWorkingDirectory:(id)arg1;
-(void)forceFinalized;
-(void)setVideoStartTimestamp:(struct )arg1;
-(void)setAudioStartTimestamp:(struct )arg1;
-(void)setLastVideoSampleTime:(struct )arg1;
-(void)setLastAudioSampleTime:(struct )arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(void)setFilename:(id)arg1;
-(void).cxx_destruct;
@end