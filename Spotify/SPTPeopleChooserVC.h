/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:41 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UISearchDisplayDelegate.h>
#import <UISearchBarDelegate.h>
#import <FBDialogDelegate.h>
#import <SPSocialLookupDelegate.h>
#import <SPTHTTPImageLoaderDelegate.h>
#import <SPTableViewDelegate.h>
#import <UITableViewDataSource.h>
#import <SPTNavigationControllerNavigationBarState.h>

@interface SPTPeopleChooserVC : SPViewController <UISearchDisplayDelegate, UISearchBarDelegate, FBDialogDelegate, SPSocialLookupDelegate, SPTHTTPImageLoaderDelegate, SPTableViewDelegate, UITableViewDataSource, SPTNavigationControllerNavigationBarState> {
	BOOL _allowsMultipleSelection; 
	id<PeopleChooserDelegate> _delegate; 
	NSDictionary* _users; 
	NSDictionary* _filteredUsers; 
	NSMutableArray* _selectedUsers; 
	UISearchBar* _searchBar; 
	UISearchDisplayController* _searchDC; 
	SPTableView* _tableView; 
	SPSocialLookup* _socialLookup; 
	NSArray* _friends; 
	UIActivityIndicatorView* _activityIndicator; 
	SPTHTTPImageLoader* _imageLoader; 
}
@property (assign,nonatomic,__weak) id<PeopleChooserDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection; 				//@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,retain) UISearchBar* searchBar; 				//@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) SPTableView* tableView; 				//@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSDictionary* users; 				//@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSDictionary* filteredUsers; 				//@synthesize filteredUsers=_filteredUsers - In the implementation block
@property (nonatomic,retain) NSMutableArray* selectedUsers; 				//@synthesize selectedUsers=_selectedUsers - In the implementation block
@property (nonatomic,retain) UISearchDisplayController* searchDC; 				//@synthesize searchDC=_searchDC - In the implementation block
@property (nonatomic,retain) SPSocialLookup* socialLookup; 				//@synthesize socialLookup=_socialLookup - In the implementation block
@property (nonatomic,retain) NSArray* friends; 				//@synthesize friends=_friends - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* activityIndicator; 				//@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) SPTHTTPImageLoader* imageLoader; 				//@synthesize imageLoader=_imageLoader - In the implementation block
-(void)applyThemeLayout;
-(void)imageLoader:(id)arg1 didFinishLoadingImage:(id)arg2 forURL:(id)arg3 context:(id)arg4 loadedSynchronously:(BOOL)arg5;
-(void)setImageLoader:(id)arg1;
-(void)setFilteredUsers:(id)arg1;
-(void)setSelectedUsers:(id)arg1;
-(void)onLogout;
-(void)populateFriends;
-(void)applyThemeLayoutToTableView:(id)arg1;
-(void)setSearchDC:(id)arg1;
-(void)setSocialLookup:(id)arg1;
-(id)keysForTableView:(id)arg1;
-(id)facebookUserDataAtIndexPath:(id)arg1 forTableView:(id)arg2;
-(id)userAtIndexPath:(id)arg1 forTableView:(id)arg2;
-(void)filterUsersBySearchString:(id)arg1;
-(void)socialLookup:(id)arg1 didFindFriends:(id)arg2;
-(void)socialLookup:(id)arg1 didFailWithError:(id)arg2;
-(unsigned)preferredNavigationBarState;
-(void)setFriends:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setAllowsMultipleSelection:(BOOL)arg1;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(id)sectionIndexTitlesForTableView:(id)arg1;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(id)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1;
-(void)searchDisplayControllerDidEndSearch:(id)arg1;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1;
-(void)searchDisplayControllerWillEndSearch:(id)arg1;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
-(void)setSearchBar:(id)arg1;
-(void)setActivityIndicator:(id)arg1;
-(void)setUsers:(id)arg1;
-(void).cxx_destruct;
@end