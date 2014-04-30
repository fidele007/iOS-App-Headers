/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:52 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNFacebookService : VNServiceBase {
	id _connectSuccessBlock; 
	id _connectErrorBlock; 
}
@property (nonatomic,copy) id connectSuccessBlock; 				//@synthesize connectSuccessBlock=_connectSuccessBlock - In the implementation block
@property (nonatomic,copy) id connectErrorBlock; 				//@synthesize connectErrorBlock=_connectErrorBlock - In the implementation block
+(void)didFinishLaunching;
+(BOOL)handleOpenURL:(id)arg1;
+(BOOL)sharingOn;
+(BOOL)accountBound;
+(void)setSharingOn:(BOOL)arg1;
+(id)connectAccount:(id)arg1 error:(id)arg2;
+(void)clearLocalAccount;
+(void)checkToken:(id)arg1 error:(id)arg2;
+(void)checkPermissions:(id)arg1 error:(id)arg2;
+(id)clearAccount:(id)arg1 error:(id)arg2;
+(id)sharedInstance;
+(void)applicationWillTerminate;
+(void)applicationDidBecomeActive;
-(void)clearConnectCallbacks;
-(void)_connectAccount:(id)arg1 error:(id)arg2;
-(void)sessionStateChanged:(id)arg1 state:(int)arg2 error:(id)arg3;
-(void)setConnectSuccessBlock:(id)arg1;
-(void)setConnectErrorBlock:(id)arg1;
-(void).cxx_destruct;
@end