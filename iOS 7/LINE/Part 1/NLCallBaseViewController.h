/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:14 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLCallBaseViewController : NLStatusBarControllableViewController {
	unsigned _callViewMode; 
	id<NCallViewControllerDelegate> _delegate; 
}
@property (assign,nonatomic) unsigned callViewMode; 				//@synthesize callViewMode=_callViewMode - In the implementation block
@property (assign,nonatomic) id<NCallViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(void)updateCallDurationView:(BOOL)arg1;
-(void)showVoiceCallingView;
-(void)updateCallViewModes:(unsigned)arg1;
-(void)updateCallingUser:(id)arg1;
-(void)updateLineCallPaidInfo:(id)arg1;
-(void)updateAcceptCall;
-(void)hideMesssgePopupAnimated:(BOOL)arg1;
-(void)showMessagePopup:(int)arg1 animated:(BOOL)arg2;
-(void)setUserGuideHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)presentNetworkStatus:(int)arg1;
-(void)showCallStatusBarDutation:(double)arg1 isInit:(BOOL)arg2;
-(void)processOnEnteringBackground;
-(void)processOnEnteringForeground;
-(void)processOnMinimizingCallView;
-(void)processOnMaximizingCallView;
-(void)updateCallViewErrorNotSupproted;
-(void)updateSpeakerButton;
-(void)updateMuteButton;
-(void)resetViews;
-(void)updateViewNetworkStatusSetHidden:(BOOL)arg1;
-(id)buttonVideoCall;
-(id)buttonVideoCameraOff;
-(id)imageViewVideoRotatableCameraIcon;
-(id)viewLocalVideoRendering;
-(id)viewRemoteVideoRendering;
-(id)imageViewVideoRotatableMuteIcon;
-(id)viewVideoCallingAccept;
-(id)viewLoading;
-(id)buttonVideoCameraSwitching;
-(void)setVideoViewLayout:(unsigned)arg1;
-(void)setCallViewMode:(unsigned)arg1;
-(void)setDelegate:(id)arg1;
-(int)preferredStatusBarStyle;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)updateLayout;
@end