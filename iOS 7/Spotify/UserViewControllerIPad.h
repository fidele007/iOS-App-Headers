/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:46 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTableModelDelegate.h>
#import <SPTableViewControllerWithTrackActionSupport.h>
#import <PlayableContextProtocol.h>
#import <ProfileHeaderViewIPadDelegate.h>
#import <SPPage.h>

@interface UserViewControllerIPad : SPTableViewController <SPTableModelDelegate, SPTableViewControllerWithTrackActionSupport, PlayableContextProtocol, ProfileHeaderViewIPadDelegate, SPPage> {
	id<PlayableContextProtocolDelegate> _contextDelegate; 
	SPUser* _user; 
	ProfileHeaderViewIPad* _headerView; 
	UserViewTableModel* _tableModel; 
}
@property (assign,nonatomic,__weak) id<PlayableContextProtocolDelegate> contextDelegate; 				//@synthesize contextDelegate=_contextDelegate - In the implementation block
@property (nonatomic,retain) SPUser* user; 				//@synthesize user=_user - In the implementation block
@property (nonatomic,retain) ProfileHeaderViewIPad* headerView; 				//@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UserViewTableModel* tableModel; 				//@synthesize tableModel=_tableModel - In the implementation block
@property (nonatomic,copy) NSURL* URL; 
+(void)load;
-(id)viewEventURI;
-(id)getContext;
-(void)setContextDelegate:(id)arg1;
-(int)stackedNavigationPageSize;
-(void)updateRowPositionForCell:(id)arg1 atIndexPath:(id)arg2;
-(void)actionButtonAction:(id)arg1;
-(void)setTableModel:(id)arg1;
-(void)setupDependencies;
-(SEL)selectorForArtistViewSectionHeader:(id)arg1;
-(id)dequeOrCreateCellForIndexPath:(id)arg1;
-(void)setupCell:(id)arg1 atIndexPath:(id)arg2;
-(void)presentArtist:(id)arg1;
-(BOOL)isSingleAtIndexPath:(id)arg1;
-(BOOL)indexPathIsSectionWithInlineHeader:(id)arg1;
-(void)tableModelDidBruteChangeContent:(id)arg1;
-(void)tableModelDidChangeContent:(id)arg1;
-(void)tableModel:(id)arg1 didChangeObjectsAtIndexPaths:(id)arg2 forChangeType:(int)arg3;
-(void)tableModelWillChangeContent:(id)arg1;
-(unsigned)tableTrackActionsContextRowForIndexPath:(id)arg1;
-(BOOL)tableTrackActionsSupportedForIndexPath:(id)arg1;
-(void)profileHeaderHeightDidChange:(float)arg1;
-(void)delayedLoadModel;
-(void)presentPlaylists;
-(void)presentTopArtists;
-(id)topArtistsSectionCellInTableView:(id)arg1 forIndexPath:(id)arg2;
-(BOOL)sectionUsesTrackNumber:(int)arg1;
-(void)setupCell:(id)arg1 forPlaylistSection:(id)arg2;
-(void)presentPlaylist:(id)arg1;
-(id)initWithUser:(id)arg1;
-(void)setUser:(id)arg1;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)setHeaderView:(id)arg1;
-(id)initWithURL:(id)arg1;
-(void).cxx_destruct;
@end