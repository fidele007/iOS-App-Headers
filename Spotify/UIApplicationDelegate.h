/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:57 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPIOSLogObserver
@required
-(void)log(id):arg1 wroteLine(id):arg2 fromModule(id):arg3 file(id):arg4 line(int):arg5 at(id):arg6 logLevel(int):arg7 ;
-(void)log(id):arg1 wroteLine(id):arg2 fromModule(id):arg3 file(id):arg4 line(int):arg5 at(id):arg6 logLevel(int):arg7 ;
@end

@protocol UIApplicationDelegate
@property (nonatomic,retain) UIWindow* window; 
@optional
-(id)window;
-(BOOL)application(id):arg1 handleOpenURL(id):arg2 ;
-(BOOL)application(id):arg1 openURL(id):arg2 sourceApplication(id):arg3 annotation(id):arg4 ;
-(void)applicationDidReceiveMemoryWarning(id):arg1 ;
-(void)applicationWillTerminate(id):arg1 ;
-(void)applicationSignificantTimeChange(id):arg1 ;
-(void)application(id):arg1 willChangeStatusBarOrientation(int):arg2 duration(double):arg3 ;
-(void)application(id):arg1 didChangeStatusBarOrientation(int):arg2 ;
-(void)application(id):arg1 willChangeStatusBarFrame({):arg2 ;
-(void)application(id):arg1 didChangeStatusBarFrame({):arg2 ;
-(void)applicationDidBecomeActive(id):arg1 ;
-(void)applicationWillResignActive(id):arg1 ;
-(void)applicationDidEnterBackground(id):arg1 ;
-(void)applicationWillEnterForeground(id):arg1 ;
-(BOOL)application(id):arg1 shouldSaveApplicationState(id):arg2 ;
-(BOOL)application(id):arg1 shouldRestoreApplicationState(id):arg2 ;
-(unsigned)application(id):arg1 supportedInterfaceOrientationsForWindow(id):arg2 ;
-(BOOL)application(id):arg1 willFinishLaunchingWithOptions(id):arg2 ;
-(BOOL)application(id):arg1 didFinishLaunchingWithOptions(id):arg2 ;
-(void)applicationDidFinishLaunching(id):arg1 ;
-(void)application(id):arg1 didReceiveRemoteNotification(id):arg2 ;
-(void)application(id):arg1 didReceiveLocalNotification(id):arg2 ;
-(void)setWindow(id):arg1 ;
-(void)application(id):arg1 didReceiveRemoteNotification(id):arg2 fetchCompletionHandler(id):arg3 ;
-(void)application(id):arg1 handleEventsForBackgroundURLSession(id):arg2 completionHandler(id):arg3 ;
-(void)application(id):arg1 performFetchWithCompletionHandler(id):arg2 ;
-(void)application(id):arg1 willEncodeRestorableStateWithCoder(id):arg2 ;
-(id)application(id):arg1 viewControllerWithRestorationIdentifierPath(id):arg2 coder(id):arg3 ;
-(void)application(id):arg1 didDecodeRestorableStateWithCoder(id):arg2 ;
-(void)applicationProtectedDataWillBecomeUnavailable(id):arg1 ;
-(void)applicationProtectedDataDidBecomeAvailable(id):arg1 ;
-(void)application(id):arg1 didRegisterForRemoteNotificationsWithDeviceToken(id):arg2 ;
-(void)application(id):arg1 didFailToRegisterForRemoteNotificationsWithError(id):arg2 ;
@end
