/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:02 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <EmailPasswordDelegate.h>

@interface RegistrationRemindAccountViewController : NLViewController <EmailPasswordDelegate> {
	UIScrollView* bgScrollView; 
	UIImageView* popupImage; 
	UILabel* descriptionLabel; 
	UIButton* skipButton; 
}
-(void)configureNavigationItem;
-(void)changeFocus:(int)arg1 in:(BOOL)arg2;
-(void)clickConfirm:(id)arg1 password:(id)arg2;
-(void)naverInfo;
-(void)lastFieldDidEndEditing;
-(void)didReceiveKeyboardWillShowHideNotification:(id)arg1;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)close;
-(void).cxx_destruct;
@end