/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:56 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashMachExceptionPort : NSObject {
	unsigned _mask; 
	unsigned _port; 
	int _behavior; 
	int _flavor; 
}
@property (nonatomic,copy) unsigned server_port; 				//@synthesize port=_port - In the implementation block
@property (nonatomic,copy) unsigned mask; 				//@synthesize mask=_mask - In the implementation block
@property (nonatomic,copy) int behavior; 				//@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) int flavor; 				//@synthesize flavor=_flavor - In the implementation block
+(id)exceptionPortsForTask:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3;
+(id)exceptionPortsForThread:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3;
-(BOOL)registerForTask:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3;
-(id)initWithServerPort:(unsigned)arg1 mask:(unsigned)arg2 behavior:(int)arg3 flavor:(int)arg4;
-(BOOL)registerForThread:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3;
-(void)dealloc;
@end