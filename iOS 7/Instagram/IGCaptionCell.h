/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:53 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UITextViewDelegate.h>

@interface IGCaptionCell : UICollectionViewCell <UITextViewDelegate> {
	UIView* _thumbnailView; 
	float _offsetY; 
	UITextView<IGAutocompleteControllerTextInput>* _textView; 
	id<IGCaptionCellDelegate> _delegate; 
	IGSimpleFrameButton* _photoFrameView; 
	UIView* _bottomLine; 
	IGGradientView* _topGradientView; 
	IGGradientView* _bottomGradientView; 
}
@property (nonatomic,retain) UIView* thumbnailView; 				//@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) NSString* text; 
@property (assign,nonatomic) float offsetY; 				//@synthesize offsetY=_offsetY - In the implementation block
@property (nonatomic,retain) UITextView<IGAutocompleteControllerTextInput>* textView; 				//@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<IGCaptionCellDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSimpleFrameButton* photoFrameView; 				//@synthesize photoFrameView=_photoFrameView - In the implementation block
@property (nonatomic,retain) UIView* bottomLine; 				//@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,retain) IGGradientView* topGradientView; 				//@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,retain) IGGradientView* bottomGradientView; 				//@synthesize bottomGradientView=_bottomGradientView - In the implementation block
+(float)height;
-(CGRect)textViewRectWithPhoto:(BOOL)arg1;
-(void)onMediaTap;
-(void)setThumbnailViewHidden:(BOOL)arg1;
-(void)setPhotoFrameView:(id)arg1;
-(void)setBottomLine:(id)arg1;
-(void)setTopGradientView:(id)arg1;
-(void)setBottomGradientView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setText:(id)arg1;
-(void)setTextView:(id)arg1;
-(void)textViewDidBeginEditing:(id)arg1;
-(void)textViewDidEndEditing:(id)arg1;
-(BOOL)textViewShouldBeginEditing:(id)arg1;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(void)setOffsetY:(float)arg1;
-(void)setThumbnailView:(id)arg1;
-(void).cxx_destruct;
@end