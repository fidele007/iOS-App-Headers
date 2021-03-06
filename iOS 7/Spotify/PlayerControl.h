/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:39 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPTGaiaDeviceStateManagerObserver
@optional
-(void)deviceStateManager(id):arg1 availableDevicesDidChange(id):arg2 ;
-(void)deviceStateManager(id):arg1 activeDeviceDidChange(id):arg2 ;
-(void)deviceStateManager(id):arg1 deviceBeingActivatedDidChange(id):arg2 ;
-(void)deviceStateManager(id):arg1 device(id):arg2 onlineStatusDidChange(BOOL):arg3 ;
@end

@protocol PlayerControl
@optional
-(void)contentOffsetChanged(float):arg1 ;
-(void)viewDidAppear;
-(void)viewWillAppear;
-(void)viewDidDisappear;
@required
-(BOOL)shouldShowForTrack(id):arg1 ;
-(id)controlView;
-(BOOL)shouldShowForTrack(id):arg1 ;
-(id)controlView;
@end
