/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:00 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGFeedStatusViewDataSource.h>

@interface IGExploreFindFriendsViewController : IGPlainTableViewController <IGFeedStatusViewDataSource> {
	BOOL _fetchedOnce; 
	BOOL _isFetching; 
	BOOL _authFailed; 
	NSArray* _allUsers; 
	NSURL* _fetchURL; 
	NSDictionary* _postData; 
	int _defaultFollowStatus; 
	UIView* _connectToFacebookView; 
	UIView* _horizontalTopSeparator; 
	int _status; 
	IGFeedStatusView* _feedStatusView; 
}
@property (nonatomic,retain) NSArray* allUsers; 				//@synthesize allUsers=_allUsers - In the implementation block
@property (nonatomic,retain) NSURL* fetchURL; 				//@synthesize fetchURL=_fetchURL - In the implementation block
@property (nonatomic,retain) NSDictionary* postData; 				//@synthesize postData=_postData - In the implementation block
@property (assign,nonatomic) int defaultFollowStatus; 				//@synthesize defaultFollowStatus=_defaultFollowStatus - In the implementation block
@property (assign) BOOL fetchedOnce; 				//@synthesize fetchedOnce=_fetchedOnce - In the implementation block
@property (assign) BOOL isFetching; 				//@synthesize isFetching=_isFetching - In the implementation block
@property (assign) BOOL authFailed; 				//@synthesize authFailed=_authFailed - In the implementation block
@property (nonatomic,retain) UIView* connectToFacebookView; 				//@synthesize connectToFacebookView=_connectToFacebookView - In the implementation block
@property (nonatomic,retain) UIView* horizontalTopSeparator; 				//@synthesize horizontalTopSeparator=_horizontalTopSeparator - In the implementation block
@property (assign,nonatomic) int status; 				//@synthesize status=_status - In the implementation block
@property (nonatomic,retain) IGFeedStatusView* feedStatusView; 				//@synthesize feedStatusView=_feedStatusView - In the implementation block
-(BOOL)loadedOnce;
-(BOOL)failedWithAuthorizationError;
-(void)setFeedStatusView:(id)arg1;
-(void)setFetchURL:(id)arg1;
-(void)setAllUsers:(id)arg1;
-(void)fetchUsers;
-(id)emptyMessage;
-(void)onFacebookAuthSuccess;
-(void)onFacebookAuthFailure;
-(void)setHorizontalTopSeparator:(id)arg1;
-(void)fetchFaceboookFriends;
-(void)setAuthFailed:(BOOL)arg1;
-(void)setConnectToFacebookView:(id)arg1;
-(void)loadFacebookFriends;
-(void)setPostData:(id)arg1;
-(void)onFriendStatusesFetched:(id)arg1;
-(void)setFetchedOnce:(BOOL)arg1;
-(void)setDefaultFollowStatus:(int)arg1;
-(id)errorMessage;
-(unsigned)itemCount;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(struct UIEdgeInsets)preferredContentInsets;
-(void)setStatus:(int)arg1;
-(void)login;
-(BOOL)moreAvailable;
-(void)setIsFetching:(BOOL)arg1;
-(void).cxx_destruct;
@end