/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:42 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UITextViewDelegate.h>

@interface VNEntityTextViewHelper : NSObject <UITextViewDelegate> {
	VNEntityTextView* _textView; 
}
@property (nonatomic,retain) VNEntityTextView* textView; 				//@synthesize textView=_textView - In the implementation block
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)setTextView:(id)arg1;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(void)textViewDidChangeSelection:(id)arg1;
-(void).cxx_destruct;
@end