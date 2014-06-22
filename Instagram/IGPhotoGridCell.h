/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:02 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGImageViewDelegate.h>

@interface IGPhotoGridCell : IGSimpleTableViewCell <IGImageViewDelegate> {
	BOOL _showsCheckmarks; 
	int _layout; 
	int _topPadding; 
	NSMutableArray* _imageViews; 
	NSMutableArray* _imageButtons; 
	NSMutableArray* _checkmarks; 
}
@property (nonatomic,copy) NSMutableArray* imageViews; 				//@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,copy) NSMutableArray* imageButtons; 				//@synthesize imageButtons=_imageButtons - In the implementation block
@property (nonatomic,copy) NSMutableArray* checkmarks; 				//@synthesize checkmarks=_checkmarks - In the implementation block
+(int)photosPerRowForLayout:(int)arg1;
+(int)photoSizeForLayout:(int)arg1;
+(int)photoMarginForLayout:(int)arg1;
+(int)photoPaddingForLayout:(int)arg1;
+(int)photoInsetForLayout:(int)arg1;
+(int)heightForLayout:(int)arg1;
-(id)initWithReuseIdentifier:(id)arg1 layout:(int)arg2 checkmarks:(BOOL)arg3 topPadding:(int)arg4;
-(void)arrangeViews;
-(id)initWithReuseIdentifier:(id)arg1 layout:(int)arg2 checkmarks:(BOOL)arg3;
-(void)setImageTarget:(id)arg1 action:(SEL)arg2;
-(void)hideImage:(BOOL)arg1 atIndex:(int)arg2;
-(void)prepareForReuse;
-(void).cxx_destruct;
@end