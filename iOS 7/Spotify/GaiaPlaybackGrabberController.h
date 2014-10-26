/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:59 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GaiaPlaybackGrabberController : NSObject {
	PlayController* _playController; 
	SPTGaiaDeviceManager* _deviceManager; 
	GaiaMessageBarController* _messageBarController; 
	SPTGaiaDevice* _lastDevice; 
	MessageBarAlertItem* _grabbedMessageBarAlertItem; 
	NSArray* _grabbingRouteTypes; 
	double _lastApplicationActivationTimestamp; 
}
@property (assign,nonatomic,__weak) PlayController* playController; 				//@synthesize playController=_playController - In the implementation block
@property (nonatomic,retain) SPTGaiaDeviceManager* deviceManager; 				//@synthesize deviceManager=_deviceManager - In the implementation block
@property (nonatomic,retain) GaiaMessageBarController* messageBarController; 				//@synthesize messageBarController=_messageBarController - In the implementation block
@property (nonatomic,retain) SPTGaiaDevice* lastDevice; 				//@synthesize lastDevice=_lastDevice - In the implementation block
@property (nonatomic,retain) MessageBarAlertItem* grabbedMessageBarAlertItem; 				//@synthesize grabbedMessageBarAlertItem=_grabbedMessageBarAlertItem - In the implementation block
@property (nonatomic,retain) NSArray* grabbingRouteTypes; 				//@synthesize grabbingRouteTypes=_grabbingRouteTypes - In the implementation block
@property (assign,nonatomic) double lastApplicationActivationTimestamp; 				//@synthesize lastApplicationActivationTimestamp=_lastApplicationActivationTimestamp - In the implementation block
-(void)setPlayController:(id)arg1;
-(void)setupDependencies;
-(void)setMessageBarController:(id)arg1;
-(void)audioRouteChangedNotification:(id)arg1;
-(void)applicationDidBecomeActiveNotification:(id)arg1;
-(void)removeDependencies;
-(void)currentTrackUpdated;
-(BOOL)currentAudioRouteShouldGrabPlayback:(id*)arg1;
-(void)grabPlaybackWithAlert;
-(void)setLastApplicationActivationTimestamp:(double)arg1;
-(void)respondToApplicationDidBecomeActive;
-(void)setLastDevice:(id)arg1;
-(void)grabbedAlertPressed;
-(void)setGrabbedMessageBarAlertItem:(id)arg1;
-(id)initWithDeviceManager:(id)arg1 messageBarController:(id)arg2 playController:(id)arg3;
-(void)setGrabbingRouteTypes:(id)arg1;
-(void)dealloc;
-(void)setDeviceManager:(id)arg1;
-(void).cxx_destruct;
@end