/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:30 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPManager : NSObject {
}
+(int)sessionStatus;
+(void)logTimestamp:(int)arg1;
+(BOOL)startWithDeviceKey:(id)arg1 error:(id*)arg2;
+(BOOL)setApplicationDataWithType:(int)arg1 field:(id)arg2 value:(id)arg3 error:(id*)arg4;
+(void)setRingToneFilePath:(id)arg1;
+(void)setRingbackToneFilePath:(id)arg1;
+(void)setRingbackTonePSTNFilePath:(id)arg1;
+(void)setDisconnectToneFilePath:(id)arg1;
+(void)setConnFailToneFilePath:(id)arg1;
+(id)makeCallWithName:(id)arg1 userInfo:(id)arg2 options:(id)arg3 error:(id*)arg4;
+(id)respondToCallWithUserInfo:(id)arg1 options:(id)arg2 error:(id*)arg3;
+(id)configFilePath;
+(void)setupConfigFilePath;
+(void)setupCrashReporter;
+(void)setupOperatingSystemInformation;
+(void)setupDeviceInformation;
+(void)setupCarrierInformation;
+(void)setupVideoResolution;
+(void)setupCapabilities;
+(id)deviceHandler;
+(BOOL)isVoiceAvailable;
+(id)ringToneFilePath;
+(id)ringbackToneFilePath;
+(id)disconnectToneFilePath;
+(id)connFailToneFilePath;
+(void)enableDownyModeNegotiation;
+(void)enableDownyModeDynamic;
+(void)disableDownyMode;
+(void)setOutputVolume:(int)arg1;
+(int)systemStatus;
+(id)connectToService:(int)arg1 userInfo:(id)arg2 options:(id)arg3 error:(id*)arg4;
+(id)AMPKitVersion;
+(id)AMPKitRevision;
+(void)reachabilityEventReceived:(int)arg1 param:(void*)arg2;
+(void)logStatisticsWithURL:(id)arg1 statInfo:(id)arg2;
+(void)setCurrentSession:(id)arg1;
+(BOOL)isVideoAvailable;
+(int)outputVolume;
+(void)sleep;
+(int)logLevel;
+(void)setLogLevel:(int)arg1;
+(void)stop;
+(id)currentSession;
@end