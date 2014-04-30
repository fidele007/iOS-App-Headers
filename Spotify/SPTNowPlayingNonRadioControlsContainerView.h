/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:20 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTNowPlayingNonRadioControlsContainerView : UIView <SPTThemableView> {
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	SPTNowPlayingContextControlsContainerView* _contextControlsContainerView; 
	UIButton* _previousButton; 
	NSArray* _verticalContextControlsContainerViewLayoutConstraints; 
	NSArray* _verticalPreviousButtonLayoutConstraints; 
	NSArray* _horizontalLayoutConstraints; 
}
@property (nonatomic,retain) SPTNowPlayingContextControlsContainerView* contextControlsContainerView; 				//@synthesize contextControlsContainerView=_contextControlsContainerView - In the implementation block
@property (nonatomic,retain) UIButton* previousButton; 				//@synthesize previousButton=_previousButton - In the implementation block
@property (nonatomic,retain) NSArray* verticalContextControlsContainerViewLayoutConstraints; 				//@synthesize verticalContextControlsContainerViewLayoutConstraints=_verticalContextControlsContainerViewLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray* verticalPreviousButtonLayoutConstraints; 				//@synthesize verticalPreviousButtonLayoutConstraints=_verticalPreviousButtonLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray* horizontalLayoutConstraints; 				//@synthesize horizontalLayoutConstraints=_horizontalLayoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)setHorizontalLayoutConstraints:(id)arg1;
-(void)setVerticalContextControlsContainerViewLayoutConstraints:(id)arg1;
-(void)setVerticalPreviousButtonLayoutConstraints:(id)arg1;
-(void)setContextControlsContainerView:(id)arg1;
-(void)setPreviousButton:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)description;
-(void).cxx_destruct;
@end