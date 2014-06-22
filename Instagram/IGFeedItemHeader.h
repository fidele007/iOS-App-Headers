/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:36 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGProfilePictureImageViewDelegate.h>

@interface IGFeedItemHeader : UITableViewHeaderFooterView <IGProfilePictureImageViewDelegate> {
	IGLabel* _usernameLabel; 
	IGLabel* _locationLabel; 
	UIImageView* _placemarkImageView; 
	float _statusBarOutsetAmount; 
	UIImageView* _labelIconView; 
	UILabel* _timestamp; 
	NSString* _accessibilityLabel; 
	NSString* _accessibilityLabelWithTimestamp; 
	UIButton* _accessibilityButton; 
	BOOL _useOpaqueBackground; 
	BOOL _sponsoredPostAllowed; 
	IGProfilePictureImageView* _profilePic; 
	IGFeedItem* _feedItem; 
	UINavigationController* _navigationController; 
	IGTimelineViewManager* _dataSource; 
	NSArray* _accessibleElements; 
}
@property (nonatomic,retain) IGProfilePictureImageView* profilePic; 				//@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGFeedItem* feedItem; 				//@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController* navigationController; 				//@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) IGTimelineViewManager* dataSource; 				//@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL useOpaqueBackground; 				//@synthesize useOpaqueBackground=_useOpaqueBackground - In the implementation block
@property (assign,nonatomic) BOOL sponsoredPostAllowed; 				//@synthesize sponsoredPostAllowed=_sponsoredPostAllowed - In the implementation block
@property (nonatomic,retain) NSArray* accessibleElements; 				//@synthesize accessibleElements=_accessibleElements - In the implementation block
+(int)height;
-(void)setFeedItem:(id)arg1;
-(void)profilePictureTapped:(id)arg1;
-(void)setProfilePic:(id)arg1;
-(void)setSponsoredPostAllowed:(BOOL)arg1;
-(void)onUserInfoChanged;
-(void)onUserTapped;
-(void)onLocationTapped;
-(void)onLabelTapped;
-(void)updateLabelIcon;
-(void)updateDateLabel;
-(void)setUseOpaqueBackground:(BOOL)arg1;
-(void)setAccessibleElements:(id)arg1;
-(void)dealloc;
-(void)setDataSource:(id)arg1;
-(id)initWithReuseIdentifier:(id)arg1;
-(void)setNavigationController:(id)arg1;
-(void).cxx_destruct;
@end