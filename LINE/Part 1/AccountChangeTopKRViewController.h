/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:15 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIActionSheetDelegate.h>
#import <UIAlertViewDelegate.h>

@interface AccountChangeTopKRViewController : NLTableViewController <UIActionSheetDelegate, UIAlertViewDelegate> {
}
-(id)makeDeleteAccountView;
-(void)openDeleteAccountActionSheet;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(id)initWithStyle:(int)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
@end