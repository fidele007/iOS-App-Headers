/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:08 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UINavigationControllerDelegate.h>

@interface LineNavigationController : NLAppearanceCustomizedNavigationController <UINavigationControllerDelegate> {
	id<UINavigationControllerDelegate> originalDelegate_; 
	NSString* closeButtonTitle_; 
	BOOL shouldShowCloseButtonOnRightSide_; 
	BOOL shouldHideRightButtonWhenNonTopStack_; 
	BOOL dismissActionAnimated_; 
	id dismissedBlock_; 
}
@property (assign,nonatomic) BOOL shouldShowCloseButtonOnRightSide; 
@property (assign,nonatomic) BOOL shouldHideRightButtonWhenNonTopStack; 
@property (assign,nonatomic) BOOL dismissActionAnimated; 
@property (nonatomic,copy) id dismissedBlock; 
+(id)doseNotAppliedThemeViewControllers;
+(void)showPresentViewController:(id)arg1;
-(void)dismissModalViewController;
-(void)setCloseButtonTitle:(id)arg1;
-(BOOL)isNotAppliedThemeViewController:(id)arg1;
-(void)setShouldShowCloseButtonOnRightSide:(BOOL)arg1;
-(void)setShouldHideRightButtonWhenNonTopStack:(BOOL)arg1;
-(void)setDismissActionAnimated:(BOOL)arg1;
-(void)setDismissedBlock:(id)arg1;
-(id)popViewControllerAnimated:(BOOL)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
-(id)initWithRootViewController:(id)arg1;
-(void).cxx_destruct;
@end