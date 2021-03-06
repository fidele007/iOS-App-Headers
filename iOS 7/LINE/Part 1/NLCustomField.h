/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:56 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLCustomField : UITextField {
	struct UIEdgeInsets borderRectInsets; 
	struct UIEdgeInsets textRectInsets; 
	struct UIEdgeInsets placeholderRectInsets; 
	struct UIEdgeInsets editingRectInsets; 
	struct UIEdgeInsets clearButtonRectInsets; 
	struct UIEdgeInsets leftViewRectInsets; 
	struct UIEdgeInsets rightViewRectInsets; 
}
@property (assign,nonatomic) struct UIEdgeInsets borderRectInsets; 
@property (assign,nonatomic) struct UIEdgeInsets textRectInsets; 
@property (assign,nonatomic) struct UIEdgeInsets placeholderRectInsets; 
@property (assign,nonatomic) struct UIEdgeInsets editingRectInsets; 
@property (assign,nonatomic) struct UIEdgeInsets clearButtonRectInsets; 
@property (assign,nonatomic) struct UIEdgeInsets leftViewRectInsets; 
@property (assign,nonatomic) struct UIEdgeInsets rightViewRectInsets; 
-(void)setBorderRectInsets:(struct UIEdgeInsets)arg1;
-(void)setTextRectInsets:(struct UIEdgeInsets)arg1;
-(void)setPlaceholderRectInsets:(struct UIEdgeInsets)arg1;
-(void)setEditingRectInsets:(struct UIEdgeInsets)arg1;
-(void)setClearButtonRectInsets:(struct UIEdgeInsets)arg1;
-(void)setLeftViewRectInsets:(struct UIEdgeInsets)arg1;
-(void)setRightViewRectInsets:(struct UIEdgeInsets)arg1;
-(CGRect)editingRectForBounds:(CGRect)arg1;
-(CGRect)textRectForBounds:(CGRect)arg1;
-(CGRect)rightViewRectForBounds:(CGRect)arg1;
-(CGRect)leftViewRectForBounds:(CGRect)arg1;
-(CGRect)placeholderRectForBounds:(CGRect)arg1;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1;
-(CGRect)borderRectForBounds:(CGRect)arg1;
@end