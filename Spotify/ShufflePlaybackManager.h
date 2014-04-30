/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:18 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ShufflePlaybackManager : NSObject {
	PlayController* _playController; 
	id<UpsellPopupManager> _upsellPopupManager; 
	NSNotificationCenter* _notificationCenter; 
	NSArray* _observations; 
}
@property (nonatomic,retain) PlayController* playController; 				//@synthesize playController=_playController - In the implementation block
@property (nonatomic,retain) id<UpsellPopupManager> upsellPopupManager; 				//@synthesize upsellPopupManager=_upsellPopupManager - In the implementation block
@property (nonatomic,retain) NSNotificationCenter* notificationCenter; 				//@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) NSArray* observations; 				//@synthesize observations=_observations - In the implementation block
-(void)setPlayController:(id)arg1;
-(void)skipsRemainingChanged;
-(void)setUpsellPopupManager:(id)arg1;
-(void)setObservations:(id)arg1;
-(id)initWithPlayController:(id)arg1 upsellPopupManager:(id)arg2 notificationCenter:(id)arg3;
-(void)shuffleChanged;
-(void)offlineSyncErrorNotification:(id)arg1;
-(void)setNotificationCenter:(id)arg1;
-(void)dealloc;
-(void).cxx_destruct;
@end