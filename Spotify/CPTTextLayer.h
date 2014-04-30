/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:46 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTTextLayer : CPTBorderedLayer {
	NSString* text; 
	CPTTextStyle* textStyle; 
}
@property (nonatomic,copy) NSString* text; 
@property (nonatomic,retain) CPTTextStyle* textStyle; 
-(id)initWithText:(id)arg1 style:(id)arg2;
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)description;
-(void)sizeToFit;
-(void)setText:(id)arg1;
-(void)setPaddingTop:(float)arg1;
-(void)setPaddingLeft:(float)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setPaddingBottom:(float)arg1;
-(void)setPaddingRight:(float)arg1;
-(id)initWithText:(id)arg1;
-(void)setShadow:(id)arg1;
-(CGSize)sizeThatFits;
-(void)setTextStyle:(id)arg1;
@end