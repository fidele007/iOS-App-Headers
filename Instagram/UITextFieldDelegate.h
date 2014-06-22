/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:10 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIGestureRecognizerDelegate
@optional
-(BOOL)gestureRecognizerShouldBegin(id):arg1 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRequireFailureOfGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldBeRequiredToFailByGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldReceiveTouch(id):arg2 ;
@end

@protocol IGCommentThreadTableSourceDelegate
@optional
-(void)commentThreadDataSource(id):arg1 didAddNewCommentAtIndexPath(id):arg2 ;
-(void)commentThreadDataSourceDidStartLoading(id):arg1 isLoadingMore(BOOL):arg2 ;
-(void)commentThreadDataSourceDidFinishLoading(id):arg1 ;
-(void)commentThreadDataSourceDidFailLoading(id):arg1 ;
-(void)commentThreadDataSourceTableWillDrag(id):arg1 ;
-(void)commentThreadDataSourceTableDidDrag(id):arg1 ;
-(void)commentThreadDataSourceTableWillEndDragging(id):arg1 withVelocity(float):arg2 ;
-(void)commentThreadDataSourceTableDidEndDragging(id):arg1 ;
-(void)commentThreadDataSource(id):arg1 didTapReplyToUser(id):arg2 inCommentCell(id):arg3 ;
-(id)commentThreadDataSource(id):arg1 viewForHeaderInSection(int):arg2 ;
-(float)commentThreadDataSource(id):arg1 heightHeaderInSection(int):arg2 ;
-(void)commentThreadDataSourceDeletedComment(id):arg1 didReportAsSpam(BOOL):arg2 ;
-(void)commentThreadDataSourceDidFailToDeleteComment(id):arg1 ;
@end

@protocol IGAutocompleteControllerDelegate
@optional
-(void)autocompleteController(id):arg1 willShowTableView(id):arg2 ;
-(void)autocompleteController(id):arg1 willHideTableView(id):arg2 ;
-(void)autocompleteControllerDidAutocomplete(id):arg1 ;
@end

@protocol IGGrowingTextViewDelegate
@optional
-(BOOL)growingTextViewShouldBeginEditing(id):arg1 ;
-(BOOL)growingTextViewShouldEndEditing(id):arg1 ;
-(void)growingTextViewDidBeginEditing(id):arg1 ;
-(void)growingTextViewDidEndEditing(id):arg1 ;
-(BOOL)growingTextView(id):arg1 shouldChangeTextInRange({):arg2 replacementText(_):arg3 ;
-(void)growingTextViewDidChange(id):arg1 ;
-(void)growingTextView(id):arg1 willChangeHeight(float):arg2 ;
-(void)growingTextView(id):arg1 didChangeHeight(float):arg2 ;
-(void)growingTextViewDidChangeSelection(id):arg1 ;
-(BOOL)growingTextViewShouldReturn(id):arg1 ;
-(BOOL)growingTextViewShouldAnimateOnHeightChange(id):arg1 ;
@end

@protocol UITextFieldDelegate
@optional
-(BOOL)textFieldShouldBeginEditing(id):arg1 ;
-(void)textFieldDidBeginEditing(id):arg1 ;
-(BOOL)textFieldShouldEndEditing(id):arg1 ;
-(void)textFieldDidEndEditing(id):arg1 ;
-(BOOL)textField(id):arg1 shouldChangeCharactersInRange({):arg2 replacementString(_):arg3 ;
-(BOOL)textFieldShouldClear(id):arg1 ;
-(BOOL)textFieldShouldReturn(id):arg1 ;
@end