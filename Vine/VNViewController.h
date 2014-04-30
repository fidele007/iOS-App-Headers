/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:01 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNViewController : UIViewController {
	UIButton* _titleNavBarButton; 
	UIButton* _rightNavBarButton; 
	UIButton* _leftNavBarButton; 
	unsigned _state; 
	VNLoaderView* _loaderView; 
	UIScrollView* _errorView; 
	VNEmptyCell* _errorCell; 
	int _errorCellType; 
	NSString* _errorCellText; 
	NSString* _navigationIdentifier; 
}
@property (assign,nonatomic) unsigned state; 				//@synthesize state=_state - In the implementation block
@property (nonatomic,retain) VNLoaderView* loaderView; 				//@synthesize loaderView=_loaderView - In the implementation block
@property (nonatomic,retain) UIScrollView* errorView; 				//@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) VNEmptyCell* errorCell; 				//@synthesize errorCell=_errorCell - In the implementation block
@property (assign,nonatomic) int errorCellType; 				//@synthesize errorCellType=_errorCellType - In the implementation block
@property (nonatomic,retain) NSString* errorCellText; 				//@synthesize errorCellText=_errorCellText - In the implementation block
@property (nonatomic,retain) UIButton* rightNavBarButton; 				//@synthesize rightNavBarButton=_rightNavBarButton - In the implementation block
@property (nonatomic,retain) UIButton* leftNavBarButton; 				//@synthesize leftNavBarButton=_leftNavBarButton - In the implementation block
@property (nonatomic,retain) UIButton* titleNavBarButton; 				//@synthesize titleNavBarButton=_titleNavBarButton - In the implementation block
@property (nonatomic,retain) NSString* navigationIdentifier; 				//@synthesize navigationIdentifier=_navigationIdentifier - In the implementation block
-(void)handleBackButtonPress:(id)arg1;
-(void)setNavigationIdentifier:(id)arg1;
-(void)setErrorCellText:(id)arg1;
-(void)setErrorCellType:(int)arg1;
-(void)loadRightNavBarButton;
-(void)setRightNavBarButton:(id)arg1;
-(void)loadLeftNavBarButton;
-(BOOL)shouldPushViewController:(id)arg1;
-(void)bringMenuToFront;
-(void)setLeftNavBarButton:(id)arg1;
-(void)setLoaderView:(id)arg1;
-(void)setErrorView:(id)arg1;
-(void)setErrorCell:(id)arg1;
-(void)setTitleNavBarButton:(id)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(id)navigationItem;
-(void)setState:(unsigned)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)stopLoading:(BOOL)arg1;
-(BOOL)shouldHideStatusBar;
-(void)refresh;
-(void).cxx_destruct;
@end