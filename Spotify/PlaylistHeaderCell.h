/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:57 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PlaylistHeaderCell : UITableViewCell {
	UISwitch* _availableOffline; 
	UIView* _offlineButtonView; 
	UILabel* _offlineLabel; 
	SPPrimaryButton* _subscribeButton; 
	UIView* _shadow; 
}
@property (nonatomic,retain) UISwitch* availableOffline; 				//@synthesize availableOffline=_availableOffline - In the implementation block
@property (nonatomic,retain) UIView* offlineButtonView; 				//@synthesize offlineButtonView=_offlineButtonView - In the implementation block
@property (assign,nonatomic,__weak) UILabel* offlineLabel; 				//@synthesize offlineLabel=_offlineLabel - In the implementation block
@property (nonatomic,retain) SPPrimaryButton* subscribeButton; 				//@synthesize subscribeButton=_subscribeButton - In the implementation block
@property (assign,nonatomic) BOOL showShadow; 
@property (nonatomic,retain) UIView* shadow; 				//@synthesize shadow=_shadow - In the implementation block
-(void)setAvailableOffline:(id)arg1;
-(void)sessionOfflineSyncError:(id)arg1;
-(void)setShowShadow:(BOOL)arg1;
-(void)setOfflineButtonView:(id)arg1;
-(void)setOfflineLabel:(id)arg1;
-(void)setSubscribeButton:(id)arg1;
-(void)showSubscribeButton:(BOOL)arg1 animated:(BOOL)arg2;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(void)setShadow:(id)arg1;
-(void).cxx_destruct;
@end