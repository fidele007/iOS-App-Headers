/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:06 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLShakeViewController : NLViewController {
	NLShakeSession* _session; 
	CMMotionManager* _motionManager; 
	double _motionTimestamp; 
	CLLocation* foundLocation; 
	NLShakeTitleView* _shakingHandsView; 
	UIView* _footerView; 
	UIView* _notFoundFooterView; 
}
-(void)onBackButtonPressed:(id)arg1;
-(void)shakeShake;
-(void)tappedSearchByID;
-(void)tappedQRCode;
-(void)setShowingInitialView:(BOOL)arg1;
-(void)startObservingDeviceMotion;
-(void)pushSearchID;
-(void)shakeSession:(id)arg1 didChangeShakeStatus:(unsigned)arg2;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationWillResignActive:(id)arg1;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void).cxx_destruct;
@end