/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:27 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface JKSerializer : NSObject {
	struct JKEncodeState* encodeState; 
}
+(id)serializeObject:(id)arg1 options:(unsigned)arg2 encodeOption:(unsigned)arg3 block:(id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7;
-(id)serializeObject:(id)arg1 options:(unsigned)arg2 encodeOption:(unsigned)arg3 block:(id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7;
-(void)releaseState;
-(void)dealloc;
@end