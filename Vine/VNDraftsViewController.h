/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:34 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIScrollViewDelegate.h>
#import <UIActionSheetDelegate.h>

@interface VNDraftsViewController : VNCaptureFlowViewController <UIScrollViewDelegate, UIActionSheetDelegate> {
	UIScrollView* _draftsScrollView; 
	VNPageControl* _pageControl; 
	VNDraft* _activeDraft; 
	NSMutableArray* _draftCells; 
}
@property (assign,nonatomic,__weak) UIScrollView* draftsScrollView; 				//@synthesize draftsScrollView=_draftsScrollView - In the implementation block
@property (assign,nonatomic,__weak) VNPageControl* pageControl; 				//@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) VNDraft* activeDraft; 				//@synthesize activeDraft=_activeDraft - In the implementation block
@property (nonatomic,retain) NSMutableArray* draftCells; 				//@synthesize draftCells=_draftCells - In the implementation block
-(void)setActiveDraft:(id)arg1;
-(void)draftTapped:(id)arg1;
-(void)draftTrashTapped:(id)arg1;
-(void)layoutCells;
-(void)updateDraftPreviewVideo;
-(void)setDraftsScrollView:(id)arg1;
-(void)animateCamera;
-(id)currentCell;
-(void)delayUpdateDraftPreviewVideo;
-(void)checkCameraCell;
-(void)pageChanged:(id)arg1;
-(void)setDraftCells:(id)arg1;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2;
-(void)setPageControl:(id)arg1;
-(void).cxx_destruct;
@end