/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:15 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KKGridViewCell : UIView {
	UIButton* _badgeView; 
	UIColor* _userContentViewBackgroundColor; 
	BOOL _ignoreUserContentViewBackground; 
	BOOL _editing; 
	BOOL _selected; 
	BOOL _highlighted; 
	int _accessoryPosition; 
	int _accessoryType; 
	UIView* _backgroundView; 
	UIView* _contentView; 
	UIImageView* _imageView; 
	KKIndexPath* _indexPath; 
	NSString* _reuseIdentifier; 
	UIView* _selectedBackgroundView; 
	float _highlightAlpha; 
}
@property (nonatomic,retain) UIView* backgroundView; 				//@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView* contentView; 				//@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) KKIndexPath* indexPath; 				//@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,copy) NSString* reuseIdentifier; 				//@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 				//@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 				//@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIView* selectedBackgroundView; 				//@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (assign,nonatomic) BOOL editing; 				//@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) int accessoryType; 				//@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,nonatomic) int accessoryPosition; 				//@synthesize accessoryPosition=_accessoryPosition - In the implementation block
@property (assign,nonatomic) float highlightAlpha; 				//@synthesize highlightAlpha=_highlightAlpha - In the implementation block
+(id)cellForGridView:(id)arg1;
+(id)cellIdentifier;
-(void)setHighlightAlpha:(float)arg1;
-(id)_defaultBlueBackgroundRendition;
-(void)setPressedState:(BOOL)arg1;
-(void)_updateSubviewSelectionState;
-(void)_layoutAccessories;
-(void)setAccessoryPosition:(int)arg1;
-(void)dealloc;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(void)setContentView:(id)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setBackgroundView:(id)arg1;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(id)arg1;
-(void)setSelected:(BOOL)arg1;
-(void)setAccessoryType:(int)arg1;
-(void)setEditing:(BOOL)arg1;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2;
-(void)setSelectedBackgroundView:(id)arg1;
-(void)setImageView:(id)arg1;
-(void)setIndexPath:(id)arg1;
-(void).cxx_destruct;
@end