/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:34 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIPopoverControllerDelegate
@optional
-(BOOL)popoverControllerShouldDismissPopover(id):arg1 ;
-(void)popoverControllerDidDismissPopover(id):arg1 ;
-(void)popoverController(id):arg1 willRepositionPopoverToRect(N):arg2 inView(*):arg3 ;
@end

@protocol PlayerOutputPopupDelegate
@required
-(void)showPopupFromView(id):arg1 ;
-(void)hidePopup;
-(void)showPopupFromView(id):arg1 ;
-(void)hidePopup;
@end

@protocol PlayerBarView
@property (assign,getter=isPlayPauseButtonHidden,nonatomic) BOOL hidePlayPauseButton; 
@required
-(void)registerControl(id):arg1 animated(BOOL):arg2 ;
-(BOOL)isPlayPauseButtonHidden;
-(void)setHidePlayPauseButton(BOOL):arg1 ;
-(void)registerControl(id):arg1 animated(BOOL):arg2 ;
-(BOOL)isPlayPauseButtonHidden;
-(void)setHidePlayPauseButton(BOOL):arg1 ;
@end
