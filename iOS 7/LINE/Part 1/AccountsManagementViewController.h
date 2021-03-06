/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AccountsManagementViewController : NLTableViewController {
	BOOL isRegisteredLineAccount; 
	NSMutableArray* _sections; 
}
@property (nonatomic,retain) NSMutableArray* sections; 				//@synthesize sections=_sections - In the implementation block
-(id)makeLongFooterFor:(unsigned)arg1;
-(void)reloadSettingInfo;
-(BOOL)migrationCodeEnabled;
-(int)sectionValueForSectionIndex:(int)arg1;
-(BOOL)isAuthorizingDesktopEnabled;
-(BOOL)registeredEmailAccount;
-(void)logoutFromSNS:(id)arg1;
-(void)loginToSNS:(id)arg1;
-(void)actionChangeAuthoringDesktopSetting:(id)arg1;
-(BOOL)registeredPhone;
-(void)configureSections;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)setSections:(id)arg1;
-(void).cxx_destruct;
@end