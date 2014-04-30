/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:03 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTNowPlayingSlidingTrackMetadataQueue : NSObject {
	id<SPTNowPlayingSlidingTrackMetadataQueueDelegate> _delegate; 
	int _numberOfPagesAhead; 
	NSMutableArray* _pendingMoveEvents; 
	NSMutableArray* _metadata; 
	int _metadataCenter; 
}
@property (assign,nonatomic,__weak) id<SPTNowPlayingSlidingTrackMetadataQueueDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) SPTNowPlayingSlidingTrackMetadata* currentMetadata; 
@property (nonatomic,copy) SPTNowPlayingSlidingTrackMetadata* playingMetadata; 
@property (getter=isInSync,nonatomic,copy) BOOL inSync; 
@property (assign,nonatomic) int numberOfPagesAhead; 				//@synthesize numberOfPagesAhead=_numberOfPagesAhead - In the implementation block
@property (nonatomic,retain) NSMutableArray* pendingMoveEvents; 				//@synthesize pendingMoveEvents=_pendingMoveEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray* metadata; 				//@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) int metadataCenter; 				//@synthesize metadataCenter=_metadataCenter - In the implementation block
-(int)animationForMoveToRelativePageIndex:(id)arg1 interactively:(BOOL)arg2;
-(void)enqueueSkipToRelativeIndex:(id)arg1;
-(BOOL)dequeueSkipToRelativeIndex:(id)arg1;
-(BOOL)haveQueuedSkips;
-(void)resynchronize;
-(id)metadataAtRelativeIndex:(int)arg1;
-(void)setNumberOfPagesAhead:(int)arg1;
-(void)setPendingMoveEvents:(id)arg1;
-(void)setMetadataCenter:(int)arg1;
-(id)initWithReverseDepth:(int)arg1 futureDepth:(int)arg2 delegate:(id)arg3;
-(void)moveToRelativePageIndex:(id)arg1 interactively:(BOOL)arg2;
-(void)setMetadata:(id)arg1 atRelativeIndex:(int)arg2;
-(void)setDelegate:(id)arg1;
-(void)setMetadata:(id)arg1;
-(void).cxx_destruct;
@end