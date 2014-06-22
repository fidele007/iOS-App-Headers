/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:52 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGGroupedTableViewDataSource.h>

@interface IGGroupedTableViewController : IGPlainTableViewController <IGGroupedTableViewDataSource> {
	float _tableViewBottomPadding; 
}
@property (assign,nonatomic) IGUser* passwordResetUser; 
@property (assign,nonatomic) NSString* passwordResetUserEmail; 
@property (assign,nonatomic) BOOL fetchingResetToken; 
@property (assign,nonatomic) BOOL animateResetVC; 
@property (nonatomic,retain) IGGroupedTableView* tableView; 
@property (assign,nonatomic) float tableViewBottomPadding; 				//@synthesize tableViewBottomPadding=_tableViewBottomPadding - In the implementation block
-(id)titleForUnlinkSection;
-(void)configureUnlinkCell:(id)arg1;
-(void)didSelectUnlinkCellForServiceType:(int)arg1;
-(void)onFacebookAuthSuccess;
-(void)onFacebookAuthCancelled;
-(void)setPasswordResetUser:(id)arg1;
-(void)loginViaFacebook;
-(void)setAnimateResetVC:(BOOL)arg1;
-(void)setPasswordResetUserEmail:(id)arg1;
-(void)startObservingFacebookAuthNotifications;
-(void)stopObservingFacebookAuthNotifications;
-(void)validateFacebookToken;
-(void)setFetchingResetToken:(BOOL)arg1;
-(void)configureFacebookCell:(id)arg1;
-(void)getFacebookTokenForForPasswordResetForUser:(id)arg1;
-(void)getFacebookTokenForForPasswordResetForUserEmail:(id)arg1;
-(void)setTableViewBottomPadding:(float)arg1;
-(id)subtitleForHeaderInSection:(int)arg1;
-(id)titleForFooterInSection:(int)arg1;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(void)viewWillAppear:(BOOL)arg1;
@end