/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:31 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBBugReportData : NSObject {
	NSMutableDictionary* _dict; 
	NSMutableArray* _attachmentsPath; 
	NSDateFormatter* _dateFormatter; 
	NSNotificationCenter* _notificationCenter; 
}
+(id)sharedBugReportData;
-(unsigned)_dataLengthLimitForKey:(id)arg1;
-(void)_truncateData:(id)arg1 limit:(unsigned)arg2;
-(id)_takeScreenshot;
-(id)_sortableCurrentDateString;
-(void)appendToContext:(id)arg1 withFormat:(id)arg2;
-(id)stringForContext:(id)arg1;
-(id)allAttachmentPaths;
-(void)addAttachmentsPath:(id)arg1;
-(void)setContentsOfContext:(id)arg1 withFormat:(id)arg2;
-(void)saveScreenshot;
-(id)_attachmentsPath;
-(id)initWithNotificationCenter:(id)arg1;
-(id)allContexts;
-(id)init;
-(id)takeSnapshot;
-(void).cxx_destruct;
@end