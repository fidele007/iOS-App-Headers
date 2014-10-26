/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:12 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLBuddyOnAirChatUIHandler : NSObject {
	BOOL _isShowedOnAirOnce; 
	NLBuddyOnAirView* _buddyOnAirView; 
	NLBuddyVideoOnAirView* _videoOnAirView; 
	NLBuddyOnAirModel* _onAirModel; 
}
@property (nonatomic,copy) NLBuddyOnAirView* buddyOnAirView; 				//@synthesize buddyOnAirView=_buddyOnAirView - In the implementation block
@property (nonatomic,copy) NLBuddyVideoOnAirView* videoOnAirView; 				//@synthesize videoOnAirView=_videoOnAirView - In the implementation block
@property (nonatomic,retain) NLBuddyOnAirModel* onAirModel; 				//@synthesize onAirModel=_onAirModel - In the implementation block
@property (assign,nonatomic) BOOL isShowedOnAirOnce; 				//@synthesize isShowedOnAirOnce=_isShowedOnAirOnce - In the implementation block
-(id)messageViewController;
-(id)chatObject;
-(id)messageSendBar;
-(void)attemptToShowOnAirView;
-(BOOL)isShowingVideoOnAirView;
-(void)resumePlayer;
-(void)pausePlayer;
-(id)editButtonBar;
-(void)hideOnAirViewWithDuration:(double)arg1;
-(void)showOnAirViewWithDuration:(double)arg1;
-(BOOL)isShowingBuddyOnAirView;
-(void)setOnAirModel:(id)arg1;
-(void)stopOnAir;
-(void)showVideoOnAirView;
-(void)keyboardDidShowNotification:(id)arg1;
-(void)showVideoQualityMenu;
-(void)addNotifications;
-(void)removeSubviews;
-(void)removeNotifications;
-(void)rotateForcelyOnAirVideoView;
-(void)tappedOnAirVideoView;
-(void)hideVideoOnAirView;
-(void)didChangeUIDeviceOrientation:(id)arg1;
-(void)keyboardWillHideNotification:(id)arg1;
-(void)showChatOnAirPanel:(BOOL)arg1 duration:(double)arg2;
-(id)hlsURL;
-(void)minizeChatArea;
-(void)hideChatRoomKeyboard;
-(void)recoveryChatArea;
-(void)setIsShowedOnAirOnce:(BOOL)arg1;
-(void)showOrHideStatusBar;
-(void)adjustChatArea;
-(BOOL)isNeedRotateView;
-(void)dealloc;
-(id)init;
-(id)view;
-(id)tableView;
-(void).cxx_destruct;
@end