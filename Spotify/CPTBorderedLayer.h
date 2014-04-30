/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:52 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTBorderedLayer : CPTAnnotationHostLayer {
	CPTLineStyle* borderLineStyle; 
	CPTFill* fill; 
}
@property (nonatomic,copy) CPTLineStyle* borderLineStyle; 
@property (nonatomic,copy) CPTFill* fill; 
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(void)sublayerMarginLeft:(float*)arg1 top:(float*)arg2 right:(float*)arg3 bottom:(float*)arg4;
-(struct CGPath*)sublayerMaskingPath;
-(struct CGPath*)maskingPath;
-(void)setBorderLineStyle:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setFill:(id)arg1;
@end