/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:19 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PlaylistFolderWithTopHeaderVC : PlaylistFolderWithExtrasVC {
}
@property (nonatomic,retain) FolderHeaderView* folderHeader; 
-(void)setShowNewPlaylistCell:(BOOL)arg1;
-(void)setFolderHeader:(id)arg1;
-(void)headerSelectionChanged:(id)arg1 forObject:(id)arg2;
-(void)folderHeaderDone:(id)arg1;
-(void)dismissErrorMessageAnimated:(_Bool)arg1 completion:(id)arg2;
-(void)showError:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1;
@end