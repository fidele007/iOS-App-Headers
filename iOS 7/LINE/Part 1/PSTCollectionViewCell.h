/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:04 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PSTCollectionViewCell : PSTCollectionReusableView {
	UIView* _contentView; 
	UIView* _backgroundView; 
	UIView* _selectedBackgroundView; 
	UILongPressGestureRecognizer* _menuGesture; 
	id _selectionSegueTemplate; 
	id _highlightingSupport; 
	struct {
		unsigned int selected:1;
		unsigned int highlighted:1;
		unsigned int showingMenu:1;
		unsigned int clearSelectionWhenMenuDisappears:1;
		unsigned int waitingForSelectionAnimationHalfwayPoint:1;
	} _collectionCellFlags; 
	BOOL _selected; 
	BOOL _highlighted; 
}
@property (nonatomic,copy) UIView* contentView; 				//@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) UIView* backgroundView; 				//@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView* selectedBackgroundView; 				//@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
-(void)performSelectionSegue;
-(void)menuGesture:(id)arg1;
-(void)updateBackgroundView:(BOOL)arg1;
-(void)setHighlighted:(BOOL)arg1 forViews:(id)arg2;
-(id)initWithFrame:(CGRect)arg1;
-(id)initWithCoder:(id)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(void)setBackgroundView:(id)arg1;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1;
-(void)setSelectedBackgroundView:(id)arg1;
-(void).cxx_destruct;
@end