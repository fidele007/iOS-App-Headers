/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:15 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPAttributedLabel : UILabel {
	struct __CTFramesetter* _framesetter; 
	struct __CTFrame* _textFrame; 
	NSDictionary* _linkActionsForRanges; 
	id _linkTarget; 
	NSValue* _activeLinkRange; 
}
@property (nonatomic,copy) NSAttributedString* attributedText; 
-(void)destroyFramesetter;
-(float)touchOffsetForLineHeight:(float)arg1;
-(BOOL)offsetRect:(CGRect)arg1 ContainsPoint:(CGPoint)arg2;
-(void)ensureFramesetter;
-(id)linkRangeAtPoint:(CGPoint)arg1;
-(void)colorRange:(struct _NSRange)arg1 color:(id)arg2;
-(void)setAttributedText:(id)arg1 withLinkTarget:(id)arg2 actions:(id)arg3;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setNeedsDisplay;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2;
-(CGSize)intrinsicContentSize;
-(void)setAttributedText:(id)arg1;
-(void)drawTextInRect:(CGRect)arg1;
@end