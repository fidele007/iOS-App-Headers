/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:52 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPRowViewControllerContainer : SPSectionedViewControllerContainer {
	UIScrollView* _scrollView; 
	float _bottomMargin; 
}
@property (nonatomic,retain) UIScrollView* scrollView; 				//@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) float bottomMargin; 				//@synthesize bottomMargin=_bottomMargin - In the implementation block
-(void)addChildViews;
-(void)relayoutViews;
-(void)setScrollView:(id)arg1;
-(void)viewDidLoad;
-(void)setViewControllers:(id)arg1;
-(void)setBottomMargin:(float)arg1;
-(void).cxx_destruct;
@end