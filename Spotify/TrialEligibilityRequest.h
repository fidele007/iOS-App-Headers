/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:32 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface TrialEligibilityRequest : NSObject {
	id<TrialEligibilityRequestDelegate> _delegate; 
	NSString* _username; 
	NSString* _country; 
	NSString* _deviceId; 
	SPApHermesController* _hermesController; 
	SPApHermesRequest* _request; 
}
@property (assign,nonatomic,__weak) id<TrialEligibilityRequestDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString* username; 				//@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString* country; 				//@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString* deviceId; 				//@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) SPApHermesController* hermesController; 				//@synthesize hermesController=_hermesController - In the implementation block
@property (nonatomic,retain) SPApHermesRequest* request; 				//@synthesize request=_request - In the implementation block
-(void)setDeviceId:(id)arg1;
-(void)setHermesController:(id)arg1;
-(void)finishWithResponse:(id)arg1;
-(id)initWithDeviceId:(id)arg1 hermesController:(id)arg2;
-(void)setCountry:(id)arg1;
-(void)setRequest:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(void)start;
-(void)setUsername:(id)arg1;
-(void)failWithError:(id)arg1;
-(void).cxx_destruct;
@end