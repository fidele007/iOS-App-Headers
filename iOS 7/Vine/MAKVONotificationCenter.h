/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:21 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MAKVONotificationCenter : NSObject {
}
+(id)defaultCenter;
+(void)initialize;
-(id)addObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 options:(unsigned)arg6;
-(void)_swizzleObjectClassIfNeeded:(id)arg1;
-(id)addObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 options:(unsigned)arg4 block:(id)arg5;
-(void)removeObserver:(id)arg1 object:(id)arg2 keyPath:(id)arg3 selector:(SEL)arg4;
-(void)removeObservation:(id)arg1;
@end