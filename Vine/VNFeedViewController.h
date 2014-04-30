/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:59:55 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <VNVideoTableViewCellDelegate.h>

@interface VNFeedViewController : VNTableViewController <VNVideoTableViewCellDelegate> {
	float _lastScrollPosition; 
	float _scrollVelocity; 
	NSTimer* _autoPlayTimer; 
	BOOL _isSlowDevice; 
	BOOL _accessibilitySelectionEnabled; 
	BOOL _needsRefresh; 
	id _likeObserver; 
	id _unlikeObserver; 
	id _activeObserver; 
	id _commentObserver; 
	id _repostObserver; 
	id _unRepostObserver; 
	BOOL _hasInitialLoad; 
	BOOL _feedIsLoading; 
	BOOL _visible; 
	BOOL _publicFeed; 
	VNTimelineService* _timelineService; 
	VNPagedData* _posts; 
	id _becameActiveNotification; 
	unsigned _lastIndex; 
	NSDate* _lastRefreshDate; 
	NSMutableArray* _layouts; 
}
@property (nonatomic,retain) VNTimelineService* timelineService; 				//@synthesize timelineService=_timelineService - In the implementation block
@property (nonatomic,retain) VNPagedData* posts; 				//@synthesize posts=_posts - In the implementation block
@property (nonatomic,retain) id becameActiveNotification; 				//@synthesize becameActiveNotification=_becameActiveNotification - In the implementation block
@property (assign,nonatomic) BOOL hasInitialLoad; 				//@synthesize hasInitialLoad=_hasInitialLoad - In the implementation block
@property (assign,nonatomic) unsigned lastIndex; 				//@synthesize lastIndex=_lastIndex - In the implementation block
@property (nonatomic,retain) NSDate* lastRefreshDate; 				//@synthesize lastRefreshDate=_lastRefreshDate - In the implementation block
@property (nonatomic,copy) VNLoaderView* loaderView; 
@property (assign,nonatomic) BOOL accessibilitySelectionEnabled; 				//@synthesize accessibilitySelectionEnabled=_accessibilitySelectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL feedIsLoading; 				//@synthesize feedIsLoading=_feedIsLoading - In the implementation block
@property (assign,nonatomic) BOOL visible; 				//@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL publicFeed; 				//@synthesize publicFeed=_publicFeed - In the implementation block
@property (nonatomic,retain) NSMutableArray* layouts; 				//@synthesize layouts=_layouts - In the implementation block
-(void)setFeedIsLoading:(BOOL)arg1;
-(void)setHasInitialLoad:(BOOL)arg1;
-(void)setPublicFeed:(BOOL)arg1;
-(void)load:(unsigned)arg1 size:(unsigned)arg2 addToExistingResults:(BOOL)arg3;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 timelineService:(id)arg3;
-(id)initWithTimelineService:(id)arg1;
-(void)loadRightNavBarButton;
-(void)setAccessibilitySelectionEnabled:(BOOL)arg1;
-(void)setTimelineService:(id)arg1;
-(void)commonInit:(id)arg1;
-(void)checkInitialLoad;
-(void)setupActiveNotification;
-(id)mostVisibleCell;
-(void)setLastIndex:(unsigned)arg1;
-(void)updatePlayer;
-(void)setPosts:(id)arg1;
-(void)setLayouts:(id)arg1;
-(void)setLastRefreshDate:(id)arg1;
-(void)videoTableViewCellMoreCommentsButtonWasTapped:(id)arg1;
-(void)videoTableViewCellCommentButtonWasTapped:(id)arg1;
-(void)videoTableViewCellLikesButtonWasTapped:(id)arg1;
-(void)videoTableViewCellRepostsButtonWasTapped:(id)arg1;
-(void)videoTableViewCellAuthorButtonWasTapped:(id)arg1;
-(void)videoTableViewCellUserWasTapped:(id)arg1 user:(id)arg2;
-(void)videoTableViewCellLocationWasTapped:(id)arg1;
-(void)videoTableViewCellDidDeletePost:(id)arg1;
-(void)clearFeed;
-(void)setBecameActiveNotification:(id)arg1;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(BOOL)isEmpty;
-(void)setVisible:(BOOL)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)stopLoading:(BOOL)arg1;
-(void)refresh;
-(void).cxx_destruct;
@end