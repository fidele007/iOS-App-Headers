/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:45 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPGLContext : NSObject {
	EAGLContext* mOpenGLContext; 
}
-(id)initWithOpenGLContext:(id)arg1;
-(void)dealloc;
-(void)performBlock:(id)arg1;
-(id)openGLContext;
-(BOOL)supportsExtension:(id)arg1;
@end