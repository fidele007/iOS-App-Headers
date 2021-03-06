/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:59:56 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CLSSDKController : NSObject {
	id<CLSSDKControllerDelegate> _delegate; 
	CLSClient* _client; 
	CLSSettings* _settings; 
	NSString* _cachePath; 
	unsigned long long _retryInterval; 
	BOOL _retrying; 
	int _sendButtonIndex; 
	int _alwaysSendButtonIndex; 
	UIAlertView* _crashReportSubmissionAlert; 
	struct dispatch_queue_s* _queue; 
	double _delay; 
}
@property (assign,nonatomic) id<CLSSDKControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLSClient* client; 				//@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSDictionary* appInfoDictionary; 
@property (nonatomic,copy) NSString* APIEndpoint; 
@property (nonatomic,copy) NSString* bundleIdentifier; 
@property (nonatomic,copy) BOOL hostCanCacheSettings; 
@property (nonatomic,copy) NSString* crashFileDirectory; 
@property (nonatomic,copy) NSString* processingDirectory; 
@property (nonatomic,copy) NSString* invalidDirectory; 
@property (nonatomic,copy) NSString* preparedDirectory; 
@property (nonatomic,copy) NSString* sendableDirectory; 
@property (nonatomic,copy) NSString* crashMarkerFilePath; 
-(BOOL)beginStartupFlowAfterDelay:(double)arg1;
-(void)loadSettings:(id)arg1;
-(id)cachePath;
-(BOOL)moveItemAtPath:(id)arg1 toDirectory:(id)arg2;
-(void)enumerateFilesInDirectory:(id)arg1 usingBlock:(id)arg2;
-(BOOL)createDirectoryAtPath:(id)arg1;
-(void)startReportCollection;
-(id)settingsCachePath;
-(BOOL)shouldLoadSettings;
-(void)onboardOrStartReportColletion;
-(void)startReportingAfterDelay:(double)arg1;
-(void)processExistingRecords:(BOOL)arg1;
-(BOOL)moveItemsFromDirectory:(id)arg1 toDirectory:(id)arg2;
-(id)processRecordFile:(id)arg1;
-(void)submitInvalidFiles;
-(void)displayPermissionAlert;
-(void)submitFiles;
-(BOOL)ensureReasonableFileAtPath:(id)arg1;
-(BOOL)removeItemAtPath:(id)arg1;
-(BOOL)isARejectedError:(id)arg1;
-(void)ignoreReports;
-(void)submitReportsSettingAlwaysFlag:(BOOL)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)alertViewCancel:(id)arg1;
-(id)rootPath;
-(BOOL)setup;
-(void)configure:(BOOL)arg1;
-(void)setClient:(id)arg1;
@end