/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:27 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNDraftsCell : UIView {
	VNDraft* _draft; 
	UIImageView* _thumbmailImageView; 
	UIButton* _actionButton; 
	UIButton* _trashButton; 
	VNAssetPlayerView* _playerView; 
	UIView* _captureView; 
	UIView* _progressView; 
}
@property (nonatomic,retain) VNDraft* draft; 				//@synthesize draft=_draft - In the implementation block
@property (nonatomic,retain) UIButton* actionButton; 				//@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIButton* trashButton; 				//@synthesize trashButton=_trashButton - In the implementation block
@property (nonatomic,retain) VNAssetPlayerView* playerView; 				//@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UIView* captureView; 				//@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) UIView* progressView; 				//@synthesize progressView=_progressView - In the implementation block
-(void)setDraft:(id)arg1;
-(id)initWithDraft:(id)arg1;
-(void)setPlayerView:(id)arg1;
-(void)enableVideo:(BOOL)arg1;
-(void)setActionButton:(id)arg1;
-(void)setTrashButton:(id)arg1;
-(void)setCaptureView:(id)arg1;
-(void)removeFromSuperview;
-(void)setProgressView:(id)arg1;
-(void).cxx_destruct;
@end