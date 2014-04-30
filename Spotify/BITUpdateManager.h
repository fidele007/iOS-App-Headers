/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:58 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface BITUpdateManager : BITHockeyBaseManager <UIAlertViewDelegate> {
	NSString* _currentAppVersion; 
	BITUpdateViewController* _currentHockeyViewController; 
	BOOL _dataFound; 
	BOOL _showFeedback; 
	BOOL _updateAlertShowing; 
	BOOL _lastCheckFailed; 
	BOOL _sendUsageData; 
	NSFileManager* _fileManager; 
	NSString* _updateDir; 
	NSString* _usageDataFile; 
	id _appDidBecomeActiveObserver; 
	id _appDidEnterBackgroundObserver; 
	id _networkDidBecomeReachableObserver; 
	BOOL _didEnterBackgroundState; 
	BOOL _firstStartAfterInstall; 
	NSNumber* _versionID; 
	NSString* _versionUUID; 
	NSString* _uuid; 
	NSString* _blockingScreenMessage; 
	NSDate* _lastUpdateCheckFromBlockingScreen; 
	BOOL _checkForUpdateOnLaunch; 
	BOOL _alwaysShowUpdateReminder; 
	BOOL _showDirectInstallOption; 
	BOOL _disableUpdateCheckOptionWhenExpired; 
	BOOL _updateAvailable; 
	BOOL _checkInProgress; 
	BOOL _installationIdentified; 
	BOOL _checkForTracker; 
	BOOL _disableUpdateManager; 
	id _delegate; 
	unsigned _updateSetting; 
	NSDate* _expiryDate; 
	NSMutableData* _receivedData; 
	NSDate* _lastCheck; 
	NSArray* _appVersions; 
	NSNumber* _currentAppVersionUsageTime; 
	NSURLConnection* _urlConnection; 
	NSDate* _usageStartTimestamp; 
	UIView* _blockingView; 
	NSString* _companyName; 
	NSString* _installationIdentification; 
	NSString* _installationIdentificationType; 
	NSDictionary* _trackerConfig; 
}
@property (assign,nonatomic,__weak) id delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned updateSetting; 				//@synthesize updateSetting=_updateSetting - In the implementation block
@property (assign,getter=isCheckForUpdateOnLaunch,nonatomic) BOOL checkForUpdateOnLaunch; 				//@synthesize checkForUpdateOnLaunch=_checkForUpdateOnLaunch - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowUpdateReminder; 				//@synthesize alwaysShowUpdateReminder=_alwaysShowUpdateReminder - In the implementation block
@property (assign,getter=isShowingDirectInstallOption,nonatomic) BOOL showDirectInstallOption; 				//@synthesize showDirectInstallOption=_showDirectInstallOption - In the implementation block
@property (nonatomic,retain) NSDate* expiryDate; 				//@synthesize expiryDate=_expiryDate - In the implementation block
@property (assign,nonatomic) BOOL disableUpdateCheckOptionWhenExpired; 				//@synthesize disableUpdateCheckOptionWhenExpired=_disableUpdateCheckOptionWhenExpired - In the implementation block
@property (assign,getter=isUpdateAvailable,nonatomic) BOOL updateAvailable; 				//@synthesize updateAvailable=_updateAvailable - In the implementation block
@property (assign,getter=isCheckInProgress,nonatomic) BOOL checkInProgress; 				//@synthesize checkInProgress=_checkInProgress - In the implementation block
@property (nonatomic,retain) NSMutableData* receivedData; 				//@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,copy) NSDate* lastCheck; 				//@synthesize lastCheck=_lastCheck - In the implementation block
@property (nonatomic,copy) NSArray* appVersions; 				//@synthesize appVersions=_appVersions - In the implementation block
@property (nonatomic,retain) NSNumber* currentAppVersionUsageTime; 				//@synthesize currentAppVersionUsageTime=_currentAppVersionUsageTime - In the implementation block
@property (nonatomic,retain) NSURLConnection* urlConnection; 				//@synthesize urlConnection=_urlConnection - In the implementation block
@property (nonatomic,copy) NSDate* usageStartTimestamp; 				//@synthesize usageStartTimestamp=_usageStartTimestamp - In the implementation block
@property (nonatomic,retain) UIView* blockingView; 				//@synthesize blockingView=_blockingView - In the implementation block
@property (nonatomic,retain) NSString* companyName; 				//@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSString* installationIdentification; 				//@synthesize installationIdentification=_installationIdentification - In the implementation block
@property (nonatomic,retain) NSString* installationIdentificationType; 				//@synthesize installationIdentificationType=_installationIdentificationType - In the implementation block
@property (assign,nonatomic) BOOL installationIdentified; 				//@synthesize installationIdentified=_installationIdentified - In the implementation block
@property (assign,nonatomic) BOOL checkForTracker; 				//@synthesize checkForTracker=_checkForTracker - In the implementation block
@property (nonatomic,retain) NSDictionary* trackerConfig; 				//@synthesize trackerConfig=_trackerConfig - In the implementation block
@property (assign,getter=isUpdateManagerDisabled,nonatomic) BOOL disableUpdateManager; 				//@synthesize disableUpdateManager=_disableUpdateManager - In the implementation block
@property (nonatomic,retain) BITUpdateViewController* currentHockeyViewController; 				//@synthesize currentHockeyViewController=_currentHockeyViewController - In the implementation block
-(void)checkExpiryDateReached;
-(BOOL)expiryDateReached;
-(void)startUsage;
-(void)didEnterBackgroundActions;
-(void)didBecomeActiveActions;
-(void)showBlockingScreen:(id)arg1 image:(id)arg2;
-(void)unregisterObservers;
-(void)setCurrentAppVersionUsageTime:(id)arg1;
-(void)storeUsageTimeForCurrentVersion:(id)arg1;
-(void)setUsageStartTimestamp:(id)arg1;
-(id)newestAppVersion;
-(void)setUpdateAvailable:(BOOL)arg1;
-(void)saveAppCache;
-(void)setAppVersions:(id)arg1;
-(void)checkUpdateAvailable;
-(void)setShowDirectInstallOption:(BOOL)arg1;
-(void)setAlwaysShowUpdateReminder:(BOOL)arg1;
-(void)setCheckForUpdateOnLaunch:(BOOL)arg1;
-(void)setUpdateSetting:(unsigned)arg1;
-(void)setLastCheck:(id)arg1;
-(void)loadAppCache;
-(void)loadAppVersionUsageData;
-(void)stopUsage;
-(id)hockeyViewController:(BOOL)arg1;
-(BOOL)hasNewerMandatoryVersion;
-(void)setBlockingView:(id)arg1;
-(void)alertFallback:(id)arg1;
-(void)checkForUpdateForExpiredVersion;
-(void)checkForUpdateShowFeedback:(BOOL)arg1;
-(void)showCheckForUpdateAlert;
-(void)setCheckInProgress:(BOOL)arg1;
-(BOOL)shouldCheckForUpdates;
-(id)installationDateString;
-(id)currentUsageString;
-(void)setUrlConnection:(id)arg1;
-(void)registerObservers;
-(void)setReceivedData:(id)arg1;
-(void)setTrackerConfig:(id)arg1;
-(void)showUpdateView;
-(BOOL)initiateAppDownload;
-(void)setCurrentHockeyViewController:(id)arg1;
-(void)setInstallationIdentificationType:(id)arg1;
-(void)setInstallationIdentification:(id)arg1;
-(void)setDisableUpdateCheckOptionWhenExpired:(BOOL)arg1;
-(void)setInstallationIdentified:(BOOL)arg1;
-(void)setCheckForTracker:(BOOL)arg1;
-(void)setDisableUpdateManager:(BOOL)arg1;
-(void)setExpiryDate:(id)arg1;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void)startManager;
-(void)setCompanyName:(id)arg1;
-(void)reportError:(id)arg1;
-(void).cxx_destruct;
@end