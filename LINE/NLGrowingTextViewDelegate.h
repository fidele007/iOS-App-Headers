/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:45 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol NLGrowingTextViewDelegate
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
-(void)growingTextViewIsGoingToExceedInputMaxLength(id):arg1 ;
-(void)growingTextViewDidTapTextView(id):arg1 ;
@end