/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:52 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineRegisterWithSnsIdResult : NSObject {
	NSString* __authToken; 
	BOOL __userCreated; 
	struct {
		unsigned int userCreated:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* authToken; 				//@synthesize _authToken=__authToken - In the implementation block
@property (assign,getter=isUserCreated,nonatomic) BOOL userCreated; 				//@synthesize _userCreated=__userCreated - In the implementation block
-(void)read:(id)arg1;
-(void)setUserCreated:(BOOL)arg1;
-(void)setAuthToken:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end