/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:07 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNPreviewViewController : VNCaptureFlowViewController {
	VNAssetPlayerView* _playerView; 
	UIButton* _backButton; 
	UIButton* _editButton; 
	UIButton* _shareButton; 
	UIView* _tutorialBackground; 
	VNFontLabelMedium* _tutorialLabel; 
	APLCompositionDebugView* _compositionDebugView; 
	VNUploadOperation* _uploadOperation; 
}
@property (assign,nonatomic,__weak) VNAssetPlayerView* playerView; 				//@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic,__weak) UIButton* backButton; 				//@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton* editButton; 				//@synthesize editButton=_editButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton* shareButton; 				//@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) UIView* tutorialBackground; 				//@synthesize tutorialBackground=_tutorialBackground - In the implementation block
@property (nonatomic,retain) VNFontLabelMedium* tutorialLabel; 				//@synthesize tutorialLabel=_tutorialLabel - In the implementation block
@property (assign,nonatomic,__weak) APLCompositionDebugView* compositionDebugView; 				//@synthesize compositionDebugView=_compositionDebugView - In the implementation block
@property (nonatomic,retain) VNUploadOperation* uploadOperation; 				//@synthesize uploadOperation=_uploadOperation - In the implementation block
-(void)setTutorialBackground:(id)arg1;
-(void)setTutorialLabel:(id)arg1;
-(void)setEditButton:(id)arg1;
-(void)editButtonWasTapped:(id)arg1;
-(void)setBackButton:(id)arg1;
-(void)setPlayerView:(id)arg1;
-(void)setCompositionDebugView:(id)arg1;
-(void)onCompositionAvailable;
-(void)setShareButton:(id)arg1;
-(void)startUploading;
-(void)onDebugViewTapped:(id)arg1;
-(void)shareButtonWasTapped:(id)arg1;
-(void)backButtonWasTapped:(id)arg1;
-(void)setUploadOperation:(id)arg1;
-(void)applicationWillEnterForeground:(id)arg1;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2;
-(void).cxx_destruct;
@end