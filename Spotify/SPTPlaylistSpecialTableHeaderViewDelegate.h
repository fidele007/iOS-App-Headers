/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:03 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol PlaylistViewModelDelegate
@optional
-(void)playlistViewModelMetadataDidChange(id):arg1 ;
@required
-(void)playlistViewModelContextDidLoad(id):arg1 ;
-(void)playlistViewModelTracksDidChange(id):arg1 ;
-(BOOL)playlistViewModelShouldIncludeExtrasCellSection(id):arg1 ;
-(void)playlistViewModelNowPlayingTrackDidChange(id):arg1 ;
-(void)playlistViewModel(id):arg1 contextMenuButtonTappedForTrackAtIndex(unsigned):arg2 ;
-(void)playlistViewModelContextDidLoad(id):arg1 ;
-(void)playlistViewModelTracksDidChange(id):arg1 ;
-(BOOL)playlistViewModelShouldIncludeExtrasCellSection(id):arg1 ;
-(void)playlistViewModelNowPlayingTrackDidChange(id):arg1 ;
-(void)playlistViewModel(id):arg1 contextMenuButtonTappedForTrackAtIndex(unsigned):arg2 ;
@end

@protocol SPContentInsetViewController
@property (assign,nonatomic) BOOL automaticallyAdjustsScrollViewInsets; 
@required
-(void)sp_updateContentInsets;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(void)setAutomaticallyAdjustsScrollViewInsets(BOOL):arg1 ;
-(void)sp_updateContentInsets;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(void)setAutomaticallyAdjustsScrollViewInsets(BOOL):arg1 ;
@end

@protocol UISearchBarDelegate
@optional
-(void)searchBar(id):arg1 textDidChange(id):arg2 ;
-(void)searchBar(id):arg1 selectedScopeButtonIndexDidChange(int):arg2 ;
-(BOOL)searchBarShouldBeginEditing(id):arg1 ;
-(BOOL)searchBarShouldEndEditing(id):arg1 ;
-(void)searchBarCancelButtonClicked(id):arg1 ;
-(void)searchBarBookmarkButtonClicked(id):arg1 ;
-(void)searchBarResultsListButtonClicked(id):arg1 ;
-(void)searchBarTextDidBeginEditing(id):arg1 ;
-(void)searchBarTextDidEndEditing(id):arg1 ;
-(void)searchBarSearchButtonClicked(id):arg1 ;
-(BOOL)searchBar(id):arg1 shouldChangeTextInRange({):arg2 replacementText(_):arg3 ;
@end

@protocol SPTHTTPImageLoaderDelegate
@optional
-(void)imageLoader(id):arg1 didFailToLoadImageForURL(id):arg2 context(id):arg3 error(id):arg4 ;
@required
-(void)imageLoader(id):arg1 didFinishLoadingImage(id):arg2 forURL(id):arg3 context(id):arg4 loadedSynchronously(BOOL):arg5 ;
-(void)imageLoader(id):arg1 didFinishLoadingImage(id):arg2 forURL(id):arg3 context(id):arg4 loadedSynchronously(BOOL):arg5 ;
@end

@protocol PlaylistMetadataViewDelegate
@required
-(void)playlistMetadataView(id):arg1 ownerViewTapped(id):arg2 isOwnerName(BOOL):arg3 ;
-(void)playlistMetadataView(id):arg1 ownerViewTapped(id):arg2 isOwnerName(BOOL):arg3 ;
@end

@protocol SPTNavigationControllerNavigationBarState
@required
-(unsigned)preferredNavigationBarState;
-(unsigned)preferredNavigationBarState;
@end

@protocol SPTPlaylistActionDelegate
@required
-(void)playlistActionWasTriggered(id):arg1 ;
-(void)playlistActionWasTriggered(id):arg1 ;
@end

@protocol SPTPlaylistSpecialTableHeaderViewDelegate
@required
-(void)specialTableHeaderView(id):arg1 shuffleButtonWasTapped(id):arg2 ;
-({)activeFilterAnimationOriginForSpecialTableView(unsigned char):arg1 ;
-(void)specialTableHeaderView(id):arg1 shuffleButtonWasTapped(id):arg2 ;
-({)activeFilterAnimationOriginForSpecialTableView(unsigned char):arg1 ;
@end
