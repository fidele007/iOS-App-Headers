/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:25 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PTSImagePreviewCell : UITableViewCell {
	UIImageView* _imageViewOnLight; 
	UIImageView* _imageViewOnDark; 
	UIView* _lightBackground; 
	UIView* _darkBackground; 
	UILabel* _imageNameLabel; 
	UIImage* _previewImage; 
}
@property (nonatomic,retain) UIImage* previewImage; 				//@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) NSString* imageName; 
+(float)heightForImage:(id)arg1;
+(void)_getLeftFrame:(CGRect*)arg1 rightFrame:(CGRect*)arg2 forImage:(id)arg3 inBounds:(CGRect)arg4;
-(void)setPreviewImage:(id)arg1;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1;
-(void)setImageName:(id)arg1;
-(void).cxx_destruct;
@end