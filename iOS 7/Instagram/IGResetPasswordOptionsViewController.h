/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:22 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGCoreTextLinkHandler.h>

@interface IGResetPasswordOptionsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler> {
	int _emailRequestState; 
	int _smsRequestState; 
	int _lastSentMedium; 
	BOOL _hasValidPhone; 
	IGUser* _user; 
	NSString* _userEmail; 
	UIView* _emailConformationFooterView; 
	UIView* _smsConfirmationFooterView; 
}
@property (nonatomic,retain) IGUser* user; 				//@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString* userEmail; 				//@synthesize userEmail=_userEmail - In the implementation block
@property (assign,nonatomic) BOOL hasValidPhone; 				//@synthesize hasValidPhone=_hasValidPhone - In the implementation block
@property (nonatomic,retain) UIView* emailConformationFooterView; 				//@synthesize emailConformationFooterView=_emailConformationFooterView - In the implementation block
@property (nonatomic,retain) UIView* smsConfirmationFooterView; 				//@synthesize smsConfirmationFooterView=_smsConfirmationFooterView - In the implementation block
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
-(id)emailConfirmationView;
-(id)smsConfirmationView;
-(void)setUserEmail:(id)arg1;
-(void)setHasValidPhone:(BOOL)arg1;
-(void)setEmailConformationFooterView:(id)arg1;
-(void)setSmsConfirmationFooterView:(id)arg1;
-(void)setUser:(id)arg1;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void).cxx_destruct;
@end