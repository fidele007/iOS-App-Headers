/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:16:15 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAClassRegistry : NSObject {
	NSMutableDictionary* _classesByAceClassNameByGroupIdentifier; 
	NSObject<OS_dispatch_queue>* _queue; 
}
@property (getter=_classesByAceClassNameByGroupIdentifier,nonatomic,copy) NSMutableDictionary* classesByAceClassNameByGroupIdentifier; 				//@synthesize classesByAceClassNameByGroupIdentifier=_classesByAceClassNameByGroupIdentifier - In the implementation block
@property (getter=_queue,nonatomic,copy) NSObject<OS_dispatch_queue>* queue; 				//@synthesize queue=_queue - In the implementation block
+(id)sharedClassRegistry;
-(void)dealloc;
-(id)init;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3;
-(void)_accessMutableStateWithBlock:(id)arg1;
@end