/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:19 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashReporter : NSObject {
	BITPLCrashReporterConfig* _config; 
	BOOL _enabled; 
	BITPLCrashMachExceptionServer* _machServer; 
	BITPLCrashMachExceptionPortSet* _previousMachPorts; 
	NSString* _applicationIdentifier; 
	NSString* _applicationVersion; 
	NSString* _crashReportDirectory; 
}
+(id)sharedReporter;
+(void)initialize;
-(id)initWithBundle:(id)arg1 configuration:(id)arg2;
-(id)crashReportPath;
-(id)loadPendingCrashReportDataAndReturnError:(id*)arg1;
-(BOOL)purgePendingCrashReportAndReturnError:(id*)arg1;
-(BOOL)enableCrashReporterAndReturnError:(id*)arg1;
-(BOOL)populateCrashReportDirectoryAndReturnError:(id*)arg1;
-(int)mapToAsyncSymbolicationStrategy:(unsigned)arg1;
-(id)enableMachExceptionServerWithPreviousPortSet:(id*)arg1 callback:(?*)arg2 context:(void*)arg3 error:(id*)arg4;
-(id)generateLiveReportWithThread:(unsigned)arg1 error:(id*)arg2;
-(id)generateLiveReportAndReturnError:(id*)arg1;
-(BOOL)hasPendingCrashReport;
-(id)loadPendingCrashReportData;
-(BOOL)purgePendingCrashReport;
-(BOOL)enableCrashReporter;
-(id)generateLiveReportWithThread:(unsigned)arg1;
-(id)generateLiveReport;
-(void)setCrashCallbacks:(struct PLCrashReporterCallbacks*)arg1;
-(id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 configuration:(id)arg3;
-(id)crashReportDirectory;
-(id)queuedCrashReportDirectory;
-(void)dealloc;
-(id)init;
-(id)initWithConfiguration:(id)arg1;
@end