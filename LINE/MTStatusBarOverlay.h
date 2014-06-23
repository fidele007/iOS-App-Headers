/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:47 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UITableViewDataSource.h>

@interface MTStatusBarOverlay : UIWindow <UITableViewDataSource> {
	UIControl* backgroundView_; 
	UIControl* detailView_; 
	UIImageView* statusBarBackgroundImageView_; 
	UILabel* statusLabel1_; 
	UILabel* statusLabel2_; 
	UILabel* hiddenStatusLabel_; 
	UIActivityIndicatorView* activityIndicator_; 
	UILabel* finishedLabel_; 
	BOOL hidesActivity_; 
	UIImage* grayStatusBarImage_; 
	UIImage* grayStatusBarImageSmall_; 
	int animation_; 
	CGRect smallFrame_; 
	CGRect oldBackgroundViewFrame_; 
	BOOL hideInProgress_; 
	BOOL active_; 
	NSMutableArray* messageQueue_; 
	BOOL canRemoveImmediateMessagesFromQueue_; 
	int detailViewMode_; 
	NSString* detailText_; 
	UITextView* detailTextView_; 
	NSMutableArray* messageHistory_; 
	UITableView* historyTableView_; 
	id<MTStatusBarOverlayDelegate> delegate_; 
}
@property (nonatomic,retain) UIControl* backgroundView; 
@property (nonatomic,retain) UIControl* detailView; 
@property (assign,nonatomic) CGRect smallFrame; 
@property (assign,nonatomic) int animation; 
@property (nonatomic,retain) UILabel* finishedLabel; 
@property (assign,nonatomic) BOOL hidesActivity; 
@property (getter=isShrinked,nonatomic,copy) BOOL shrinked; 
@property (getter=isDetailViewHidden,nonatomic,copy) BOOL detailViewHidden; 
@property (nonatomic,retain) NSMutableArray* messageHistory; 
@property (assign,getter=isHistoryEnabled,nonatomic) BOOL historyEnabled; 
@property (assign,nonatomic) BOOL canRemoveImmediateMessagesFromQueue; 
@property (assign,nonatomic) int detailViewMode; 
@property (nonatomic,copy) NSString* detailText; 
@property (assign,nonatomic) id<MTStatusBarOverlayDelegate> delegate; 
@property (nonatomic,retain) UIActivityIndicatorView* activityIndicator; 
@property (nonatomic,retain) UIImageView* statusBarBackgroundImageView; 
@property (nonatomic,retain) UIImage* grayStatusBarImage; 
@property (nonatomic,retain) UIImage* grayStatusBarImageSmall; 
@property (nonatomic,retain) UILabel* statusLabel1; 
@property (nonatomic,retain) UILabel* statusLabel2; 
@property (assign,nonatomic) UILabel* hiddenStatusLabel; 
@property (nonatomic,copy) UILabel* visibleStatusLabel; 
@property (assign,nonatomic) CGRect oldBackgroundViewFrame; 
@property (getter=isHideInProgress) BOOL hideInProgress; 
@property (getter=isActive) BOOL active; 
@property (getter=isReallyHidden,nonatomic,copy) BOOL reallyHidden; 
@property (nonatomic,retain) UITextView* detailTextView; 
@property (nonatomic,retain) NSMutableArray* messageQueue; 
@property (nonatomic,retain) UITableView* historyTableView; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1;
-(void)contentViewClicked:(id)arg1;
-(void)addSubviewToBackgroundView:(id)arg1;
-(void)didChangeStatusBarFrame:(id)arg1;
-(void)postMessage:(id)arg1 animated:(BOOL)arg2;
-(void)postMessage:(id)arg1 type:(int)arg2 duration:(double)arg3 animated:(BOOL)arg4 immediate:(BOOL)arg5;
-(void)postImmediateMessage:(id)arg1 type:(int)arg2 duration:(double)arg3 animated:(BOOL)arg4;
-(void)postFinishMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
-(void)postErrorMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
-(void)showNextMessage;
-(void)setStatusBarBackgroundForStyle:(int)arg1;
-(void)setColorSchemeForStatusBarStyle:(int)arg1;
-(void)updateUIForMessageType:(int)arg1 duration:(double)arg2;
-(void)setHidden:(BOOL)arg1 useAlpha:(BOOL)arg2;
-(void)addMessageToHistory:(id)arg1;
-(void)callDelegateWithNewMessage:(id)arg1;
-(void)setHiddenStatusLabel:(id)arg1;
-(void)setHideInProgress:(BOOL)arg1;
-(void)setDetailViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)rotateToStatusBarFrame:(id)arg1;
-(void)setSmallFrame:(CGRect)arg1;
-(void)setOldBackgroundViewFrame:(CGRect)arg1;
-(void)setHiddenUsingAlpha:(BOOL)arg1;
-(void)updateDetailTextViewHeight;
-(void)setShrinked:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setDetailViewMode:(int)arg1;
-(void)addSubviewToBackgroundView:(id)arg1 atIndex:(int)arg2;
-(void)postMessage:(id)arg1;
-(void)postImmediateMessage:(id)arg1 animated:(BOOL)arg2;
-(void)postFinishMessage:(id)arg1 duration:(double)arg2;
-(void)postImmediateFinishMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
-(void)postErrorMessage:(id)arg1 duration:(double)arg2;
-(void)postImmediateErrorMessage:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
-(void)setHistoryEnabled:(BOOL)arg1;
-(void)setStatusBarBackgroundImageView:(id)arg1;
-(void)setStatusLabel1:(id)arg1;
-(void)setStatusLabel2:(id)arg1;
-(void)setFinishedLabel:(id)arg1;
-(void)setHidesActivity:(BOOL)arg1;
-(void)setGrayStatusBarImage:(id)arg1;
-(void)setGrayStatusBarImageSmall:(id)arg1;
-(void)setCanRemoveImmediateMessagesFromQueue:(BOOL)arg1;
-(void)setDetailTextView:(id)arg1;
-(void)setMessageHistory:(id)arg1;
-(void)setHistoryTableView:(id)arg1;
-(void)setDetailView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(id)copyWithZone:(NSZone*)arg1;
-(void)setBackgroundView:(id)arg1;
-(void)setActive:(BOOL)arg1;
-(void)setAnimation:(int)arg1;
-(void)clearHistory;
-(void)setActivityIndicator:(id)arg1;
-(void)setMessageQueue:(id)arg1;
-(void)setDetailText:(id)arg1;
-(void).cxx_destruct;
@end