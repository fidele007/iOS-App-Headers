/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:04 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>
#import <IGSegmentedControlDelegate.h>
#import <IGPullToRefreshProtocol.h>
#import <UIScrollViewDelegate.h>

@interface IGNewsViewController : IGViewController <UIWebViewDelegate, IGSegmentedControlDelegate, IGPullToRefreshProtocol, UIScrollViewDelegate> {
	NSMutableArray* _targetActions; 
	IGSegmentedControl* _segmentedControl; 
	UIWebView* _newsWebView; 
	UIWebView* _inboxWebView; 
	double _lastMediaPostTime; 
	BOOL _isLoading; 
	BOOL _inboxIsDirty; 
	NSMutableSet* _feedItemsTapped; 
	IGNuxTapOnCameraView* _emptyFeedNUX; 
	IGPullToRefreshViewManager* _pullToRefreshViewManager; 
}
@property (nonatomic,retain) NSMutableSet* feedItemsTapped; 				//@synthesize feedItemsTapped=_feedItemsTapped - In the implementation block
@property (nonatomic,retain) IGNuxTapOnCameraView* emptyFeedNUX; 				//@synthesize emptyFeedNUX=_emptyFeedNUX - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager* pullToRefreshViewManager; 				//@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
-(void)tabBarTapped:(id)arg1;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)setPullToRefreshViewManager:(id)arg1;
-(id)analyticsModule;
-(void)onShouldReload;
-(void)dismissNUX;
-(void)onFriendStatusChanged:(id)arg1;
-(void)fetchInbox;
-(void)updateLoadingState;
-(void)segmentedControlSelectedIndex:(int)arg1;
-(void)fetchDataForSelectedSegment;
-(void)fetchDataForSegment:(int)arg1 inBackground:(BOOL)arg2;
-(BOOL)shouldFetchDataForSegment:(int)arg1;
-(id)requestForSegment:(int)arg1;
-(id)webViewForSegmentIndex:(int)arg1;
-(id)genericWebView;
-(id)newsWebView;
-(id)inboxWebView;
-(int)priorSegmentIndex;
-(int)segmentForWebView:(id)arg1;
-(void)focusInbox:(BOOL)arg1;
-(void)saveSegmentIndex:(int)arg1;
-(id)webViewForSelectedSegment;
-(void)prepareFeedItemIfNecessary:(id)arg1;
-(void)handleTapForURL:(id)arg1;
-(void)handleWebViewFollows:(id)arg1;
-(BOOL)validateHostname:(id)arg1;
-(void)webViewStartedFetching:(id)arg1;
-(void)sendActionsForWebViewEvents:(unsigned)arg1;
-(void)webViewStoppedFetching:(id)arg1;
-(void)setFeedItemsTapped:(id)arg1;
-(void)logTimeToLoad:(double)arg1 forSegment:(int)arg2;
-(void)logLoadError:(id)arg1 forSegment:(int)arg2;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forWebViewEvent:(unsigned)arg3;
-(void)displayNotificationForUserName:(id)arg1 forAction:(int)arg2;
-(void)setEmptyFeedNUX:(id)arg1;
-(void)fetchAll;
-(id)refreshButtonItem;
-(id)activityIndicatorView;
-(void)focusInboxIfOffscreen;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forWebViewEvents:(unsigned)arg3;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forWebViewEvents:(unsigned)arg3;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)applicationDidBecomeActive:(id)arg1;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidStartLoad:(id)arg1;
-(void)webViewDidFinishLoad:(id)arg1;
-(id)segmentedControl;
-(void).cxx_destruct;
@end