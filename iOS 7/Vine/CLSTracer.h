/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:09 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CLSTracer : NSObject {
	int _fileDescriptor; 
	struct dispatch_queue_s* _queue; 
	struct dispatch_source_s* _samplingTimer; 
}
-(void)sample;
-(void)handleInitialNotification:(id)arg1;
-(void)handleNotification:(id)arg1;
-(void)dealloc;
-(id)initWithPath:(id)arg1;
@end