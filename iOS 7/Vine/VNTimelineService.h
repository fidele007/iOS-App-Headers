/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:08 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNTimelineService : VNServiceBase {
}
+(id)timelineWithTag:(id)arg1;
+(id)timelineEditorsPicks;
+(id)timelinePopular;
+(id)timelineGlobal;
+(id)timelineWithPost:(id)arg1;
+(id)timelineTrending;
+(id)timelineWithChannelPopular:(id)arg1;
+(id)timelineWithChannelRecent:(id)arg1;
+(id)timelineWithPath:(id)arg1;
+(id)timelineGraph;
+(id)timelineWithUserNoRevines:(id)arg1;
+(id)timelineWithUser:(id)arg1;
+(id)timelineWithUserLikes:(id)arg1;
+(id)timelineWithVenue:(id)arg1;
+(id)timelineWithEndpoint:(id)arg1;
+(id)timelineGraph:(id)arg1 error:(id)arg2;
+(id)timelinePopular:(id)arg1 error:(id)arg2;
+(id)timelineEditorsPicks:(id)arg1 error:(id)arg2;
+(id)timelineTrending:(id)arg1 error:(id)arg2;
+(id)timelineGlobal:(id)arg1 error:(id)arg2;
+(id)timelineWithTag:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithPost:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithVenue:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithUser:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithUserNoRevines:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithUserLikes:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithChannelPopular:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithChannelRecent:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithPath:(id)arg1 success:(id)arg2 error:(id)arg3;
+(id)timelineWithEndpoint:(id)arg1 success:(id)arg2 error:(id)arg3;
-(void)nextPage:(id)arg1 success:(id)arg2 error:(id)arg3;
-(void)firstPage:(id)arg1 error:(id)arg2;
-(void)previousPage:(id)arg1 success:(id)arg2 error:(id)arg3;
-(BOOL)isPopular;
-(BOOL)isTrending;
-(BOOL)isTag;
-(id)initWithEndpoint:(id)arg1;
-(void)dealloc;
@end