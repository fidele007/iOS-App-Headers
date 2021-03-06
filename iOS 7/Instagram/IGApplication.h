/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:17 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGApplication : UIApplication {
	int _touchState; 
	IGAnalyticsManager* _analyticsManager; 
	IGSurveyManager* _surveyManager; 
	IGFeedItemTrackingManager* _feedItemTrackingManager; 
	IGUserTrackingManager* _userTrackingManager; 
	IGMediaManager* _mediaManager; 
	IGNavigationEventManager* _navigationEventManager; 
	IGLocalNotificationManager* _localNotificationManager; 
	IGLoggedOutSessionManager* _loggedOutSessionManager; 
	IGTypicalMetricsManager* _typicalMetricsManager; 
}
@property (nonatomic,retain) IGAnalyticsManager* analyticsManager; 				//@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,retain) IGSurveyManager* surveyManager; 				//@synthesize surveyManager=_surveyManager - In the implementation block
@property (nonatomic,retain) IGFeedItemTrackingManager* feedItemTrackingManager; 				//@synthesize feedItemTrackingManager=_feedItemTrackingManager - In the implementation block
@property (nonatomic,retain) IGUserTrackingManager* userTrackingManager; 				//@synthesize userTrackingManager=_userTrackingManager - In the implementation block
@property (nonatomic,retain) IGMediaManager* mediaManager; 				//@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,retain) IGNavigationEventManager* navigationEventManager; 				//@synthesize navigationEventManager=_navigationEventManager - In the implementation block
@property (nonatomic,retain) IGLocalNotificationManager* localNotificationManager; 				//@synthesize localNotificationManager=_localNotificationManager - In the implementation block
@property (nonatomic,retain) IGLoggedOutSessionManager* loggedOutSessionManager; 				//@synthesize loggedOutSessionManager=_loggedOutSessionManager - In the implementation block
@property (nonatomic,retain) IGTypicalMetricsManager* typicalMetricsManager; 				//@synthesize typicalMetricsManager=_typicalMetricsManager - In the implementation block
-(void)initializeEventManagers;
-(void)setFeedItemTrackingManager:(id)arg1;
-(void)setUserTrackingManager:(id)arg1;
-(void)setMediaManager:(id)arg1;
-(void)setAnalyticsManager:(id)arg1;
-(void)setSurveyManager:(id)arg1;
-(void)setNavigationEventManager:(id)arg1;
-(void)setLocalNotificationManager:(id)arg1;
-(void)setLoggedOutSessionManager:(id)arg1;
-(void)setTypicalMetricsManager:(id)arg1;
-(void)processTouchEvent:(id)arg1;
-(void)handleTouch;
-(id)init;
-(void)sendEvent:(id)arg1;
-(void).cxx_destruct;
@end