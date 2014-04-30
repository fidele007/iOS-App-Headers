/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:28 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PTIcon : UIView {
	UIImage* _image; 
	NSString* _title; 
	_UILegibilityLabel* _label; 
	_UILegibilityView* _iconLegibilityView; 
	UIImageView* _imageView; 
	PTIconSettings* _iconSettings; 
	struct __CFRunLoopObserver* _runLoopObserver; 
	struct {
		float meanRed;
		float meanGreen;
		float meanBlue;
		float meanHue;
		float meanSaturation;
		float meanBrightness;
		float meanAlpha;
		float standardDeviationBrightness;
		float standardDeviationSaturation;
	} _imageStatistics; 
}
@property (nonatomic,retain) UIImage* image; 				//@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString* title; 				//@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel* label; 				//@synthesize label=_label - In the implementation block
@property (nonatomic,retain) _UILegibilityView* iconLegibilityView; 				//@synthesize iconLegibilityView=_iconLegibilityView - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PTIconSettings* iconSettings; 				//@synthesize iconSettings=_iconSettings - In the implementation block
@property (assign,nonatomic) struct imageStatistics; 				//@synthesize imageStatistics=_imageStatistics - In the implementation block
@property (assign,nonatomic) struct __CFRunLoopObserver* runLoopObserver; 				//@synthesize runLoopObserver=_runLoopObserver - In the implementation block
+(id)iconWithImage:(id)arg1 title:(id)arg2;
+(id)iconWithImageName:(id)arg1 title:(id)arg2;
-(CGRect)labelFrame;
-(void)setImage:(id)arg1;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1;
-(void)setLabel:(id)arg1;
-(void)setImageView:(id)arg1;
-(void)setRunLoopObserver:(struct __CFRunLoopObserver*)arg1;
-(void)setImageStatistics:(struct )arg1;
-(void)setIconLegibilityView:(id)arg1;
-(void)setIconSettings:(id)arg1;
-(void).cxx_destruct;
@end