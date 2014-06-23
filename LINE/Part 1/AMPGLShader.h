/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:17 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPGLShader : NSObject {
	AMPGLContext* mContext; 
	unsigned mHandle; 
}
@property (nonatomic,copy) unsigned handle; 
+(id)shaderWithPath:(id)arg1 type:(unsigned)arg2 context:(id)arg3;
+(id)shaderWithString:(id)arg1 type:(unsigned)arg2 context:(id)arg3;
-(id)infoLog;
-(void)compileShaderWithString:(id)arg1 type:(unsigned)arg2;
-(id)initWithString:(id)arg1 type:(unsigned)arg2 context:(id)arg3;
-(void)dealloc;
@end