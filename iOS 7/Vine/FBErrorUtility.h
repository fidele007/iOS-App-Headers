/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:37 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBErrorUtility : NSObject {
}
+(id)fberrorForRetry:(id)arg1;
+(void)fberrorGetCodeValueForError:(id)arg1 index:(unsigned)arg2 code:(int*)arg3 subcode:(int*)arg4;
+(int)fberrorCategoryFromError:(id)arg1 code:(int)arg2 subcode:(int)arg3 returningUserMessage:(id*)arg4 andShouldNotifyUser:(BOOL*)arg5;
+(BOOL)fberrorIsErrorFromSystemSession:(id)arg1;
+(int)errorCategoryForError:(id)arg1;
+(BOOL)shouldNotifyUserForError:(id)arg1;
+(id)userMessageForError:(id)arg1;
+(id)fberrorForSystemPasswordChange:(id)arg1;
@end