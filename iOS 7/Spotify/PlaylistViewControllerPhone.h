/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:03 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PlaylistViewModelDelegate.h>
#import <SPContentInsetViewController.h>
#import <UISearchBarDelegate.h>
#import <SPTHTTPImageLoaderDelegate.h>
#import <PlaylistMetadataViewDelegate.h>
#import <SPTNavigationControllerNavigationBarState.h>
#import <SPTPlaylistActionDelegate.h>
#import <SPTPlaylistSpecialTableHeaderViewDelegate.h>

@interface PlaylistViewControllerPhone : PlaylistViewController <PlaylistViewModelDelegate, SPContentInsetViewController, UISearchBarDelegate, SPTHTTPImageLoaderDelegate, PlaylistMetadataViewDelegate, SPTNavigationControllerNavigationBarState, SPTPlaylistActionDelegate, SPTPlaylistSpecialTableHeaderViewDelegate> {
	BOOL _hasSetupContentOffset; 
	BOOL _hasAppeared; 
	id<SPContextMenuFeature> _contextMenuFeature; 
	id<ShuffleControllerObjC> _shuffleController; 
	MetaViewController* _metaViewController; 
	id<CollectionFeature> _collection; 
	SPTEntityTableHeaderView* _entityHeaderView; 
	SPTPlaylistSpecialTableHeaderView* _specialHeaderView; 
	SPTActionButton* _followButton; 
	SPTSearchBar* _filterField; 
	UIButton* _filterCancelButton; 
	SPTProgressView* _progressView; 
	SPTInfoView* _infoView; 
	PlaylistMetadataView* _metadataView; 
	UILabel* _playlistOwnerLabel; 
	SPTHTTPImageLoader* _imageLoader; 
}
@property (assign,nonatomic,__weak) SessionController* sessionController; 
@property (assign,nonatomic,__weak) id<SPContextMenuFeature> contextMenuFeature; 				//@synthesize contextMenuFeature=_contextMenuFeature - In the implementation block
@property (assign,nonatomic,__weak) id<ShuffleControllerObjC> shuffleController; 				//@synthesize shuffleController=_shuffleController - In the implementation block
@property (assign,nonatomic,__weak) MetaViewController* metaViewController; 				//@synthesize metaViewController=_metaViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CollectionFeature> collection; 				//@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) SPTEntityTableHeaderView* entityHeaderView; 				//@synthesize entityHeaderView=_entityHeaderView - In the implementation block
@property (nonatomic,retain) SPTPlaylistSpecialTableHeaderView* specialHeaderView; 				//@synthesize specialHeaderView=_specialHeaderView - In the implementation block
@property (nonatomic,retain) SPTActionButton* followButton; 				//@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) SPTSearchBar* filterField; 				//@synthesize filterField=_filterField - In the implementation block
@property (nonatomic,retain) UIButton* filterCancelButton; 				//@synthesize filterCancelButton=_filterCancelButton - In the implementation block
@property (nonatomic,retain) SPTProgressView* progressView; 				//@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) SPTInfoView* infoView; 				//@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) PlaylistMetadataView* metadataView; 				//@synthesize metadataView=_metadataView - In the implementation block
@property (nonatomic,retain) UILabel* playlistOwnerLabel; 				//@synthesize playlistOwnerLabel=_playlistOwnerLabel - In the implementation block
@property (assign,nonatomic) BOOL hasSetupContentOffset; 				//@synthesize hasSetupContentOffset=_hasSetupContentOffset - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared; 				//@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (nonatomic,retain) SPTHTTPImageLoader* imageLoader; 				//@synthesize imageLoader=_imageLoader - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsScrollViewInsets; 
-(void)applyThemeLayout;
-(void)imageLoader:(id)arg1 didFinishLoadingImage:(id)arg2 forURL:(id)arg3 context:(id)arg4 loadedSynchronously:(BOOL)arg5;
-(void)setImageLoader:(id)arg1;
-(unsigned)preferredNavigationBarState;
-(void)sp_updateContentInsets;
-(void)setMetaViewController:(id)arg1;
-(void)shufflePlay;
-(void)followButtonTapped:(id)arg1;
-(void)setInfoView:(id)arg1;
-(void)setHasSetupContentOffset:(BOOL)arg1;
-(void)discoverButtonTapped;
-(void)setShuffleController:(id)arg1;
-(void)setContextMenuFeature:(id)arg1;
-(id)initWithPlaylistURL:(id)arg1 sessionController:(id)arg2 contextMenuFeature:(id)arg3 shuffleController:(id)arg4 metaViewController:(id)arg5 collection:(id)arg6;
-(void)setFilterCancelButton:(id)arg1;
-(void)setFilterField:(id)arg1;
-(BOOL)shouldDisplaySpecialHeaderView;
-(void)toggleAvailableOfflineRowVisible:(BOOL)arg1 updateTableView:(BOOL)arg2;
-(void)setSpecialHeaderView:(id)arg1;
-(void)setEntityHeaderView:(id)arg1;
-(void)shufflePlayButtonTapped;
-(void)setMetadataView:(id)arg1;
-(void)updateEditBarButtonAnimated:(BOOL)arg1;
-(void)updateInfoView;
-(void)updateCellTitleColors;
-(void)dismissFilterInterface;
-(void)playlistViewModelContextDidLoad:(id)arg1;
-(id)createFilterField;
-(void)toggleFollowingView:(BOOL)arg1 animated:(BOOL)arg2 fromContextMenu:(BOOL)arg3;
-(void)playlistViewModelTracksDidChange:(id)arg1;
-(id)createPlaylistOwnerLabel;
-(id)playlistOwnerName;
-(void)togglePlaylistFollowState:(BOOL)arg1 fromContextMenu:(BOOL)arg2;
-(void)editDoneButtonTapped;
-(void)mainContextMenuButtonTapped;
-(void)showInfoView;
-(BOOL)playlistViewModelShouldIncludeExtrasCellSection:(id)arg1;
-(void)playlistViewModel:(id)arg1 contextMenuButtonTappedForTrackAtIndex:(unsigned)arg2;
-(void)playlistViewModelMetadataDidChange:(id)arg1;
-(void)playlistMetadataView:(id)arg1 ownerViewTapped:(id)arg2 isOwnerName:(BOOL)arg3;
-(void)playlistActionWasTriggered:(id)arg1;
-(void)specialTableHeaderView:(id)arg1 shuffleButtonWasTapped:(id)arg2;
-(CGPoint)activeFilterAnimationOriginForSpecialTableView:(id)arg1;
-(void)setPlaylistOwnerLabel:(id)arg1;
-(void)setFollowButton:(id)arg1;
-(void)hideInfoView;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(NCGPoint*)arg3;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2;
-(void)searchBarTextDidBeginEditing:(id)arg1;
-(void)searchBarSearchButtonClicked:(id)arg1;
-(void)setHasAppeared:(BOOL)arg1;
-(void)setCollection:(id)arg1;
-(void)setProgressView:(id)arg1;
-(void)keyboardWillShow:(id)arg1;
-(void)keyboardWillHide:(id)arg1;
-(void).cxx_destruct;
@end