/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:34 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGSectionIndexView : UIView {
	CGRect _desiredFrame; 
	NSArray* _letters; 
	id<IGSectionIndexViewDelegate> _delegate; 
	NSArray* _letterViews; 
	UILongPressGestureRecognizer* _press; 
	struct _NSRange _visibleRange; 
}
@property (nonatomic,retain) NSArray* letters; 				//@synthesize letters=_letters - In the implementation block
@property (assign,nonatomic) struct _NSRange visibleRange; 				//@synthesize visibleRange=_visibleRange - In the implementation block
@property (assign,nonatomic,__weak) id<IGSectionIndexViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray* letterViews; 				//@synthesize letterViews=_letterViews - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer* press; 				//@synthesize press=_press - In the implementation block
-(void)onPress:(id)arg1;
-(unsigned)indexOfViewAtPoint:(CGPoint)arg1;
-(float)letterViewHeight;
-(void)setDesiredFrame:(CGRect)arg1;
-(void)setLetters:(id)arg1;
-(void)setLetterViews:(id)arg1;
-(void)setPress:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(void)setVisibleRange:(struct _NSRange)arg1;
-(void).cxx_destruct;
@end