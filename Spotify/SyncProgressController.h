/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:52 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SyncProgressController : NSObject {
	BOOL _syncing; 
	id<SyncProgressDelegate> delegate; 
	SPTSyncProgressView* view; 
	struct SPCcpp cpp; 
	float _progress; 
	unsigned syncTask; 
	UILocalNotification* syncNotification; 
	NSTimer* syncNotifScheduler; 
}
@property (__weak) id<SyncProgressDelegate> delegate; 
@property (nonatomic,retain) SPTSyncProgressView* view; 
@property (assign,getter=isSyncing,nonatomic) BOOL syncing; 				//@synthesize syncing=_syncing - In the implementation block
@property (assign,nonatomic) float progress; 				//@synthesize progress=_progress - In the implementation block
@property (assign) unsigned syncTask; 
@property (retain) UILocalNotification* syncNotification; 
@property (retain) NSTimer* syncNotifScheduler; 
@property (assign,nonatomic) struct SPCcpp cpp; 
-(void)loginModeChanged;
-(void)backgrounded;
-(void)foregrounded;
-(void)stoppedSyncing;
-(void)setSyncTask:(unsigned)arg1;
-(void)setSyncNotification:(id)arg1;
-(void)setSyncNotifScheduler:(id)arg1;
-(void)scheduleSyncNotification;
-(void)pollBackgroundState;
-(void)startedSyncing;
-(void)setSyncing:(BOOL)arg1;
-(void)setCpp:(struct SPCcpp)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setView:(id)arg1;
-(void)setProgress:(float)arg1;
-(void)update;
-(id).cxx_construct;
-(void).cxx_destruct;
@end