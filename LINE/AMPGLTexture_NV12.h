/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:32 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPGLTexture_NV12 : AMPGLTexture {
	unsigned[2] mHandle; 
	int mWidth; 
	int mHeight; 
	BOOL mHasImage; 
}
-(void)setImageWidth:(int)arg1 height:(int)arg2;
-(void)setImageBuffer:(const void**)arg1;
-(void)bind:(unsigned*)arg1;
-(void)dealloc;
-(id)initWithContext:(id)arg1;
-(BOOL)hasImage;
@end