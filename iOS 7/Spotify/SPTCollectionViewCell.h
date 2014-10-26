/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:48 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>
#import <SPTCellImageLoadingContextCompatibleCell.h>

@interface SPTCollectionViewCell : UICollectionViewCell <SPTThemableView, SPTCellImageLoadingContextCompatibleCell> {
	BOOL _active; 
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	unsigned _imageStyle; 
	int _placeholderImageContentMode; 
	int _imageContentMode; 
	UIImage* _placeholderImage; 
	UIImage* _image; 
	UIView* _accessoryView; 
	unsigned _style; 
	UIView* _imageContainer; 
	UIImageView* _imageView; 
	CAShapeLayer* _imageViewBorderLayer; 
	SPTImageBlurView* _blurView; 
	UILabel* _titleLabel; 
	UILabel* _subtitleLabel; 
	UIView* _detailView; 
	UILabel* _detailLabel; 
	NSString* _originalDetailText; 
}
@property (nonatomic,copy) NSString* title; 
@property (nonatomic,copy) NSString* subtitle; 
@property (nonatomic,copy) NSString* detailText; 
@property (assign,nonatomic) unsigned imageStyle; 				//@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,nonatomic) int placeholderImageContentMode; 				//@synthesize placeholderImageContentMode=_placeholderImageContentMode - In the implementation block
@property (assign,nonatomic) int imageContentMode; 				//@synthesize imageContentMode=_imageContentMode - In the implementation block
@property (nonatomic,retain) UIImage* placeholderImage; 				//@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) UIImage* image; 				//@synthesize image=_image - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 				//@synthesize active=_active - In the implementation block
@property (nonatomic,retain) UIView* accessoryView; 				//@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) unsigned style; 				//@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView* imageContainer; 				//@synthesize imageContainer=_imageContainer - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) CAShapeLayer* imageViewBorderLayer; 				//@synthesize imageViewBorderLayer=_imageViewBorderLayer - In the implementation block
@property (nonatomic,retain) SPTImageBlurView* blurView; 				//@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel* subtitleLabel; 				//@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView* detailView; 				//@synthesize detailView=_detailView - In the implementation block
@property (nonatomic,retain) UILabel* detailLabel; 				//@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,copy) NSString* originalDetailText; 				//@synthesize originalDetailText=_originalDetailText - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(CGSize)contentSizeForStyle:(unsigned)arg1;
+(CGSize)sizeForStyle:(unsigned)arg1;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(id)imageToShow;
-(void)setImageStyle:(unsigned)arg1;
-(void)setImage:(id)arg1 animated:(BOOL)arg2;
-(void)updateImageContentMode;
-(struct UIEdgeInsets)imageViewEdgeInsetsForImageStyle;
-(void)setSubviewLayoutContstraitsForTheme;
-(void)adaptForSelectionState;
-(void)setPlaceholderImageContentMode:(int)arg1;
-(void)setImageContainer:(id)arg1;
-(void)setImageViewBorderLayer:(id)arg1;
-(void)setOriginalDetailText:(id)arg1;
-(void)setSubtitleLabel:(id)arg1;
-(void)setDetailView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setImage:(id)arg1;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1;
-(void)setStyle:(unsigned)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(void)setSelected:(BOOL)arg1;
-(void)setSubtitle:(id)arg1;
-(void)setActive:(BOOL)arg1;
-(void)setAccessoryView:(id)arg1;
-(void)setImageView:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setBlurView:(id)arg1;
-(void)setDetailLabel:(id)arg1;
-(void)setImageContentMode:(int)arg1;
-(void)setDetailText:(id)arg1;
-(void).cxx_destruct;
-(void)setPlaceholderImage:(id)arg1;
@end