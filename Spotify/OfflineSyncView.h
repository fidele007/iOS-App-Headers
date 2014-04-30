/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:25 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface OfflineSyncView : UIView {
	BOOL showExtraControls; 
	SPProgressView* progressView; 
	UIView* groupedCellLookalike; 
	UILabel* titleLabel; 
	UILabel* infoLabel; 
	UILabel* statusLabel; 
	UISwitch* syncSwitch; 
}
@property (nonatomic,retain) SPProgressView* progressView; 
@property (nonatomic,retain) UIView* groupedCellLookalike; 
@property (nonatomic,retain) UILabel* titleLabel; 
@property (nonatomic,retain) UILabel* infoLabel; 
@property (nonatomic,retain) UILabel* statusLabel; 
@property (nonatomic,retain) UISwitch* syncSwitch; 
@property (assign,nonatomic) BOOL showExtraControls; 
-(void)setGroupedCellLookalike:(id)arg1;
-(void)setSyncSwitch:(id)arg1;
-(void)sessionOfflineSyncError:(id)arg1;
-(void)setShowExtraControls:(BOOL)arg1;
-(void)setStatusLabel:(id)arg1;
-(void)setInfoLabel:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setProgressView:(id)arg1;
-(void).cxx_destruct;
@end