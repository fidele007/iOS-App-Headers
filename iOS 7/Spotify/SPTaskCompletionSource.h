/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:33 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTaskCompletionSource : NSObject {
	SPTask* _task; 
	NSMutableArray* _cancellationHandlers; 
}
-(void)completeWithValue:(id)arg1;
-(void)completeWithTask:(id)arg1;
-(id)voidResolver;
-(id)resolver;
-(void)addCancellationCallback:(id)arg1;
-(id)init;
-(void)cancel;
-(id)task;
-(void)failWithError:(id)arg1;
-(void).cxx_destruct;
@end