/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:15 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <DDLogger.h>

@interface DDAbstractLogger : NSObject <DDLogger> {
	id<DDLogFormatter> formatter; 
	NSObject<OS_dispatch_queue>* loggerQueue; 
}
-(void)setLogFormatter:(id)arg1;
-(void)logMessage:(id)arg1;
-(id)logFormatter;
-(id)loggerQueue;
-(id)loggerName;
-(void)dealloc;
-(id)init;
@end