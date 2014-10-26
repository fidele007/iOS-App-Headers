/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:21 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface DDLog : NSObject {
}
+(BOOL)logLevel:(int)arg1 enabledForTag:(id)arg2;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(r*)arg6 className:(r*)arg7 function:(r*)arg8 line:(int)arg9 format:(id)arg10;
+(void)addLogger:(id)arg1;
+(void)setLogLevel:(int)arg1 forTag:(id)arg2;
+(int)logLevelForTag:(id)arg1;
+(id)loggingQueue;
+(void)lt_addLogger:(id)arg1;
+(void)lt_removeLogger:(id)arg1;
+(void)lt_removeAllLoggers;
+(void)lt_log:(id)arg1;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(r*)arg6 className:(r*)arg7 function:(r*)arg8 line:(int)arg9 format:(id)arg10 args:(void*)arg11;
+(void)queueLogMessage:(id)arg1 asynchronously:(BOOL)arg2;
+(void)lt_flush;
+(BOOL)isRegisteredClass:(Class)arg1;
+(id)registeredClasses;
+(int)logLevelForClass:(Class)arg1;
+(void)setLogLevel:(int)arg1 forClass:(Class)arg2;
+(void)removeLogger:(id)arg1;
+(void)removeAllLoggers;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(r*)arg5 className:(r*)arg6 function:(r*)arg7 line:(int)arg8 format:(id)arg9;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(r*)arg5 className:(r*)arg6 function:(r*)arg7 line:(int)arg8 format:(id)arg9 args:(void*)arg10;
+(id)registeredClassNames;
+(int)logLevelForClassWithName:(id)arg1;
+(void)setLogLevel:(int)arg1 forClassWithName:(id)arg2;
+(void)applicationWillTerminate:(id)arg1;
+(void)initialize;
+(void)flushLog;
@end