/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:12 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LGEndMenuBarView : UIView {
	BOOL _isMultipleSelection; 
	LGBaseViewController* _delegate; 
	UIView* _bgView; 
	UIButton* _editButton; 
	UIButton* _rotateButton; 
	UIButton* _infoButton; 
	LGBadgeButton* _sendToLineAlbumButton; 
	LGBadgeButton* _selectButton; 
}
@property (assign,nonatomic) BOOL isMultipleSelection; 				//@synthesize isMultipleSelection=_isMultipleSelection - In the implementation block
@property (assign,nonatomic,__weak) LGBaseViewController* delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView* bgView; 				//@synthesize bgView=_bgView - In the implementation block
@property (nonatomic,retain) UIButton* editButton; 				//@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIButton* rotateButton; 				//@synthesize rotateButton=_rotateButton - In the implementation block
@property (nonatomic,retain) UIButton* infoButton; 				//@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) LGBadgeButton* sendToLineAlbumButton; 				//@synthesize sendToLineAlbumButton=_sendToLineAlbumButton - In the implementation block
@property (nonatomic,retain) LGBadgeButton* selectButton; 				//@synthesize selectButton=_selectButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
-(void)updateForCurrentLanuage;
-(void)setCheckedBadgeCount:(unsigned)arg1 tableView:(id)arg2 animated:(BOOL)arg3;
-(void)setSelectButton:(id)arg1;
-(id)initWithFrame:(CGRect)arg1 isMultipleSelection:(BOOL)arg2 delegate:(id)arg3;
-(void)setupInfoButton;
-(void)checkOnlyCanBeSavedToLineAlbum:(unsigned)arg1 selectedCount:(unsigned)arg2;
-(void)setBgView:(id)arg1;
-(void)setupBackground;
-(void)setupSelectButton;
-(void)setupEditButton;
-(void)setupSendToLineAlbumButton;
-(void)setModeOfEditButton:(int)arg1 edited:(BOOL)arg2;
-(void)setEditButtonPressed:(BOOL)arg1;
-(void)setIsMultipleSelection:(BOOL)arg1;
-(void)setEditButton:(id)arg1;
-(void)setRotateButton:(id)arg1;
-(void)setSendToLineAlbumButton:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setInfoButton:(id)arg1;
-(id)bundleName;
-(void).cxx_destruct;
@end