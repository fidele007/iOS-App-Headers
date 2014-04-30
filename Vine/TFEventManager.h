/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:35 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface TFEventManager : NSObject {
	NSString* _queueKey; 
	NSString* _queueFolderPath; 
	unsigned long long _queueCountOffset; 
	unsigned long _queueCount; 
	NSFileHandle* _queue; 
	NSString* _queuePath; 
	NSMutableArray* _queuePathsHighPriority; 
	NSMutableArray* _queuePaths; 
	NSArray* _oldQueuePaths; 
	NSURL* _url; 
}
@property (nonatomic,retain) NSURL* url; 				//@synthesize url=_url - In the implementation block
+(void)_ensureNetworkStartDataIsSetup;
+(void)bustCachedNetworkStartData;
+(id)eventManagerWithQueueKey:(id)arg1 url:(id)arg2;
+(void)flush;
+(void)initialize;
-(void)_endCurrentEventQueue;
-(id)initWithQueueKey:(id)arg1 url:(id)arg2;
-(void)_getOldQueuePaths;
-(void)enqueueObject:(id)arg1 andSendImmediately:(BOOL)arg2;
-(void)_ensureEventQueueIsSetup;
-(void)_createNewQueueAtPath:(id)arg1 itemCount:(unsigned long)arg2;
-(id)_createNewQueueFileName;
-(BOOL)enqueueDictionary:(id)arg1 withExtraPairWithKey:(id)arg2 andObjectDataWriter:(id)arg3;
-(void)dealloc;
-(id)init;
-(void)setUrl:(id)arg1;
-(void)enqueueObject:(id)arg1;
-(void)_flush;
-(void).cxx_destruct;
@end