/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:36 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITCrashReportTextFormatter : NSObject {
}
+(id)selectorForRegisterWithName:(id)arg1 ofThread:(id)arg2 report:(id)arg3;
+(id)bit_formatStackFrame:(id)arg1 frameIndex:(unsigned)arg2 report:(id)arg3 lp64:(BOOL)arg4;
+(id)bit_archNameFromImageInfo:(id)arg1;
+(id)stringValueForCrashReport:(id)arg1 crashReporterKey:(id)arg2;
+(id)arrayOfAppUUIDsForCrashReport:(id)arg1;
@end