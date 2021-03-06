/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:10 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPVideoCapture : NSObject {
	?* mCallback; 
	void* mContext; 
	int mOpenCount; 
	char* mBuffer; 
	int mBufferSize; 
	int mWidth; 
	int mHeight; 
	int mRotation; 
}
+(id)availableDevices;
+(void)refreshAvailableDevices;
+(id)collectAvailableDevices;
+(id)defaultCaptureDevice;
+(void)setDefaultCaptureDevice:(id)arg1;
+(void)switchCaptureDevice:(id)arg1 fallback:(id)arg2;
+(id)sharedVideoCapture;
+(id)deviceWithUniqueID:(id)arg1;
+(void)initialize;
-(void)setCallback:(?*)arg1 context:(void*)arg2;
-(void)openInternal;
-(void)closeInternal;
-(BOOL)isRunningWithDevice:(id)arg1;
-(void)postErrorReportNotificationWithCode:(int)arg1 underlyingError:(id)arg2;
-(int)maximumFrameRate;
-(void)setMaximumFrameRate:(int)arg1;
-(id)preset;
-(void)setPreset:(id)arg1;
-(void)setDevice:(id)arg1;
-(void)beginConfiguration;
-(void)commitConfiguration;
-(void)startRunning;
-(void)stopRunning;
-(?*)callback;
-(void*)context;
-(void)setRotation:(int)arg1;
-(int)rotation;
-(void)close;
-(BOOL)isRunning;
-(id)device;
-(BOOL)isOpened;
-(void)open;
@end