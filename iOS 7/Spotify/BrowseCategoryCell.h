/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:16 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>
#import <SPTCellImageLoadingContextCompatibleCell.h>

@interface BrowseCategoryCell : UICollectionViewCell <SPTThemableView, SPTCellImageLoadingContextCompatibleCell> {
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	NSString* _title; 
	UIImage* _image; 
	UILabel* _titleLabel; 
	UIImageView* _imageView; 
}
@property (nonatomic,retain) NSString* title; 				//@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage* image; 				//@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(CGSize)cellSize;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)setupCatTheme:(CGRect)arg1;
-(void)setupNonCatTheme:(CGRect)arg1;
-(void)setImage:(id)arg1 animated:(BOOL)arg2;
-(id)initWithFrame:(CGRect)arg1;
-(void)setImage:(id)arg1;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(void)prepareForReuse;
-(void)setImageView:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void).cxx_destruct;
@end