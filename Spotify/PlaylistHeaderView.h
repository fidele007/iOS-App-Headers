/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:29 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PlaylistHeaderView : UIView {
	BOOL _filterOnly; 
	BOOL _showsFilterCancelButton; 
	BOOL _playlistOwnedBySelf; 
	BOOL _entityPagesPlayableTestEnabled; 
	id<PlaylistHeaderViewDelegate> _delegate; 
	id<UITextFieldDelegate> _filterFieldDelegate; 
	UIImage* _ownerImage; 
	NSString* _ownerName; 
	NSDate* _lastEdited; 
	unsigned _totalDuration; 
	UIImage* _image; 
	NSString* _title; 
	int _numberOfSubscribers; 
	NSString* _descriptionText; 
	int _actionState; 
	BrowsePlayButton* _playButton; 
	UIView* _topView; 
	UIView* _bottomView; 
	UIView* _filterFieldContainer; 
	PlaylistFilterTextField* _filterField; 
	UIButton* _filterCancelButton; 
	UIImageView* _ownerImageView; 
	UILabel* _ownerNameLabel; 
	UIView* _lastEditedContainer; 
	UILabel* _lastEditedLabel; 
	UIView* _totalDurationContainer; 
	UILabel* _totalDurationLabel; 
	UIView* _shadowView; 
	UIImageView* _imageView; 
	UILabel* _titleLabel; 
	UILabel* _followersLabel; 
	UILabel* _descriptionLabel; 
	UIView* _availableOfflineContainer; 
	UISwitch* _availableOfflineSwitch; 
	NSString* _availableOfflineLabelText; 
	UIButton* _followButton; 
	CAGradientLayer* _gradientLayer; 
	UILabel* _shuffleTitleLabel; 
}
@property (assign,nonatomic,__weak) id<PlaylistHeaderViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> filterFieldDelegate; 				//@synthesize filterFieldDelegate=_filterFieldDelegate - In the implementation block
@property (assign,nonatomic) BOOL filterOnly; 				//@synthesize filterOnly=_filterOnly - In the implementation block
@property (assign,nonatomic) BOOL showsFilterCancelButton; 				//@synthesize showsFilterCancelButton=_showsFilterCancelButton - In the implementation block
@property (nonatomic,retain) UIImage* ownerImage; 				//@synthesize ownerImage=_ownerImage - In the implementation block
@property (nonatomic,retain) NSString* ownerName; 				//@synthesize ownerName=_ownerName - In the implementation block
@property (nonatomic,retain) NSDate* lastEdited; 				//@synthesize lastEdited=_lastEdited - In the implementation block
@property (assign,nonatomic) unsigned totalDuration; 				//@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,retain) UIImage* image; 				//@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString* title; 				//@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int numberOfSubscribers; 				//@synthesize numberOfSubscribers=_numberOfSubscribers - In the implementation block
@property (nonatomic,retain) NSString* descriptionText; 				//@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) int actionState; 				//@synthesize actionState=_actionState - In the implementation block
@property (assign,getter=isPlaylistOwnedBySelf,nonatomic) BOOL playlistOwnedBySelf; 				//@synthesize playlistOwnedBySelf=_playlistOwnedBySelf - In the implementation block
@property (nonatomic,retain) BrowsePlayButton* playButton; 				//@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UIView* topView; 				//@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView* bottomView; 				//@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) UIView* filterFieldContainer; 				//@synthesize filterFieldContainer=_filterFieldContainer - In the implementation block
@property (nonatomic,retain) PlaylistFilterTextField* filterField; 				//@synthesize filterField=_filterField - In the implementation block
@property (nonatomic,retain) UIButton* filterCancelButton; 				//@synthesize filterCancelButton=_filterCancelButton - In the implementation block
@property (nonatomic,retain) UIImageView* ownerImageView; 				//@synthesize ownerImageView=_ownerImageView - In the implementation block
@property (nonatomic,retain) UILabel* ownerNameLabel; 				//@synthesize ownerNameLabel=_ownerNameLabel - In the implementation block
@property (nonatomic,retain) UIView* lastEditedContainer; 				//@synthesize lastEditedContainer=_lastEditedContainer - In the implementation block
@property (nonatomic,retain) UILabel* lastEditedLabel; 				//@synthesize lastEditedLabel=_lastEditedLabel - In the implementation block
@property (nonatomic,retain) UIView* totalDurationContainer; 				//@synthesize totalDurationContainer=_totalDurationContainer - In the implementation block
@property (nonatomic,retain) UILabel* totalDurationLabel; 				//@synthesize totalDurationLabel=_totalDurationLabel - In the implementation block
@property (nonatomic,retain) UIView* shadowView; 				//@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel* followersLabel; 				//@synthesize followersLabel=_followersLabel - In the implementation block
@property (nonatomic,retain) UILabel* descriptionLabel; 				//@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView* availableOfflineContainer; 				//@synthesize availableOfflineContainer=_availableOfflineContainer - In the implementation block
@property (nonatomic,retain) UISwitch* availableOfflineSwitch; 				//@synthesize availableOfflineSwitch=_availableOfflineSwitch - In the implementation block
@property (nonatomic,retain) NSString* availableOfflineLabelText; 				//@synthesize availableOfflineLabelText=_availableOfflineLabelText - In the implementation block
@property (nonatomic,retain) UIButton* followButton; 				//@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) CAGradientLayer* gradientLayer; 				//@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) BOOL entityPagesPlayableTestEnabled; 				//@synthesize entityPagesPlayableTestEnabled=_entityPagesPlayableTestEnabled - In the implementation block
@property (nonatomic,retain) UILabel* shuffleTitleLabel; 				//@synthesize shuffleTitleLabel=_shuffleTitleLabel - In the implementation block
+(struct UIEdgeInsets)topViewEdgeInsets;
+(float)filterHeight;
+(CGSize)ownerImageSize;
+(float)metadataHeight;
+(float)bottomViewLabelWidth;
+(id)mftFollowButtonTextColor;
+(float)imageSnapPoint;
+(id)topViewBackgroundColor;
+(id)bottomViewBackgroundColor;
+(CGSize)imageSize;
-(void)setOwnerName:(id)arg1;
-(void)setGradientLayer:(id)arg1;
-(void)setAvailableOfflineSwitch:(id)arg1;
-(void)setFilterOnly:(BOOL)arg1;
-(void)setOwnerImage:(id)arg1;
-(id)shuffleLabelWithFontSize:(float)arg1;
-(void)setShuffleTitleLabel:(id)arg1;
-(CGRect)shuffleTitleLabelFrame;
-(CGRect)shuffleFollowButtonFrame;
-(void)setShowsFilterCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setFilterCancelButton:(id)arg1;
-(void)setOwnerImageView:(id)arg1;
-(void)ownerUsernameTapped;
-(void)setOwnerNameLabel:(id)arg1;
-(void)addMetadataSubview:(id)arg1;
-(void)setLastEditedContainer:(id)arg1;
-(void)setLastEditedLabel:(id)arg1;
-(void)setTotalDurationContainer:(id)arg1;
-(void)setTotalDurationLabel:(id)arg1;
-(void)setLastEdited:(id)arg1;
-(void)createTitleLabel;
-(void)setFollowersLabel:(id)arg1;
-(CGRect)followersLabelFrame;
-(void)createDescriptionLabel;
-(CGRect)descriptionLabelFrame;
-(void)followButtonTapped;
-(void)setAvailableOfflineContainer:(id)arg1;
-(void)addAvailableOfflineViews;
-(void)setActionState:(int)arg1;
-(void)availableOfflineSwitchToggled;
-(id)initWithFrame:(CGRect)arg1 filterOnly:(BOOL)arg2;
-(void)setFilterFieldDelegate:(id)arg1;
-(void)setShowsFilterCancelButton:(BOOL)arg1;
-(void)resignFilterFirstResponder;
-(void)setNumberOfSubscribers:(int)arg1;
-(void)updateSizeWithBottomViewAnimation:(BOOL)arg1;
-(void)detachFilterToView:(id)arg1 newOrigin:(CGPoint)arg2;
-(void)attachFilter;
-(BOOL)filterIsFirstResponder;
-(float)bottomViewHeight;
-(void)superviewContentOffsetChanged:(id)arg1;
-(void)setPlaylistOwnedBySelf:(BOOL)arg1;
-(void)setFilterFieldContainer:(id)arg1;
-(void)setFilterField:(id)arg1;
-(void)setAvailableOfflineLabelText:(id)arg1;
-(void)setFollowButton:(id)arg1;
-(void)setEntityPagesPlayableTestEnabled:(BOOL)arg1;
-(void)setPlayButton:(id)arg1;
-(void)setImage:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1;
-(void)setFilter:(id)arg1;
-(void)setShadowView:(id)arg1;
-(void)setImageView:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setDescriptionLabel:(id)arg1;
-(void)setTotalDuration:(unsigned)arg1;
-(void)setDescriptionText:(id)arg1;
-(void)setTopView:(id)arg1;
-(void)setBottomView:(id)arg1;
-(void)cancelButtonTapped;
-(void).cxx_destruct;
@end