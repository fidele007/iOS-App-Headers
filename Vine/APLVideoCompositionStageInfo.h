/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:24 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface APLVideoCompositionStageInfo : NSObject {
	struct {
		 start;
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
		 duration;
		long long value;
		int timescale;
		unsigned flags;
		long long epoch;
	} timeRange; 
	NSArray* layerNames; 
	NSDictionary* opacityRamps; 
}
-(void).cxx_destruct;
@end