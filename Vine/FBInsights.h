/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:04 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBInsights : NSObject {
}
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 session:(id)arg4;
+(int)flushBehavior;
+(void)setFlushBehavior:(int)arg1;
+(void)logPurchase:(double)arg1 currency:(id)arg2;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 session:(id)arg3;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2;
+(void)flush;
+(id)appVersion;
+(void)setAppVersion:(id)arg1;
@end