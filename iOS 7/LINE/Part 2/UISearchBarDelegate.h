/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:18 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol FriendsPickerViewControllerDelegate
@optional
-(void)friendsPickerViewControllerDidCancel(id):arg1 ;
@required
-(void)friendsPickerViewController(id):arg1 didFinishPickingItems(id):arg2 ;
-(void)friendsPickerViewController(id):arg1 didFinishPickingItems(id):arg2 ;
@end

@protocol UIScrollViewDelegate
@optional
-(void)scrollViewDidScroll(id):arg1 ;
-(void)scrollViewDidZoom(id):arg1 ;
-(void)scrollViewWillBeginDragging(id):arg1 ;
-(void)scrollViewWillEndDragging(id):arg1 withVelocity({):arg2 targetContentOffset(unsigned char):arg3 ;
-(void)scrollViewDidEndDragging(id):arg1 willDecelerate(BOOL):arg2 ;
-(void)scrollViewWillBeginDecelerating(id):arg1 ;
-(void)scrollViewDidEndDecelerating(id):arg1 ;
-(void)scrollViewDidEndScrollingAnimation(id):arg1 ;
-(id)viewForZoomingInScrollView(id):arg1 ;
-(void)scrollViewWillBeginZooming(id):arg1 withView(id):arg2 ;
-(void)scrollViewDidEndZooming(id):arg1 withView(id):arg2 atScale(float):arg3 ;
-(BOOL)scrollViewShouldScrollToTop(id):arg1 ;
-(void)scrollViewDidScrollToTop(id):arg1 ;
@end

@protocol UIAlertViewDelegate
@optional
-(void)alertView(id):arg1 clickedButtonAtIndex(int):arg2 ;
-(void)alertView(id):arg1 didDismissWithButtonIndex(int):arg2 ;
-(void)alertViewCancel(id):arg1 ;
-(BOOL)alertViewShouldEnableFirstOtherButton(id):arg1 ;
-(void)didPresentAlertView(id):arg1 ;
-(void)willPresentAlertView(id):arg1 ;
-(void)alertView(id):arg1 willDismissWithButtonIndex(int):arg2 ;
@end

@protocol LineNavigationControllerDelegate
@required
-(BOOL)shouldDismissViewController;
-(BOOL)shouldDismissViewController;
@end

@protocol StickerShopSegmentControllerDelegate
@optional
-(void)tappedRightButton(id):arg1 ;
@required
-(void)changeSegment(id):arg1 ;
-(void)changeSegment(id):arg1 ;
@end

@protocol UISearchBarDelegate
@optional
-(void)searchBar(id):arg1 textDidChange(id):arg2 ;
-(void)searchBar(id):arg1 selectedScopeButtonIndexDidChange(int):arg2 ;
-(BOOL)searchBarShouldBeginEditing(id):arg1 ;
-(BOOL)searchBarShouldEndEditing(id):arg1 ;
-(void)searchBarCancelButtonClicked(id):arg1 ;
-(void)searchBarBookmarkButtonClicked(id):arg1 ;
-(void)searchBarResultsListButtonClicked(id):arg1 ;
-(void)searchBarTextDidBeginEditing(id):arg1 ;
-(void)searchBarTextDidEndEditing(id):arg1 ;
-(void)searchBarSearchButtonClicked(id):arg1 ;
-(BOOL)searchBar(id):arg1 shouldChangeTextInRange({):arg2 replacementText(_):arg3 ;
@end