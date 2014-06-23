/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:52 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPGLProgram : NSObject {
	AMPGLContext* mContext; 
	unsigned mHandle; 
	NSMutableArray* mShaders; 
}
@property (nonatomic,copy) unsigned handle; 
@property (nonatomic,copy) NSArray* shaders; 
-(void)detachShader:(id)arg1;
-(int)attributeLocationForName:(id)arg1;
-(void)bindAttributeLocation:(unsigned)arg1 forName:(id)arg2;
-(id)infoLog;
-(void)attachShader:(id)arg1;
-(int)uniformLocationForName:(id)arg1;
-(void)validate;
-(void)dealloc;
-(id)initWithContext:(id)arg1;
-(void)use;
-(void)link;
@end