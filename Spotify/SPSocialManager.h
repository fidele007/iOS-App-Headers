/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:58 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPSocialManager : NSObject {
	struct SocialManager* _social; 
	BOOL _didGetFBAPIResponse; 
	BOOL currentFBAPICallResent; 
	int _socialState; 
	NSMutableArray* _stateBlocks; 
	int _facebookState; 
	int _socialDataState; 
	NSMutableArray* _userDataChangeBlocks; 
	unsigned _facebookAuthTask; 
	id _facebookAuthBlock; 
	id _lookupPermissionsBlock; 
	NSMutableArray* _outstandingJobs; 
	int currentFBAPICall; 
	NSMutableArray* _currentFBFriends; 
	struct SPSMCallbacks _callbacks; 
}
@property (assign,nonatomic) int socialDataState; 				//@synthesize socialDataState=_socialDataState - In the implementation block
@property (assign,nonatomic) int socialState; 				//@synthesize socialState=_socialState - In the implementation block
@property (assign,nonatomic) int facebookState; 				//@synthesize facebookState=_facebookState - In the implementation block
@property (assign,nonatomic) unsigned facebookAuthTask; 				//@synthesize facebookAuthTask=_facebookAuthTask - In the implementation block
@property (nonatomic,copy) id facebookAuthBlock; 				//@synthesize facebookAuthBlock=_facebookAuthBlock - In the implementation block
@property (nonatomic,copy) id lookupPermissionsBlock; 				//@synthesize lookupPermissionsBlock=_lookupPermissionsBlock - In the implementation block
@property (nonatomic,copy) NSMutableArray* outstandingJobs; 				//@synthesize outstandingJobs=_outstandingJobs - In the implementation block
@property (nonatomic,retain) NSMutableArray* stateBlocks; 				//@synthesize stateBlocks=_stateBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray* userDataChangeBlocks; 				//@synthesize userDataChangeBlocks=_userDataChangeBlocks - In the implementation block
@property (assign,nonatomic) BOOL didGetFBAPIResponse; 				//@synthesize didGetFBAPIResponse=_didGetFBAPIResponse - In the implementation block
@property (assign,nonatomic) int currentFBAPICall; 
@property (assign,nonatomic) BOOL currentFBAPICallResent; 
@property (nonatomic,retain) NSMutableArray* currentFBFriends; 				//@synthesize currentFBFriends=_currentFBFriends - In the implementation block
@property (assign,nonatomic) struct SPSMCallbacks callbacks; 				//@synthesize callbacks=_callbacks - In the implementation block
-(id)initWithSocialManager:(struct SocialManager*)arg1;
-(id)fbMissingPermissions;
-(void)facebookAssurePermissions:(id)arg1 onComplete:(id)arg2;
-(id)fbMissingPermissionsForIntro;
-(void)connectToFacebookWithPermissions:(id)arg1 delegate:(id)arg2;
-(void)setStateBlocks:(id)arg1;
-(void)setUserDataChangeBlocks:(id)arg1;
-(void)setCurrentFBFriends:(id)arg1;
-(void)cancelFBAuth;
-(struct SocialManager*)socialManager;
-(id)addStateUpdateCallback:(id)arg1;
-(void)removeStateUpdateCallback:(id)arg1;
-(id)addSocialUserDataChangeCallback:(id)arg1;
-(void)removeSocialUserDataChangeCallback:(id)arg1;
-(id)userWithCanonicalUsername:(id)arg1;
-(void)setSocialState:(int)arg1;
-(void)setFacebookState:(int)arg1;
-(void)setSocialDataState:(int)arg1;
-(void)setDidGetFBAPIResponse:(BOOL)arg1;
-(void)setFacebookAuthTask:(unsigned)arg1;
-(void)setFacebookAuthBlock:(id)arg1;
-(void)setLookupPermissionsBlock:(id)arg1;
-(void)setCurrentFBAPICall:(int)arg1;
-(void)setCurrentFBAPICallResent:(BOOL)arg1;
-(void)fbDidLogin;
-(void)fbDidNotLogin:(BOOL)arg1;
-(void)fbDidExtendToken:(id)arg1 expiresAt:(id)arg2;
-(void)fbDidLogout;
-(void)fbSessionInvalidated;
-(BOOL)permissionIsRequired:(id)arg1;
-(void)magicallyGrantPermissions:(id)arg1;
-(struct FacebookService*)facebookService;
-(void)appBecameActive;
-(void)startAuthBackgroundTask;
-(void)endAuthBackgroundTask;
-(void)jobCompleted:(id)arg1;
-(id)fbGrantedPermissions;
-(void)facebookLookupPermissionsAnd:(id)arg1;
-(void)facebookAssurePermissions:(id)arg1 willPresent:(id)arg2 onComplete:(id)arg3;
-(id)shareLinkOnFacebook:(id)arg1 withMessage:(id)arg2 onComplete:(id)arg3;
-(void)dealloc;
-(id).cxx_construct;
-(void)setCallbacks:(struct SPSMCallbacks)arg1;
-(void).cxx_destruct;
@end