/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:45 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPApHermesController : NSObject {
	SPSession* _session; 
	NSMutableSet* _inFlight; 
}
@property (assign,nonatomic,__weak) SPSession* session; 				//@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableSet* inFlight; 				//@synthesize inFlight=_inFlight - In the implementation block
-(id)request:(id)arg1 usingMethod:(id)arg2 payload:(id)arg3 whenDone:(id)arg4;
-(id)request:(id)arg1 usingMethod:(id)arg2 whenDone:(id)arg3;
-(void)noLongerInFlight:(id)arg1;
-(void)setInFlight:(id)arg1;
-(void)setSession:(id)arg1;
-(id)initWithSession:(id)arg1;
-(void).cxx_destruct;
@end