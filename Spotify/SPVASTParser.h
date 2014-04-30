/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:51 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPVASTParser : NSObject {
	BOOL _running; 
	id<SPVASTParserDelegate> _delegate; 
	NSData* _data; 
	NSObject<OS_dispatch_queue>* _queue; 
}
@property (assign,nonatomic,__weak) id<SPVASTParserDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSData* data; 				//@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue>* queue; 				//@synthesize queue=_queue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running; 				//@synthesize running=_running - In the implementation block
-(id)initWithData:(id)arg1 queue:(id)arg2;
-(void)parse;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)setData:(id)arg1;
-(void)cancel;
-(void)start;
-(void)setRunning:(BOOL)arg1;
-(void)setQueue:(id)arg1;
-(void).cxx_destruct;
@end