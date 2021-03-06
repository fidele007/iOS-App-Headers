/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:24 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBPublicSettingCell : MBTableViewActionCell {
	UIButton* mCheckButton; 
	MBURLImageView* mProfileImageView; 
	UILabel* mNicknameLabel; 
	UIView* mUpLine; 
	UIView* mDownLine; 
	MBFriend* mFriend; 
}
@property (nonatomic,retain) MBFriend* friend; 
+(id)publicSettingCellForTableView:(id)arg1;
+(float)height;
-(void)setFriendButton:(BOOL)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)setFriend:(id)arg1;
-(void).cxx_destruct;
@end