/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:01 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ZBarCVImage : ZBarImage {
	struct __CVBuffer* pixelBuffer; 
	void* rgbBuffer; 
	NSInvocationOperation* conversion; 
}
@property (assign,nonatomic) struct __CVBuffer* pixelBuffer; 
@property (nonatomic,copy) void* rgbBuffer; 
-(void)setPixelBuffer:(struct __CVBuffer*)arg1;
-(void)convertCVtoRGB;
-(void)waitUntilConverted;
-(id)UIImageWithOrientation:(int)arg1;
-(void)dealloc;
@end