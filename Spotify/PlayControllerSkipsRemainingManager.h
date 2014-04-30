/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:02 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPForegroundObserverDelegate.h>

@interface PlayControllerSkipsRemainingManager : NSObject <SPForegroundObserverDelegate> {
	BOOL _hibernatedWithNoSkipsRemaining; 
	PlayController* _playController; 
	id<PlayControllerSkipsRemainingManagerDelegate> _delegate; 
	SPForegroundObserver* _foregroundObserver; 
	SPKVObservation* _skipsRemainingObservation; 
	NSTimer* _updateTimer; 
}
@property (assign,nonatomic,__weak) PlayController* playController; 				//@synthesize playController=_playController - In the implementation block
@property (assign,nonatomic,__weak) id<PlayControllerSkipsRemainingManagerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SPForegroundObserver* foregroundObserver; 				//@synthesize foregroundObserver=_foregroundObserver - In the implementation block
@property (nonatomic,retain) SPKVObservation* skipsRemainingObservation; 				//@synthesize skipsRemainingObservation=_skipsRemainingObservation - In the implementation block
@property (assign,nonatomic) BOOL hibernatedWithNoSkipsRemaining; 				//@synthesize hibernatedWithNoSkipsRemaining=_hibernatedWithNoSkipsRemaining - In the implementation block
@property (nonatomic,retain) NSTimer* updateTimer; 				//@synthesize updateTimer=_updateTimer - In the implementation block
-(id)initWithPlayController:(id)arg1 application:(id)arg2;
-(void)setPlayController:(id)arg1;
-(void)setForegroundObserver:(id)arg1;
-(void)setSkipsRemainingObservation:(id)arg1;
-(void)setUpdateTimer:(id)arg1;
-(void)skipsRemainingChanged;
-(void)updateTimerFire;
-(void)setHibernatedWithNoSkipsRemaining:(BOOL)arg1;
-(void)foregroundObserverDidAwake:(id)arg1;
-(void)foregroundObserverDidHibernate:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)invalidate;
-(void).cxx_destruct;
@end