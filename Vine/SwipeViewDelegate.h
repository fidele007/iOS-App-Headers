/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:19 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol VNCutIndicatorDelegate
@required
-(void)cutIndicatorWillStartDragging(id):arg1 ;
-(void)cutIndicator(id):arg1 didDragToPosition({):arg2 ;
-(void)cutIndicatorWillStopDragging(id):arg1 ;
-(void)cutIndicatorDidStopDragging(id):arg1 ;
-(void)cutIndicatorSelected(id):arg1 ;
-(void)cutIndicatorDeselected(id):arg1 ;
-(void)cutIndicatorWillStartDragging(id):arg1 ;
-(void)cutIndicator(id):arg1 didDragToPosition({):arg2 ;
-(void)cutIndicatorWillStopDragging(id):arg1 ;
-(void)cutIndicatorDidStopDragging(id):arg1 ;
-(void)cutIndicatorSelected(id):arg1 ;
-(void)cutIndicatorDeselected(id):arg1 ;
@end

@protocol UINavigationControllerDelegate
@optional
-(void)navigationController(id):arg1 willShowViewController(id):arg2 animated(BOOL):arg3 ;
-(void)navigationController(id):arg1 didShowViewController(id):arg2 animated(BOOL):arg3 ;
-(id)navigationController(id):arg1 animationControllerForOperation(int):arg2 fromViewController(id):arg3 toViewController(id):arg4 ;
-(id)navigationController(id):arg1 interactionControllerForAnimationController(id):arg2 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations(id):arg1 ;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation(id):arg1 ;
@end

@protocol VNAssetPlayerViewDelegate
@required
-(void)assetPlayerView(id):arg1 cutChanged(id):arg2 index(int):arg3 ;
-(void)assetPlayerViewPlaybackComplete(id):arg1 ;
-(void)assetPlayerView(id):arg1 cutChanged(id):arg2 index(int):arg3 ;
-(void)assetPlayerViewPlaybackComplete(id):arg1 ;
@end

@protocol SwipeViewDataSource
@required
-(id)swipeView(id):arg1 viewForItemAtIndex(int):arg2 reusingView(id):arg3 ;
-(int)numberOfItemsInSwipeView(id):arg1 ;
-(id)swipeView(id):arg1 viewForItemAtIndex(int):arg2 reusingView(id):arg3 ;
-(int)numberOfItemsInSwipeView(id):arg1 ;
@end

@protocol SwipeViewDelegate
@optional
-({)swipeViewItemSize(unsigned char):arg1 ;
-(void)swipeViewDidScroll(id):arg1 ;
-(void)swipeViewCurrentItemIndexDidChange(id):arg1 ;
-(void)swipeViewWillBeginDragging(id):arg1 ;
-(void)swipeViewDidEndDragging(id):arg1 willDecelerate(BOOL):arg2 ;
-(void)swipeViewWillBeginDecelerating(id):arg1 ;
-(void)swipeViewDidEndDecelerating(id):arg1 ;
-(void)swipeViewDidEndScrollingAnimation(id):arg1 ;
-(BOOL)swipeView(id):arg1 shouldSelectItemAtIndex(int):arg2 ;
-(void)swipeView(id):arg1 didSelectItemAtIndex(int):arg2 ;
@end
