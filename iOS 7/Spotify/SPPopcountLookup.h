/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:16 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPPopcountLookup : NSObject {
	struct unique_ptr<PopcountObjC, std__1default_delete<PopcountObjC> > _popcountObjC; 
	id<SPPopcountLookupDelegate> _delegate; 
	SPURL* _link; 
	SPSession* _session; 
}
@property (assign,nonatomic) id<SPPopcountLookupDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SPURL* link; 				//@synthesize link=_link - In the implementation block
@property (nonatomic,retain) SPSession* session; 				//@synthesize session=_session - In the implementation block
-(id)initWithLink:(id)arg1 session:(id)arg2;
-(void)setSession:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)start;
-(id).cxx_construct;
-(void)setLink:(id)arg1;
-(void).cxx_destruct;
@end