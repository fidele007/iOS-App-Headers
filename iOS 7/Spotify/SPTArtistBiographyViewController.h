/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:23 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTSingleRequestViewModelDelegate.h>
#import <SPTArtistBiograhyViewDelegate.h>
#import <SPContentInsetViewController.h>

@interface SPTArtistBiographyViewController : UIViewController <SPTSingleRequestViewModelDelegate, SPTArtistBiograhyViewDelegate, SPContentInsetViewController> {
	NSURL* _viewURL; 
	SPTArtistViewModel* _viewModel; 
	SPTArtistCosmosLogger* _logger; 
	id<SPTArtistViewModelData> _viewData; 
	SPTProgressView* _progressView; 
	SPTInfoView* _infoView; 
	UIView<SPTArtistBiograhyView>* _biographyView; 
}
@property (nonatomic,retain) NSURL* viewURL; 				//@synthesize viewURL=_viewURL - In the implementation block
@property (nonatomic,retain) SPTArtistViewModel* viewModel; 				//@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) SPTArtistCosmosLogger* logger; 				//@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<SPTArtistViewModelData> viewData; 				//@synthesize viewData=_viewData - In the implementation block
@property (nonatomic,retain) SPTProgressView* progressView; 				//@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) SPTInfoView* infoView; 				//@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) UIView<SPTArtistBiograhyView>* biographyView; 				//@synthesize biographyView=_biographyView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsScrollViewInsets; 
-(void)sp_updateContentInsets;
-(id)initWithURL:(id)arg1 viewModel:(id)arg2 logger:(id)arg3;
-(void)setBiographyView:(id)arg1;
-(void)setInfoView:(id)arg1;
-(void)setViewData:(id)arg1;
-(void)viewModel:(id)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
-(void)viewModel:(id)arg1 didFailLoad:(id)arg2;
-(void)viewModel:(id)arg1 setLoading:(BOOL)arg2;
-(void)setViewURL:(id)arg1;
-(void)setViewModel:(id)arg1;
-(void)artistBiographyView:(id)arg1 didRequestURL:(id)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1;
-(id)URI;
-(void)setProgressView:(id)arg1;
-(void)setLogger:(id)arg1;
-(void).cxx_destruct;
@end