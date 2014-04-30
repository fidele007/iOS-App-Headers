/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:02 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTPlayerObserver.h>
#import <SPTNowPlayingManager.h>

@interface SPTNowPlayingManagerImplementation : NSObject <SPTPlayerObserver, SPTNowPlayingManager> {
	MetaViewController* _metaViewController; 
	SPTPlayerState* _currentState; 
}
@property (assign,nonatomic,__weak) MetaViewController* metaViewController; 				//@synthesize metaViewController=_metaViewController - In the implementation block
@property (nonatomic,retain) SPTPlayerState* currentState; 				//@synthesize currentState=_currentState - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
-(void)setMetaViewController:(id)arg1;
-(void)player:(id)arg1 stateDidChange:(id)arg2;
-(id)initWithMetaViewController:(id)arg1 player:(id)arg2;
-(void)setHidden:(BOOL)arg1;
-(void)setCurrentState:(id)arg1;
-(void).cxx_destruct;
@end