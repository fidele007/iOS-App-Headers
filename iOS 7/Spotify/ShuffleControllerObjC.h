/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:14 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol ShuffleControllerObjC
@property (getter=isPlayingRecommendation,nonatomic,copy) BOOL playingRecommendation; 
@property (nonatomic,copy) BOOL hasNextTrack; 
@property (nonatomic,copy) SPTrackContext* currentContext; 
@required
-(BOOL)hasNextTrack;
-(BOOL)isPlayingRecommendation;
-(void)removeObserver(id):arg1 ;
-(id)currentContext;
-(void)addObserver(id):arg1 ;
-(BOOL)hasNextTrack;
-(BOOL)isPlayingRecommendation;
-(void)removeObserver(id):arg1 ;
-(id)currentContext;
-(void)addObserver(id):arg1 ;
@end
