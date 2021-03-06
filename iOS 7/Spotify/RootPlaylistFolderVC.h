/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:20 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SyncProgressDelegate.h>

@interface RootPlaylistFolderVC : PlaylistFolderWithTopHeaderVC <SyncProgressDelegate> {
	UITableView* _tableView2; 
}
@property (nonatomic,retain) UITableView* tableView2; 				//@synthesize tableView2=_tableView2 - In the implementation block
-(id)viewEventURI;
-(void)syncProgressStoppedSyncing:(id)arg1;
-(void)syncProgressStartedSyncing:(id)arg1;
-(void)setTableView2:(id)arg1;
-(BOOL)ensureChildPlaylistIsPresented;
-(CGRect)startingViewFrameForSyncProgressController:(id)arg1;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithURL:(id)arg1;
-(void)setFolder:(id)arg1;
-(void).cxx_destruct;
@end