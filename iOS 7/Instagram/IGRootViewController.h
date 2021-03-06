/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:08 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGRootViewController : UIViewController {
	BOOL _isVisible; 
	BOOL _isManagingChildViewControllerAppearance; 
	IGRegistrationNavigationController* _registrationController; 
	int _loginState; 
	UIWindow* _popoverWindow; 
	UIViewController* _popoverViewController; 
}
@property (nonatomic,copy) UIViewController* topMostViewController; 
@property (nonatomic,retain) IGRegistrationNavigationController* registrationController; 				//@synthesize registrationController=_registrationController - In the implementation block
@property (assign,nonatomic) int loginState; 				//@synthesize loginState=_loginState - In the implementation block
@property (nonatomic,copy) UIViewController* visibleViewController; 
@property (nonatomic,retain) UIWindow* popoverWindow; 				//@synthesize popoverWindow=_popoverWindow - In the implementation block
@property (nonatomic,retain) UIViewController* popoverViewController; 				//@synthesize popoverViewController=_popoverViewController - In the implementation block
@property (assign,nonatomic) BOOL isVisible; 				//@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) BOOL isManagingChildViewControllerAppearance; 				//@synthesize isManagingChildViewControllerAppearance=_isManagingChildViewControllerAppearance - In the implementation block
-(void)moveAppToLoggedOutStateAnimated:(BOOL)arg1;
-(void)moveAppToLoggedInStateWithMainFeedSource:(id)arg1 animated:(BOOL)arg2;
-(id)viewControllerStack;
-(void)setIsVisible:(BOOL)arg1;
-(void)moveToAppLoginState:(int)arg1 mainFeedSource:(id)arg2 animated:(BOOL)arg3;
-(void)setPopoverWindow:(id)arg1;
-(void)setPopoverViewController:(id)arg1;
-(void)showMainAppControllerWithMainFeedSource:(id)arg1 animated:(BOOL)arg2;
-(void)showLoginControllerAnimated:(BOOL)arg1;
-(void)setIsManagingChildViewControllerAppearance:(BOOL)arg1;
-(void)setRegistrationController:(id)arg1;
-(void)presentPopoverController:(id)arg1;
-(void)dismissPopoverController;
-(void)setLoginState:(int)arg1;
-(id)init;
-(int)preferredStatusBarStyle;
-(void)viewWillAppear:(BOOL)arg1;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void).cxx_destruct;
@end