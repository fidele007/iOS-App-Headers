/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:08:51 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPAudioDevice : NSObject {
	int mOpenCount; 
	NSString* mSavedCategory; 
	NSString* mSavedMode; 
	BOOL mReceivingAudioSessionEvents; 
	BOOL mActivatedAudioSession; 
	BOOL mActivatedVoIPAudioSession; 
	int mCurrentOutputRoute; 
	unsigned mDefaultInterruptionTolerance; 
	float mPreferredIOBufferDuration; 
	BOOL mPreferredUsesVoiceProcessingIO; 
	BOOL mOverrideSpeaker; 
	BOOL mMixWithOthers; 
	BOOL mVideoChatMode; 
	struct OpaqueAudioComponentInstance* mInstance; 
	int mInterruptSeq; 
	BOOL mInterrupted; 
	BOOL mStarted; 
	BOOL _overrideSpeaker; 
}
@property (assign,nonatomic) unsigned defaultInterruptionTolerance; 
@property (assign,nonatomic) BOOL preferredUsesVoiceProcessingIO; 
@property (nonatomic,copy) BOOL usesVoiceProcessingIO; 
@property (assign,nonatomic) float preferredIOBufferDuration; 
@property (nonatomic,copy) float IOBufferDuration; 
@property (nonatomic,copy) float inputLatency; 
@property (nonatomic,copy) float outputLatency; 
@property (assign,getter=isOverrideSpeaker,nonatomic) BOOL overrideSpeaker; 				//@synthesize overrideSpeaker=_overrideSpeaker - In the implementation block
@property (assign,getter=isMixWithOthers,nonatomic) BOOL mixWithOthers; 
@property (assign,getter=isVideoChatMode,nonatomic) BOOL videoChatMode; 
@property (nonatomic,copy) int currentOutputRoute; 
@property (nonatomic,copy) int speakerMode; 
+(id)sharedAudioDevice;
+(void)initialize;
+(void)load;
-(void)setOverrideSpeaker:(BOOL)arg1;
-(void)saveAudioSessionState;
-(long)stopAudioUnit;
-(void)disposeAudioUnit;
-(void)deactivateAudioSession;
-(void)restoreAudioSessionState;
-(void)audioSessionInterruption:(id)arg1;
-(void)audioSessionRouteChange:(id)arg1;
-(void)audioSessionMediaServicesWereReset:(id)arg1;
-(void)configureAudioSession;
-(void)beginReceivingAudioSessionEvents;
-(void)prepareAudioSession;
-(void)endReceivingAudioSessionEvents;
-(void)postAudioRouteChangeReport;
-(void)setMixWithOthers:(BOOL)arg1;
-(void)outputRouteChangedWithReason:(unsigned)arg1 oldRoute:(int)arg2 newRoute:(int)arg3;
-(void)activateAudioSession;
-(long)startAudioUnit;
-(void)prepareAudioSessionForKeyTone;
-(void)setPreferredUsesVoiceProcessingIO:(BOOL)arg1;
-(void)setPreferredIOBufferDuration:(float)arg1;
-(void)setVideoChatMode:(BOOL)arg1;
-(long)createAudioUnitWithStreamDescription:(struct AudioStreamBasicDescription*)arg1 inputCallback:(?*)arg2 outputCallback:(?*)arg3 context:(void*)arg4;
-(long)render:(unsigned*)arg1 timestamp:(struct rAudioTimeStamp*)arg2 bus:(unsigned long)arg3 frames:(unsigned long)arg4 bufferList:(struct AudioBufferList*)arg5;
-(void)setDefaultInterruptionTolerance:(unsigned)arg1;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(unsigned)arg1;
-(void)close;
-(void)open;
@end